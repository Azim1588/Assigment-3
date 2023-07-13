# Assigment 3

Expression Manager
Expression Manager is a  program that performs operations on mathematical expressions. It provides functionality to check the balance of parentheses and convert infix expressions to postfix notation.
Features
Balanced Parentheses Check: The isBalanced function checks whether an expression has balanced parentheses and brackets. It uses a stack data structure to track opening and closing brackets, returns true if the expression is balanced, and false otherwise.
Infix to Postfix Conversion: The infixToPostfix function converts an infix expression to postfix notation. It supports basic arithmetic operators such as +, -, *, /, and %. The function uses a stack to handle the conversion process, adhering to operator precedence rules.
Operand and Operator Recognition: The program includes helper functions to identify operands and operators within an expression. The operand function determines whether a character is a valid operand (assumed to be a single alphanumeric character), while the operator function checks for valid operators.
Operator Precedence: The program assigns precedence values to the supported operators. The getOperatorPrecedence function returns the precedence level of a given operator, with higher values indicating higher precedence.
Usage
To use the Expression Manager program:!

Create an instance of the ExpressionManager class.
Use the isBalanced function to check the balance of parentheses in an expression. Pass the expression as a string parameter. The function returns true if the parentheses are balanced and false otherwise.
Utilize the infixToPostfix function to convert an infix expression to postfix notation. Provide the infix expression as a string parameter. The function returns the corresponding postfix expression as a string. An "Invalid expression" message will be returned if the provided expression contains mismatched parentheses.

![Screenshot 2023-07-12 123730](https://github.com/Azim1588/Assigment-3/assets/114971320/073816cf-22cb-45bc-9e0b-0aaf13d176ba)

