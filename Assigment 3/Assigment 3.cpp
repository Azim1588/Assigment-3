#include <iostream>
#include <string>
#include "ExpressionManager.h"

int main() {
    std::string expression;
    std::cout << "Enter an infix expression: ";
    std::getline(std::cin, expression);

    ExpressionManager manager;

    if (!manager.isBalanced(expression)) {
        std::cout << "Invalid expression: Unbalanced parentheses" << std::endl;
        return 0;
    }

    std::string postfix = manager.infixToPostfix(expression);
    std::cout << "Postfix expression: " << postfix << std::endl;

    return 0;
}
