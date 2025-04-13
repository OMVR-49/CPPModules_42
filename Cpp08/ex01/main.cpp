#include "Span.hpp"
#include <iostream>

int main() {
    {
        std::cout << "====== Basic Test (from subject) ======" << std::endl;
        Span sp = Span(5);
        
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    }
    {
        std::cout << "\n====== Large Test (10,000 numbers) ======" << std::endl;
        try {
            Span largeSpan(10000);
            
            std::vector<int> numbers;
            for (int i = 0; i < 10000; i++) {
                numbers.push_back(i);
            }
            
            largeSpan.addRange(numbers.begin(), numbers.end());
            
            std::cout << "Shortest span: " << largeSpan.shortestSpan() << std::endl;
            std::cout << "Longest span: " << largeSpan.longestSpan() << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Exception: " << e.what() << std::endl;
        }
    }
    {
        std::cout << "\n====== Exception Tests ======" << std::endl;

        Span smallSpan(3);
        smallSpan.addNumber(1);
        smallSpan.addNumber(2);
        smallSpan.addNumber(3);
        
        try {
            smallSpan.addNumber(4);
            std::cout << "Exception didn't catched: No exception thrown when adding too many elements" << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Exception catched: " << e.what() << std::endl;
        }
        
        Span emptySpan(5);
        try {
            emptySpan.shortestSpan();
            std::cout << "Exception didn't catched: No exception thrown for shortestSpan on empty container" << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Exception catched: " << e.what() << std::endl;
        }
    }
    // Test addRange with too many elements
    {
        std::cout << "\n====== addRange Exception Test ======" << std::endl;
        Span sp(5);

        try {
            std::vector<int> nums;
            for (int i = 0; i < 10; i++) {
                nums.push_back(i);
            }
            sp.addRange(nums.begin(), nums.end());
            std::cout << "Exception didn't catched: No exception thrown when adding too many elements with addRange" << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Exception catched: " << e.what() << std::endl;
        }
    }
    return 0;
}