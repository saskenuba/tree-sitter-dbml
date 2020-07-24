module.exports = grammar({
  name: "dbml",

	word: $ => $.identifier,

  rules: {

	  project_file: $ => repeat($._declaration),

	  // TODO: default, ref_inline, note
	  attribute_kind: $ => choice(
		  'not null',
		  'pk',
		  'primary key',
		  'unique',
		  'increment',
	  ),

	  //
	  operators: $ => choice(
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

	_declaration: $ => choice(
		$.table_definition,
		$.enum_definition,
	),


	  table_definition: $ => seq(
		  'table',
		  field('name', $.identifier),
		  field('fields', $.fields_declaration_list),
	  ),

	  enum_definition: $ => seq(
		  'enum',
		  field('name', $.identifier)
	  ),

	  fields_declaration_list: $ => seq(
		  '{',
		  repeat1($.field_declaration),
		  '}',
	  ),

	  field_declaration: $ => seq(
		  field('name', $.identifier),
		  field('type', $.primitive_type),
	  ),

	  identifier: $ => /[a-z]+/,


  }
});
