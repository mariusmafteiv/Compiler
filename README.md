# Design an original programming language using YACC.

<ol>
  <li>Your language should should include</li>
  <ul>
    <li>type declarations: </li>
    <ul>
      <li>predefined types  ( int , float, char,  string, bool),</li>
      <li>array types  </li>
      <li>user defined data types (similar to classes in object orientated languages, but with your own syntax)</li>
    </ul>
    <li>variable declarations/definition, constant definitions, function definitions;</li>
    <li>control statements (if, for, while, etc.), assignment statements;</li>
    <li>assignment statements should be of the form: left_value  = expression (where left_value can be an identifier, an element of an array, or anything else specific to your language)</li>
    <li>arithmetic and boolean expressions;</li>
    <li>function calls which can have as parameters: expressions, other function calls, identifiers, constants,etc;</li>
    Your language should include a  predefined function Eval(arg) (arg can be an arithmetic expression,  variable or number ) and a predefined function TypeOf(arg);
    Your programs should be structured in 4 sections: a section for global variables, a section for functions, a section for user defined data types and a special function representing the entry point of the program.
  </ul>
</ol>
