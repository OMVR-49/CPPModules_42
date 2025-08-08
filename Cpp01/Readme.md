# CPP Module 01

**Topics Covered:** Memory allocation, pointers to members, references, switch statement

## Summary

This module covers fundamental C++ concepts including:

- **Memory Allocation:** C++ uses `new` and `delete` operators for memory allocation and deallocation, which are type-safe and work with C++ classes and objects
- **Constructors:** There are three main types:
  - Default Constructor: Takes no arguments
  - Parameterized Constructor: Allows passing arguments to initialize objects
  - Copy Constructor: Creates a new object as a copy of an existing object
- **Constructor and Destructor Calls:** `new` calls the constructor for allocated objects, while `delete` calls the destructor before deallocating memory
- **Pointers to Members:** Allow pointing to class members (variables or methods) within a class
- **References:** Act as aliases for other variables, providing a convenient way to access variables without using pointers
- **Switch Statement:** Executes different parts of code based on the value of an expression, often used as an alternative to multiple `if` statements

## Memory Allocation in C++

Memory allocation in C++ is similar to C, but C++ introduces some new concepts like smart pointers, constructors, and destructors. C++ provides `new` and `delete` operators for memory allocation and deallocation, while in C we have `malloc` and `free`. The key difference is that the C++ operators are type-safe and work seamlessly with C++ classes and objects.

### Constructor and Destructor Calls

- **`new`** calls the constructor for each object in the allocated memory
- **`delete`** calls the destructor for each object before deallocating memory

**Example:**

```cpp
class MyClass {
public:
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }
    
    ~MyClass() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    // Dynamic allocation - constructor is called
    MyClass* obj = new MyClass();
    
    // Dynamic deallocation - destructor is called
    delete obj;
    
    return 0;
}
```

## Constructor Types

Let's understand the types of constructors in C++ with a real-world example. Suppose you went to a shop to buy a marker:

1. **First scenario:** You go to a shop and say "give me a marker." You didn't specify which brand or color - you just want a marker. The shopkeeper will give you whatever marker is frequently sold. This is what a **default constructor** is!

2. **Second scenario:** You go to a shop and say "I want a red marker of XYZ brand." You're providing specific parameters, and the shopkeeper will give you exactly that. This is what a **parameterized constructor** is!

3. **Third scenario:** You go to a shop and say "I want a marker like this one" (showing a physical marker). The shopkeeper will see your marker and give you a new one exactly like it - a copy. That's what a **copy constructor** is!

### Default Constructor

A default constructor is one that takes no arguments. If you don't define a constructor in your class, the compiler will automatically provide a default constructor that does nothing.

```cpp
class MyClass {
public:
    // Default constructor
    MyClass() {
        std::cout << "Default constructor called" << std::endl;
    }
};

int main() {
    MyClass obj; // Calls default constructor
    return 0;
}
```

### Parameterized Constructor

It is possible to pass arguments to constructors. Typically, these arguments help initialize an object when it is created. To create a parameterized constructor, simply add parameters to it the way you would to any other function.

**Key points:**
- Used to initialize different data elements of different objects with different values when they are created
- Used for constructor overloading

```cpp
class MyClass {
private:
    int value;
    std::string name;

public:
    // Parameterized constructor
    MyClass(int v, std::string n) : value(v), name(n) {
        std::cout << "Parameterized constructor called" << std::endl;
    }
    
    void display() {
        std::cout << "Value: " << value << ", Name: " << name << std::endl;
    }
};

int main() {
    MyClass obj(42, "Example"); // Calls parameterized constructor
    obj.display();
    return 0;
}
```

**Can we have more than one constructor in a class?**

Yes! This is called constructor overloading.

```cpp
class MyClass {
private:
    int value;
    std::string name;

public:
    // Default constructor
    MyClass() : value(0), name("Default") {}
    
    // Parameterized constructor with one parameter
    MyClass(int v) : value(v), name("Default") {}
    
    // Parameterized constructor with two parameters
    MyClass(int v, std::string n) : value(v), name(n) {}
};
```

### Copy Constructor

A copy constructor in C++ is a special constructor that creates a new object as a copy of an existing object. It is called when an object is passed by value, returned from a function, or explicitly copied. The copy constructor takes a reference to an object of the same class as its parameter.

```cpp
class MyClass {
private:
    int value;

public:
    // Parameterized constructor
    MyClass(int v) : value(v) {
        std::cout << "Parameterized constructor called" << std::endl;
    }
    
    // Copy constructor
    MyClass(const MyClass& other) : value(other.value) {
        std::cout << "Copy constructor called" << std::endl;
    }
    
    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    MyClass obj1(42);           // Calls parameterized constructor
    MyClass obj2 = obj1;        // Calls copy constructor
    MyClass obj3(obj1);         // Also calls copy constructor
    
    return 0;
}
```

## Pointers to Members in C++

Pointers to members allow you to point to class members (variables or methods) within a class. This is useful for passing member functions as arguments or storing them in containers.

### Syntax for Pointers to Members

**To declare a pointer to a member variable:**

```cpp
DataType ClassName::*pointerToMember;
```

**To access the member pointed to by the pointer:**

```cpp
object.*pointerToMember
```

**Or for a pointer to an object:**

```cpp
(*pointerToObject).*pointerToMember
```

### Example

```cpp
class MyClass {
public:
    int x;
    int y;
    
    void display() {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.x = 10;
    obj.y = 20;
    
    // Pointer to member variable
    int MyClass::*ptr = &MyClass::x;
    
    // Access member through pointer
    std::cout << "Value of x through pointer: " << obj.*ptr << std::endl;
    
    // Change pointer to point to y
    ptr = &MyClass::y;
    std::cout << "Value of y through pointer: " << obj.*ptr << std::endl;
    
    return 0;
}
```

### Pointer to Member Functions

```cpp
class MyClass {
public:
    void method1() {
        std::cout << "Method 1 called" << std::endl;
    }
    
    void method2() {
        std::cout << "Method 2 called" << std::endl;
    }
};

int main() {
    MyClass obj;
    
    // Pointer to member function
    void (MyClass::*funcPtr)() = &MyClass::method1;
    
    // Call method through pointer
    (obj.*funcPtr)();
    
    // Change pointer to point to method2
    funcPtr = &MyClass::method2;
    (obj.*funcPtr)();
    
    return 0;
}
```

## References in C++

A reference in C++ acts as an alias for another variable. It provides a more convenient way to access variables without using pointers. Once a reference is assigned to a variable, it cannot be changed to refer to another variable.

### Creating References

**To create a reference, use the `&` operator:**

```cpp
DataType &referenceName = variable;
```

This allows you to manipulate the original variable through the reference.

### Example

```cpp
#include <iostream>

int main() {
    int originalValue = 42;
    
    // Create a reference to originalValue
    int &ref = originalValue;
    
    std::cout << "Original value: " << originalValue << std::endl;
    std::cout << "Reference value: " << ref << std::endl;
    
    // Modify through reference
    ref = 100;
    
    std::cout << "After modifying through reference:" << std::endl;
    std::cout << "Original value: " << originalValue << std::endl;
    std::cout << "Reference value: " << ref << std::endl;
    
    return 0;
}
```

### Key Points About References

- References must be initialized when declared
- References cannot be reassigned to refer to another variable
- References are essentially aliases for existing variables
- No arithmetic operations can be performed on references
- References are safer than pointers as they cannot be null

```cpp
int main() {
    int a = 10;
    int b = 20;
    
    int &ref = a;        // Reference must be initialized
    // int &ref2;        // Error: references must be initialized
    
    ref = b;             // This assigns the value of b to a, doesn't make ref refer to b
    // &ref = &b;        // Error: cannot reassign reference
    
    return 0;
}
```

## Switch Statement in C++

The `switch` statement executes different parts of code based on the value of an expression. It is often used as an alternative to multiple `if` statements.

### Basic Syntax of Switch Statement

```cpp
switch (expression) {
    case constant1:
        // code block
        break;
    case constant2:
        // code block
        break;
    default:
        // default code block
}
```

Each `case` corresponds to a specific value of the expression. The `break` statement exits the switch block; if omitted, execution will continue into the next case (called "fall-through").

### Example

```cpp
#include <iostream>

int main() {
    int choice = 2;
    
    switch (choice) {
        case 1:
            std::cout << "You chose option 1" << std::endl;
            break;
        case 2:
            std::cout << "You chose option 2" << std::endl;
            break;
        case 3:
            std::cout << "You chose option 3" << std::endl;
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
    }
    
    return 0;
}
```

### Switch with Characters

```cpp
#include <iostream>

int main() {
    char grade = 'B';
    
    switch (grade) {
        case 'A':
            std::cout << "Excellent!" << std::endl;
            break;
        case 'B':
            std::cout << "Good job!" << std::endl;
            break;
        case 'C':
            std::cout << "Average" << std::endl;
            break;
        case 'D':
            std::cout << "Below average" << std::endl;
            break;
        case 'F':
            std::cout << "Failed" << std::endl;
            break;
        default:
            std::cout << "Invalid grade" << std::endl;
    }
    
    return 0;
}
```

### Fall-through Behavior

```cpp
#include <iostream>

int main() {
    int number = 2;
    
    switch (number) {
        case 1:
        case 2:
        case 3:
            std::cout << "Number is 1, 2, or 3" << std::endl;
            break;
        case 4:
        case 5:
            std::cout << "Number is 4 or 5" << std::endl;
            break;
        default:
            std::cout << "Number is something else" << std::endl;
    }
    
    return 0;
}
```

---

*This document covers all the essential concepts in CPP Module 01, providing you with the foundation needed to understand memory management, different constructor types, pointers to members, references, and control flow using switch statements in C++.*