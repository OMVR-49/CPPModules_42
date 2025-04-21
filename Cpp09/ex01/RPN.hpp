// ex01/RPN.hpp
#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>

class RPN {
private:
    std::stack<int> st_;
    // Apply operator to the top two elements of the stack
    void applyOp(char op);
public:
    // OCCF
        RPN();
        ~RPN();
        RPN(const RPN& other);
        RPN& operator=(const RPN& other);
    
    // Evaluate RPN expression
        int evaluate(const std::string& expr);
};

#endif // RPN_HPP