#include "Array.hpp"
#include <ctime>

int main() {
    // Test Case 1: Default Constructor
    {
        std::cout << "=== Test Case 1: Default Constructor ===" << std::endl;
        Array<int> emptyArray;
        std::cout << "Size of emptyArray: " << emptyArray.size() << std::endl;
        std::cout << std::endl;
    }

    // Test Case 2: Parameterized Constructor
    {
        std::cout << "=== Test Case 2: Parameterized Constructor ===" << std::endl;
        Array<int> intArray(5);
        std::cout << "Size of intArray: " << intArray.size() << std::endl; 
        for (int i = 0; i < intArray.size(); ++i) {
            std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
        }
        std::cout << std::endl;
    }

    // Test Case 3: Copy Constructor
    {
        std::cout << "=== Test Case 3: Copy Constructor ===" << std::endl;
        Array<int> originalArray(3);
        originalArray[0] = 1;
        originalArray[1] = 2;
        originalArray[2] = 3;

        Array<int> copiedArray(originalArray);
        std::cout << "Size of copiedArray: " << copiedArray.size() << std::endl;
        for (int i = 0; i < copiedArray.size(); ++i) {
            std::cout << "copiedArray[" << i << "] = " << copiedArray[i] << std::endl;
        }

        // Modify the original array and ensure the copied array remains unchanged
        originalArray[0] = 10;
        std::cout << "copiedArray[0] after modifying originalArray: " << copiedArray[0] << std::endl;
        std::cout << std::endl;
    }

    // Test Case 4: Assignment Operator
    {
        std::cout << "=== Test Case 4: Assignment Operator ===" << std::endl;
        Array<int> array1(3);
        array1[0] = 1;
        array1[1] = 2;
        array1[2] = 3;

        Array<int> array2;
        array2 = array1;
        std::cout << "Size of array2: " << array2.size() << std::endl;
        for (int i = 0; i < array2.size(); ++i) {
            std::cout << "array2[" << i << "] = " << array2[i] << std::endl;
        }

        // Modify the original array and ensure the assigned array remains unchanged
        array1[0] = 10;
        std::cout << "array2[0] after modifying array1: " << array2[0] << std::endl;
        std::cout << std::endl;
    }

    // Test Case 5: Subscript Operator ([])
    {
        std::cout << "=== Test Case 5: Subscript Operator ===" << std::endl;
        Array<int> intArray(3);
        intArray[0] = 10;
        intArray[1] = 20;
        intArray[2] = 30;

        for (int i = 0; i < intArray.size(); ++i) {
            std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
        }
        std::cout << std::endl;
    }

    // Test Case 6: Out-of-Bounds Access
    {
        std::cout << "=== Test Case 6: Out-of-Bounds Access ===" << std::endl;
        Array<int> intArray(3);
        try {
            std::cout << "Accessing out-of-bounds element: " << intArray[5] << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Caught exception: " << e.what() << std::endl;
        }
        std::cout << std::endl;
    }

    // Test Case 7: Size Member Function
    {
        std::cout << "=== Test Case 7: Size Member Function ===" << std::endl;
        Array<int> intArray(7);
        std::cout << "Size of intArray: " << intArray.size() << std::endl;
        std::cout << std::endl;
    }

    // Test Case 8: Different Data Types
    {
        std::cout << "=== Test Case 8: Different Data Types ===" << std::endl;
        Array<std::string> stringArray(2);
        stringArray[0] = "Hello";
        stringArray[1] = "World";

        for (int i = 0; i < stringArray.size(); ++i) {
            std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}