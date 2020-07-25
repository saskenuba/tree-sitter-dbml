module.exports = grammar({
    name: "dbml",

    extras: $ => [
        $.comment,
        /\s|\\\r?\n\t/
    ],

    word: $ => $.identifier,

    inline: $ => [
        $.alias,
        $._declaration_block,
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
            $.relationship_definition, // inline relationship
        ),

        //_relationship_declaration_inline: $ => sep1($.identifier, '.'),

        cardinality_op: $ => choice(
            '<',
            '>',
            '-',
        ),

        primitive_type: $ => choice(
            'int',
            'float',
            'bool',
            'text',
        ),

        custom_type: $ => $.identifier,

        alias: $ => seq(
            'as',
            $.identifier,
        ),

        _declaration: $ => choice(
            $.table_definition,
            $.enum_definition,
            $.relationship_definition,
        ),

        _declaration_block: $ => seq(
            '{',
            choice(
                $._relationship_declaration_inline,
                $.field_declaration_list,
            ),
            '}',
        ),

        table_definition: $ => seq(
            'table',
            field('name', $.identifier),
            optional(
                field('alias', $.alias),
            ),
            field('fields', $._declaration_block),
        ),

        enum_definition: $ => seq(
            'enum', field('name', $.identifier)
        ),

        field_declaration_list: $ => repeat1($.field_declaration),

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

        _relationship_declaration_long: $ => seq(
            field('name', $.identifier),
            $._declaration_block,
        ),

        relationship_definition: $ => seq(
            $._relationship_token,
            choice(
                $._relationship_declaration_long,
                $._relationship_declaration_inline,
                $._relationship_declaration_short,
            )),

        // FIXME: ref should be case insentive
        _relationship_token: $ => token(
            seq(
                'ref', optional(':'),
            )
        ),

        _relationship_declaration_short: $ => seq(
            $.table_relationship,
            $.cardinality_op,
            $.table_relationship,
        ),

        _relationship_declaration_inline: $ => seq(
            $.cardinality_op,
            $.table_relationship,
        ),

        table_relationship: $ => seq(field('table', $._table_ident), '.', field('column', $._table_ident)),

        // For relationship declarations, DBML accepts column names and table names encased with quotes
        _table_ident: $ => alias(/["a-zA-Z_]+/, $.identifier),

        // FIXME: Missing numbers after first char, and case insensitive
        identifier: $ => /[a-zA-Z_]+/,

        comment: $ => seq('//', /.*/),

    }
});

function commaSep1(rule) {
    return sep1(rule, ',');
}

function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)));
}
