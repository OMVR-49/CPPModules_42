#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main() {
    int values[] = {5, 3, 17, 9, 11};
    int size = sizeof(values) / sizeof(values[0]);

    // Test 1: std::vector<int>
    {
        std::vector<int> vec(values, values + size);
        std::cout << "===== Testing vector =====" << std::endl;
        try {
            std::vector<int>::const_iterator it = easyfind(vec, 17);
            std::cout << "Found 17 at index: " << (it - vec.begin()) << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
        try {
            easyfind(vec, 42); // Not in container
            std::cout << "Found 42 (unreachable)" << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    // Test 2: std::list<int>
    {
        std::list<int> lst(values, values + size);
        std::cout << "\n===== Testing list =====" << std::endl;
        try {
            std::list<int>::const_iterator it = easyfind(lst, 9);
            std::cout << "Found 9 in list" << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
        try {
            easyfind(lst, 100); // Not in container
            std::cout << "Found 100 (unreachable)" << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    // Test 3: std::deque<int>
    {
        std::deque<int> deq(values, values + size);
        std::cout << "\n===== Testing deque =====" << std::endl;
        try {
            std::deque<int>::const_iterator it = easyfind(deq, 3);
            std::cout << "Found 3 at index: " << (it - deq.begin()) << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
        try {
            easyfind(deq, -5); // Not in container
            std::cout << "Found -5 (unreachable)" << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    // Test 4: Empty container
    {
        std::vector<int> emptyVec;
        std::cout << "\n===== Testing empty vector =====" << std::endl;
        try {
            easyfind(emptyVec, 0); // Container is empty
            std::cout << "Found 0 (unreachable)" << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    return 0;
}