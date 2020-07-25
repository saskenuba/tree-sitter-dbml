module.exports = grammar({
    name: "dbml",

    extras: $ => [
        $.comment,
        /\s|\\\r?\n\t/
    ],

    word: $ => $.identifier,

    supertypes: $ => [
        $._declaration
    ],

    inline: $ => [
        $.alias,
    ],

    rules: {

        project_file: $ => repeat($._declaration),

        // TODO: default, ref_inline, note
        attribute_kind: $ => choice(
            'not null',
            'null',
            'pk',
            'primary key',
            'unique',
            'increment',
            $.relationship_declaration_inline, // inline relationship
        ),

        //relationship_declaration_inline: $ => sep1($.identifier, '.'),

        cardinality_op: $ => choice(
            '<',
            '>',
            '-',
        ),

        primitive_type: $ => choice(
            /int|integer/,
            /bool|boolean/,
            'float',
            'text',
            'varchar',
        ),

        custom_type: $ => $.identifier,

        alias: $ => seq(
            'as',
            $.identifier,
        ),

        _declaration: $ => choice(
            $.table_definition,
            $.tablegroup_definition,
            $.enum_definition,
            $.relationship_definition_top_level,
        ),

        field_declaration_list: $ => seq(
            '{', repeat1($._type_field), '}',
        ),

        // TODO: Table may have a field, or a index
        table_definition: $ => seq(
            'table',
            field('name', $.identifier),
            optional(
                field('alias', $.alias),
            ),
            field('fields', $.field_declaration_list),
        ),

        _type_field: $ => choice(
            $.field_declaration,
            $.index_declaration,
        ),

        field_declaration: $ => seq(
            field('name', $.identifier),
            field('type', choice($.primitive_type, $.custom_type)),
            optional(
                field('attributes', $.field_attribute_list)
            ),
        ),

        field_attribute_list: $ => seq(
            '[', commaSep1($.attribute_kind), ']',
        ),

        index_declaration: $ => seq(
            'indexes', '{', $.index_attribute_list, '}',
        ),

        // TODO: finish all index attributes
        index_attribute_list: $ => repeat1($.identifier),

        relationship_definition_top_level: $ =>
            seq(
                caseInsensitive('ref'),
                choice(
                    seq(optional(field('name', $.identifier)), ':', $.relationship_declaration_full),
                    seq(optional(field('name', $.identifier)), '{', $.relationship_declaration_full, '}'),
                ),
            ),

        // TODO: relationships (not inlined) may have settings, such as:
        // delete / update: cascade | restrict | set null | set default | no action
        relationship_declaration_full: $ => seq(
            $.relationship,
            $.cardinality_op,
            $.relationship,
            optional($.relationship_settings_list),
        ),

        relationship_declaration_inline: $ => seq(
            'ref:',
            $.cardinality_op,
            $.relationship,
        ),

        relationship_settings_list: $ => seq(
            '[', commaSep1($.relationship_settings), ']',
        ),


        relationship_settings: $ => choice(
            seq(/delete:|update:/, $.relationship_parameter)
        ),

        relationship_parameter: $ => choice(
            'set default',
            'set null',
            'restrict',
            'no action',
            'cascade',
        ),

        relationship: $ => seq(field('table', $._table_ident), '.', field('column', $._table_ident)),

        // For relationship declarations, DBML accepts column names and table names encased with quotes
        _table_ident: $ => alias(/["a-z-A-Z"]["0-9a-zA-Z_]+/, $.identifier),

        // FIXME: Missing numbers after first char, and case insensitive
        identifier: $ => /[a-zA-Z_]+/,
        comment: $ => seq('//', /.*/),

        enum_definition: $ => seq(
            'enum', field('name', $.identifier), field('body', $.enumerator_list),
        ),

        enumerator_list: $ => seq(
            '{', repeat1($.enumerator), '}',
        ),

        enumerator: $ => seq(
            field('name', $.identifier),
        ),

        tablegroup_definition: $ => seq(
            /[tT]ablegroup/,
            field('name', $.identifier),
            field('body', $.tablegroup_list),
        ),

        tablegroup_list: $ => seq(
            '{', repeat1(field('name', $.identifier)), '}',
        ),

    }
});

function commaSep1(rule) {
    return sep1(rule, ',');
}

function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)));
}

function toCaseInsensitive(a) {
    var ca = a.charCodeAt(0);
    if (ca >= 97 && ca <= 122) return `[${a}${a.toUpperCase()}]`;
    if (ca >= 65 && ca <= 90) return `[${a.toLowerCase()}${a}]`;
    return a;
}

function caseInsensitive(keyword) {
    return new RegExp(keyword
        .split('')
        .map(toCaseInsensitive)
        .join('')
    );
}
