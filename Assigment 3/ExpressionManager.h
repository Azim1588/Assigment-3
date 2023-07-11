
#include <string>
#include <stack>
#include <queue>

class ExpressionManager {
public:
    bool isBalanced(const std::string& expression);
    std::string infixToPostfix(const std::string& expression);

private:
    bool isOperator(char ch);
    bool isOperand(char ch);
    int getOperatorPrecedence(char op);
};




