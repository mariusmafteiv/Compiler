# Design an original programming language using YACC

  ## 1. Your language should should include
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

***

  ## 2. Create a symbol  table for every input source program in your language, which should include:
  <ul>
      <li>information regarding variable or constant identifiers  ( type, value )</li>
      <li>information regarding function identifiers (the returned type, the type and and name of each formal parameter)</li>
      <li> The symbol table should be printable in two files: symbol_table.txt and    symbol_table_functions.txt (for functions)</li>
  </ul>

***

  ## 3. Provide semantic analysis and check that:
  <ul>
    <li>any variable that appears in a program has been previously defined and any function that is called has been defined</li>
    <li>a variable should not be declared more than once;</li>
    <li>all the operands in the right side of an expression must have the same type (the    language should not support casting)</li>
    <li>the left side of an assignment has the same type as the right side (the left side can be an element of an array, an identifier etc)</li>
    <li>the parameters of a function call have the types from the function definition</li>
    Detailed error messages should be provided if these conditions do not hold (e.g. which variable is not defined or it is defined twice and the program line); <br/>
    <u>A program in your language should not execute if there exist semantic or syntactic errors!</u>
  </ul>

  ***

  ## 4. Implement Eval and TypeOf
  <ul>
    <li>Implement TypeOf</li>
    Remark: TypeOf(x + f(y)) should cause a semantic error if TypeOf(x) != TypeOf(f(y)) (see 3(c) above)
    <li>In order to implement Eval, build abstract syntax trees (AST) for the arithmetic expressions in a program;</li>
    if  type of expr  is int , for every call of the form Eval(expr) , the AST for the expression will be evaluated and the actual value of expr will be printed. <br/>
    Also, for every assignment instruction left_value = expr (left_value is an identifier or element of an array with int type), the AST will be evaluated and its value will be assigned to the left_value <br/>
    AST: abstract syntax tree - built during parsing of expressions abstract syntax tree for an arithmetic expression:
    <ul>
        <li>inner nodes: operators</li>
        <li>leafs: operands of expressions (numbers, identifiers, vector elements, function calls etc)</li>
    </ul>
    <li>write a data structure representing an AST</li>
    <li>write a function which builds an AST:</li>
    <ul>
        buildAST(root, left_tree, right_tree, type) <br/>
        root: a number, an identifier, an operator a vector element, other operands <br/>
        type: an integer/ element of enum representing the root type
        <li>
            if expr is expr1 op expr2 (op is an operator)<br/>
            expr.AST = buildAST(op, expr1.AST, expr2.AST, OP) //OP denotes the root type
        </li>
        <li>
            if expr is an identifier X<br/>
            expr.AST = buildAST(X, null, null, IDENTIFIER)
        </li>
        <li>            
            if expr is a number n<br/>
            expr.AST = buildAST(n, null, null, NUMBER)
        </li>
        <li>
            if expr is other operand <br/>
            expr.AST = buildAST( “operand”, null, null, OTHER)
        </li>
    </ul>
        <li>write a function evalAST(ast) which evaluates an AST and returns an int:</li>
    <ul>
        <li>
            if ast is a leaf labeled with:
            <ul>
                <li>a number: return the number</li>
                <li>an id: return the value of the identifier</li>
                <li>anything else: return 0</li>
            </ul>
        </li>
        <li>
            else (ast is a tree with the root labeled with an operator):
             <ul>
                <li>evalAST for left and right tree</li>
                <li>combine the results according to the operation  </li>
            </ul>
        </li>
    </ul>
  </ul>
