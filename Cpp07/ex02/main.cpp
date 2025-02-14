#include "Array.hpp"
#include <iostream>

int main() {
    // Test 1: Empty array
    Array<int> arr1;
    std::cout << "Empty array size: " << arr1.size() << std::endl; // 0

    // Test 2: Array with 5 elements
    Array<int> arr2(5);
    std::cout << "Array size: " << arr2.size() << std::endl; // 5
    arr2[0] = 42; // Valid access
    std::cout << "First element: " << arr2[0] << std::endl; // 42

    // Test 3: Copy and modify
    Array<int> arr3 = arr2;
    arr3[0] = 100;
    std::cout << "Original: " << arr2[0] << ", Copy: " << arr3[0] << std::endl; // 42 vs 100

    // Test 4: Out-of-bounds access
    try {
        std::cout << arr2[10] << std::endl; // Crash attempt
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}