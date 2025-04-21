// ex01/RPN.cpp
#include "RPN.hpp"
#include <sstream>
#include <stdexcept>
#include <cctype>

// OCCF:
RPN::RPN() {}
RPN::~RPN() {}
RPN::RPN(const RPN& other) {
    *this = other;
}
RPN& RPN::operator=(const RPN& other) {
    if (this != &other) {
        st_ = other.st_;
    }
    return *this;
}

// Ex requirements:
void RPN::applyOp(char op) {
    if (st_.size() < 2)
        throw std::runtime_error("Error");
    
    int rhs = st_.top(); st_.pop();
    int lhs = st_.top(); st_.pop();

    int res;
    switch (op) {
        case '+': res = lhs + rhs; break;
        case '-': res = lhs - rhs; break;
        case '*': res = lhs * rhs; break;
        case '/':
            if (rhs == 0) throw std::runtime_error("Error: division by zero");
            res = lhs / rhs;
            break;
        default:
            throw std::runtime_error("Error: unknown operator");
    }
    st_.push(res);
}

int RPN::evaluate(const std::string& expr) {
    // Clear the stack in case it was used before
    while (!st_.empty()) {
        st_.pop();
    }

    if (expr.empty()) {
        throw std::runtime_error("Error: empty expression");
    }

    std::istringstream iss(expr);
    std::string token;

    while (iss >> token) {
        // Check if token is a single digit
        if (token.size() == 1 && std::isdigit(token[0])) {
            st_.push(token[0] - '0');
        }
        // Check if token is an operator
        else if (token.size() == 1 && (token[0] == '+' || token[0] == '-' || 
                                      token[0] == '*' || token[0] == '/')) {
            applyOp(token[0]);
        }
        else {
            throw std::runtime_error("Error: invalid token '" + token + "'");
        }
    }

    // After processing all tokens, we should have exactly one value on the stack
    if (st_.size() != 1) {
        throw std::runtime_error("Error: expression incomplete or too many operands");
    }
    return st_.top();
}
