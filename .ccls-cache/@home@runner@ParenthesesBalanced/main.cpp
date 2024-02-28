#include "BalancedParentheses.h"

using namespace std;


bool isBalancedParentheses(const string& parentheses) {
     std::stack<char> stack;

    for (char c : parentheses) {
        if (c == '(') {
            stack.push(c);
        } else if (c == ')') {
            if (stack.empty() || stack.top() != '(') {
                return false;
            }
            stack.pop();
        }
    }

    return stack.empty();
}