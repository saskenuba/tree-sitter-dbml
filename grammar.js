module.exports = grammar({
  name: "dbml",

	extras: $ => [/\s|\\\r?\n\t/],
	word: $ => $.identifier,

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
	  ),

	  //
	  cardinality_operator: $ => choice(
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

	  alias: $ => seq(
		  'as', 
		  $.identifier,
	  ),

	_declaration: $ => choice(
		$.table_definition,
		$.enum_definition,
		$.relationship_definition,
	),


	  table_definition: $ => seq(
		  'table',
		  field('name', $.identifier),
		  optional(
			  field('alias', $.alias),
		  ),
		  field('fields', $.field_declaration_list),
	  ),

	  enum_definition: $ => seq(
		  'enum',
		  field('name', $.identifier)
	  ),

	  field_declaration_list: $ => seq(
		  '{',
		  repeat1($.field_declaration),
		  '}',
	  ),

	  field_declaration: $ => seq(
		  field('name', $.identifier),
		  field('type', $.primitive_type),
		  optional(
			  field('attributes', $.field_attribute_list)
		  ),
	  ),

	  field_attribute_list: $ => seq(
		  '[',
		  repeat1($.attribute_kind),
		  ']',
	  ),

	  relationship_definition: $ => seq(
		  $.relationship_token,
		  $.cardinality_operator,
	  ),

	  relationship_token: $ => token(
		  seq(
			  'ref',
			  optional(':'),
		  )
	  ),

	  identifier: $ => /[a-zA-Z_]+/,


  }
});
