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
        $.table_alias,
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
            alias($.relationship_declaration_inline, $.relationship_declaration), // inline table_field
        ),

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

        table_alias: $ => seq(
            'as',
            field('alias', $.identifier),
        ),

        _declaration: $ => choice(
            $.table_definition,
            $.tablegroup_definition,
            $.enum_definition,
            $.relationship_declaration,
        ),

        field_declaration_list: $ => seq(
            '{', optional(repeat1($._type_field)), '}',
        ),

        // TODO: Table may have a field, or a index
        table_definition: $ => seq(
            'table',
            field('name', $.identifier),
            optional($.table_alias),
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

        relationship_declaration: $ =>
            seq(
                caseInsensitive('ref'),
                optional($.identifier),
                field('body', $._relationship_body_block),
            ),

        _relationship_body_block: $ => choice(
            seq('{', optional($.relationship_body), '}'),
            seq(':', optional($.relationship_body)),
        ),

        // TODO: relationships (not inlined) may have settings, such as:
        // delete / update: cascade | restrict | set null | set default | no action
        relationship_body: $ =>
            seq(
                choice(
                    seq($.table_field),
                    seq($.table_field, $.cardinality_op),
                    seq($.table_field, $.cardinality_op, $.table_field),
                ),
                optional($.relationship_settings_list),
            ),

        relationship_body_inline: $ => seq(
            $.cardinality_op,
            $.table_field,
        ),

        relationship_declaration_inline: $ => seq(
            'ref:',
            field('body', alias($.relationship_body_inline, $.relationship_body)),
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

        table_field: $ => choice(
            seq(field('table', $.identifier)),
            seq(field('table', $.identifier), '.'),
            seq(field('table', $.identifier), '.', field('column', $.identifier)),
        ),


        // FIXME: Missing numbers after first char, and case insensitive
        identifier: $ => /[0-9a-zA-Z_]+/,
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

function takeAny(...args) {
    let sequences = [];

    for (let [index, value] of args.entries()) {
        let slice = args.slice(0, index);
        sequences.push(seq(slice));
    }

    return choice(sequences);
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
