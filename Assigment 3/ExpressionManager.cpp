#include "ExpressionManager.h"


bool ExpressionManager::isBalanced(const std::string& expression) {
    std::stack<char> stack;

    for (char ch : expression) {
        if (ch == '{' || ch == '(' || ch == '[') {
            stack.push(ch);
        }
        else if (ch == '}' || ch == ')' || ch == ']') {
            if (stack.empty()) {
                return false;  // Closing bracket without a corresponding opening bracket
            }

            char top = stack.top();
            stack.pop();

            if ((ch == '}' && top != '{') || (ch == ')' && top != '(') || (ch == ']' && top != '[')) {
                return false;  // Mismatched brackets
            }
        }
    }

    return stack.empty();  // All opening brackets must have been closed
}

std::string ExpressionManager::infixToPostfix(const std::string& expression) {
    std::stack<char> stack;
    std::string postfix;

    for (char ch : expression) {
        if (isOperand(ch)) {
            postfix += ch;
        }
        else if (isOperator(ch)) {
            while (!stack.empty() && stack.top() != '(' && getOperatorPrecedence(stack.top()) >= getOperatorPrecedence(ch)) {
                postfix += stack.top();
                stack.pop();
            }
            stack.push(ch);
        }
        else if (ch == '(') {
            stack.push(ch);
        }
        else if (ch == ')') {
            while (!stack.empty() && stack.top() != '(') {
                postfix += stack.top();
                stack.pop();
            }
            if (!stack.empty() && stack.top() == '(') {
                stack.pop();
            }
            else {
                // Mismatched parentheses
                return "Invalid expression";
            }
        }
    }

    while (!stack.empty()) {
        if (stack.top() == '(') {
            // Mismatched parentheses
            return "Invalid expression";
        }
        postfix += stack.top();
        stack.pop();
    }

    return postfix;
}

bool ExpressionManager::isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%';
}

bool ExpressionManager::isOperand(char ch) {
    // For simplicity, we assume operands are single characters
    return isalnum(ch);
}

int ExpressionManager::getOperatorPrecedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    else if (op == '*' || op == '/' || op == '%') {
        return 2;
    }
    return 0;
}



