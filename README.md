# CPPModules_42

[MY AWESOME NOTION FOR BETTER UI](https://www.notion.so/CPP-Modules-1337-0915128b4ffe4597a16ecd5d72919486)

![9425017](https://github.com/OMVR-49/CPPModules_42/assets/111209064/cb2c4c71-4ddc-4e86-b786-ec534b1461b0)

## 🔍 Table of Contents

### 🧠 CPP Module 00: Fundamentals
- [Namespaces](#namespaces)
- [`std::` Namespace](#what-is-std)
- [Scope Resolution Operator (`::`)](#scope-resolution-operator-)
- [Classes & Objects](#classes)
- [Instance Management](#instance-of-a-class)
- [Access Modifiers](#visibility-private--public-class-members)
- [I/O Streams](#stdio-streams)
- [Constructors & Destructors](#constructors)
- [Initialization Lists](#initialization-lists)
- [`static` Members](#static-members--static-member-functions)
- [`const` Members](#const-members--const-member-functions)
- [OOP Principles](#object-oriented-programming-oop)

### 💾 CPP Module 01: Memory & Flow
- [Memory Allocation](#memory-allocation-in-c)
- [Constructor Types](#constructor-types)
- [Pointers to Members](#pointers-to-members-in-c)
- [References](#references-in-c)
- [Switch Statements](#switch-statement-in-c)

### 🧩 CPP Module 02: Polymorphism
- [Ad-hoc Polymorphism](#ad-hoc-polymorphism)
- [Function Overloading](#function-overloading)
- [Operator Overloading](#operator-overloading)
- [Assignment Chaining](#assignment-chaining)
- [Orthodox Canonical Form](#orthodox-canonical-form)
- [Floating Point Representation](#floating-point-representation)

### 🧬 CPP Module 03: Inheritance
- [Inheritance Fundamentals](#what-is-inheritance)
- [Access Modes](#inheritance-modes)
- [Single Inheritance](#1-single-inheritance)
- [Multiple Inheritance](#2-multiple-inheritance)
- [Multilevel Inheritance](#3-multilevel-inheritance)
- [Hierarchical Inheritance](#4-hierarchical-inheritance)

### 🌀 CPP Module 04: Advanced OOP
- [Deep vs Shallow Copy](#deep-vs-shallow-copy)
- [Virtual Functions](#virtual-functions-and-override)
- [VTables](#vtable-virtual-table)
- [Abstract Classes](#abstract-classes)
- [Interfaces](#interfaces)

### 🚨 CPP Module 05: Error Handling
- [Exception Handling](#what-are-exceptions)
- [Synchronous Exceptions](#1-synchronous-exceptions)
- [Asynchronous Exceptions](#2-asynchronous-exceptions)
- [Function Pointers](#function-pointers)
- [Operator Overloading](#insertion-operator-overloading-)

### 🔄 CPP Module 06: Type Conversion
- [Casting Fundamentals](#what-is-casting-in-c)
- [`static_cast`](#3-static-cast)
- [`dynamic_cast`](#4-dynamic-cast)
- [`const_cast`](#5-const-cast)
- [`reinterpret_cast`](#6-reinterpret-cast)
- [`uintptr_t`](#uintptr_t-pointer-to-integer-type)
- [Virtual Destructors](#virtual-destructors)

### CPP Module 07: Templates
- [What Are Templates](#what-are-templates)
- [Function Templates](#function-templates)
- [Class Templates](#class-templates)
- [Template Specialization](#template-specialization)
- [.tpp Files](#.tpp-files)
- [File Organization Pattern](#file-organization-pattern)
- [Template Best Practices](#template-best-practices)


# CPP Module 00

**Topics Covered:** Namespaces, Classes, member functions, stdio streams, initialization lists, static, const, and other basic C++ concepts

> *"aSBjYW4gc3dlYXIgZ29kIHRoYXQgdGhpcyBpcyB0aGUgZWFzaWVzdCBkb2MgdSBsbCBuZWVkIHRvIHJlYWQ="* - Base64

## Summary

This module covers fundamental C++ concepts including:

- **Namespaces:** A way to organize and group related code elements
- **Classes:** User-defined data types that serve as blueprints for creating objects, including:
  - Attributes (data members)
  - Behaviors (member functions)  
  - Public and private access specifiers
- **STDIO Streams:** Used for input/output operations, primarily `cin` for input and `cout` for output
- **Constructors and Destructors:** Special class members for object creation and cleanup
- **Initialization Lists:** A method to initialize class member variables in the constructor
- **Static Members:** Shared across all instances of a class
- **Const Members:** Functions that don't modify the internal state of an object

The module introduces basic Object-Oriented Programming (OOP) concepts, particularly focusing on encapsulation.

## Namespaces

In C++, namespaces are a way to organize and group related code elements such as classes. Here's an example:

```cpp
#include <iostream>

// Defining a namespace called 'example'
namespace example {
    int variable = 42;

    void display() {
        std::cout << "This is the example namespace." << std::endl;
    }
}

// Another namespace with the same name as 'example', but in a different scope
namespace another {
    int variable = 99;

    void display() {
        std::cout << "This is the another namespace." << std::endl;
    }
}

int main() {
    // Accessing elements from the 'example' namespace
    std::cout << "Value from 'example' namespace: " << example::variable << std::endl;
    example::display();
    
    // Accessing elements from the 'another' namespace
    std::cout << "Value from 'another' namespace: " << another::variable << std::endl;
    another::display();
    
    return 0;
}
```

## What is `std::`?

In C++, `std::` is a namespace that encapsulates all the standard C++ library components (short for "standard"). It's used to organize the names of entities provided by the C++ Standard Library:

```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    // Here the program will check if cout and endl are objects of the standard library
    // because I used "using namespace std;" so every object in this scope
    // will get checked if it's an object from the standard library, if not: compilation error
    return 0;
}
```

> **Note:** It's generally recommended to avoid `using namespace std;` in larger projects or header files to prevent naming conflicts. Instead, explicitly use `std::` to maintain clarity and avoid unintended issues like "ambiguous" references. At 42, it's forbidden to use, but you need to understand the forbidden things.

## Scope Resolution Operator `::`

The `::` operator is called the **scope resolution operator**. It is used to define or access members of a namespace or a class when there might be ambiguity or to explicitly specify the scope.

## Classes

In C++, a class is a user-defined data type - it's like a blueprint for creating objects. Classes provide a way to structure the behavior and data of a concept in your program.

**Key Terms:**
- **Objects:** Instances of a class, each object can have attributes and behaviors
- **Attributes:** Data members, one of the two essential components of a class
- **Behaviors:** Member functions, one of the two essential components of a class. They are operations or methods applied to attributes and are the only functions that have access to the data attributes

Here's an example:

```cpp
class MyClass {
public:
    // Data members or attributes
    int myInteger;
    double myDouble;

    // Member functions or methods
    void display() {
        std::cout << "Integer: " << myInteger << ", Double: " 
                  << myDouble << std::endl;
    }
};

int main() {
    // Creating an object of MyClass
    MyClass obj;

    // Accessing and modifying data members
    obj.myInteger = 42;
    obj.myDouble = 3.14;

    // Calling a member function
    obj.display();

    return 0;
}
```

## Instance of a Class

An instance means when you define a class then create an instance of it in main or anywhere - this is the meaning of instance.

- An **Object** is an instance of a Class
- When a class is defined, no memory is allocated, but when it is instantiated (i.e., an object is created), memory is allocated
- **Syntax:** `ClassName ObjectName;`

```cpp
class Aclass {
private:
    int a;
public:
    void Funct();
};

int main() {
    Aclass b;
    // b is an instance of the class Aclass
}
```

**Important Distinction:**
- **Object:** General term for any data with a type that occupies memory
- **Instance:** A specific object of a class

## Visibility: Private & Public Class Members

In C++, the `public` and `private` access specifiers are used to control the visibility and accessibility of class members. These specifiers define how the members (variables and functions) of a class can be accessed from outside the class.

### Public
- Members declared as `public` are accessible from outside the class, including from other classes and functions
- Public members form the interface of the class, providing a way for external code to interact with and use the class
- They are meant to be part of the class's public contract and can be accessed by client code that uses the class objects

### Private
- Members declared as `private` are not accessible from outside the class. They are hidden and can only be accessed by other members of the same class
- Private members are used to encapsulate the implementation details of the class and to restrict direct access from external code
- They are not part of the class's public interface but are used internally to implement the class's behavior

## STDIO Streams

In C++, the Standard Input/Output (I/O) streams, referred to as STDIO streams, are part of the Standard Template Library (STL) and are used for handling input and output operations. The useful components you'll need are:

### `cin` (Standard Input)
`cin` is an object of the `istream` class, used to handle input from the standard input device (usually the keyboard):

```cpp
int number;
std::cout << "Enter a number: ";
std::cin >> number;
```

### `cout` (Standard Output)
`cout` is an object of the `ostream` class, used to handle output to the standard output device (usually the console):

```cpp
std::cout << "Hello, Universe!" << std::endl;
```

## Constructors

Constructors are special class members which are called by the compiler every time an object of that class is instantiated. Constructors have the same name as the class and may be defined inside or outside the class definition.

**Types of constructors:**
- Default constructor
- Parameterized constructor  
- Copy constructor

**Syntax:** `<class-name>(list-of-parameters);`

## Destructors

A destructor is another special member function that is called by the compiler when the scope of the object ends.

**Syntax:** `~<class-name>()`

**Key points:**
- It is not possible to define more than one destructor
- It neither requires any argument nor returns any value (not even void)
- It is automatically called when an object goes out of scope
- It releases memory space occupied by the objects created by the constructor
- If the object is created using `new` or the constructor uses `new` to allocate memory, the destructor should use `delete` to free the memory
- It cannot be declared static or const
- It should be declared in the public section of the class
- The programmer cannot access the address of the destructor

## Initialization Lists

In C++, initialization lists refer to a feature that allows you to initialize the member variables of a class in the constructor's initializer list rather than in the body of the constructor.

```cpp
class MyClass {
private:
    int x;
    double y;

public:
    MyClass();
};

// Constructor without initialization list
MyClass::MyClass() {
    x = 0;
    y = 0;
    std::cout << "example" << std::endl;
}

// Constructor with initialization list
MyClass::MyClass() : x(0), y(0) {
    std::cout << "example" << std::endl;
}
```

In the example, the member variables `x` and `y` are initialized directly in the constructor's initialization list using the syntax `: x(0), y(0)`. This is often more efficient than assigning values in the constructor body.

## Static Members / Static Member Functions

Static members are shared across all instances of a class. They belong to the class itself rather than any particular object:

```cpp
class MyClass {
public:
    static int count; // Declaration of a static member

    MyClass() {
        count++; // Incrementing static member in constructor
    }
};

// Definition of the static member outside the class
int MyClass::count = 0;

int main() {
    MyClass obj1, obj2;
    std::cout << "Count of MyClass objects: " << MyClass::count << std::endl;

    return 0;
}
```

## Const Members / Const Member Functions

A `const` member function in C++ is a method associated with a class that is explicitly declared with the `const` keyword. It indicates that the function does not modify the internal state of the object on which it is called. You can work with it when coding to ensure that you won't accidentally modify a value that shouldn't be modified - it's good for debugging and generally a good concept while programming.

**Syntax:** `returnType functionName(parameters) const`

```cpp
class MyClass {
public:
    int myInteger;
    double myDouble;

    // Const member function
    void display() const;
};
```

**Important Note:** If you create a const instance from your class, you can only use the const member functions declared in your class.

## Additional Important Notes

- If we don't write our own destructor in a class, the compiler creates a default destructor for us
- The default destructor works fine unless we have dynamically allocated memory or pointers in the class
- When a class contains a pointer to memory allocated in the class, we should write a destructor to release memory before the class instance is destroyed
- This must be done to avoid memory leaks

## Object-Oriented Programming (OOP)

OOP is a general programming paradigm (not only in C++ - you might find it in Python, Java & C# as well). There are many programming paradigms like "procedural programming" which focuses on describing how a program should achieve a specific result. In C++, OOP uses objects (instances of classes) to organize code and make programming simpler. It's based on several core principles:

### Encapsulation
Encapsulation involves bundling data (attributes) and the methods (functions) that operate on the data into a single unit known as a class. For example, making a function that gets data from attributes or sets data to attributes - this operation is called encapsulation.

### Other OOP Principles
- **Inheritance** (covered in later modules)
- **Polymorphism** (covered in later modules)  
- **Abstraction** (covered in later modules)

## Additional Resources

For more detailed information on specific topics, you might want to research:

- [`atoi()` function with strings in C++](https://stackoverflow.com/questions/27640333/how-do-i-use-atoi-function-with-strings-in-c)
- [`string.length()` vs. `string.size()`](https://stackoverflow.com/questions/31628940/which-is-faster-c-stdstringlength-or-stdstringsize)
- [`std::cin.getline()` vs. `std::cin`](https://stackoverflow.com/questions/4745858/stdcin-getline-vs-stdcin)

---

*This document serves as a comprehensive guide for CPP Module 00, covering all essential concepts needed to get started with C++ object-oriented programming.*

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

# CPP Module 02

**Topics Covered:** Ad-hoc polymorphism, operator overloading and Orthodox Canonical class form

## Summary

This module covers advanced C++ concepts including:

- **Ad-hoc Polymorphism:** The ability to define multiple functions or operators with the same name but different parameters
- **Function Overloading:** Multiple functions with the same name but different parameter lists
- **Operator Overloading:** Giving new meanings to operators for user-defined types
- **Orthodox Canonical Form:** Essential components for well-defined classes in C++
- **Copy Constructor:** Creating objects by copying existing objects of the same class
- **Assignment Chaining:** Enabling multiple assignment operations in a single statement
- **Floating Point Representation:** Understanding how floating point numbers are stored and represented

## Ad-hoc Polymorphism

Ad-hoc polymorphism refers to the ability to define multiple functions or operators with the same name but different parameters within the same scope. This allows functions or operators to perform different tasks based on the number or types of their arguments.

There are two main types of ad-hoc polymorphism in C++:
1. **Function Overloading**
2. **Operator Overloading**

## Function Overloading

Function overloading allows you to create multiple functions with the same name but different parameter lists (different number of parameters, different types, or both).

### Function Overloading Syntax

```cpp
return_type function_name(parameter_list_1);
return_type function_name(parameter_list_2);
```

### Example

```cpp
#include <iostream>
#include <string>

class PrintHandler {
public:
    // Overloaded function with an int parameter
    void print(int a) {
        std::cout << "Integer: " << a << std::endl;
    }
    
    // Overloaded function with a double parameter
    void print(double a) {
        std::cout << "Double: " << a << std::endl;
    }
    
    // Overloaded function with a string parameter
    void print(const std::string& a) {
        std::cout << "String: " << a << std::endl;
    }
    
    // Overloaded function with multiple parameters
    void print(int a, double b) {
        std::cout << "Int and Double: " << a << ", " << b << std::endl;
    }
};

int main() {
    PrintHandler handler;
    
    handler.print(42);           // Calls print(int)
    handler.print(3.14159);      // Calls print(double)
    handler.print("Hello");      // Calls print(string)
    handler.print(10, 2.5);      // Calls print(int, double)
    
    return 0;
}
```

## Operator Overloading

Operator overloading allows you to define custom behaviors for operators when used with user-defined types (classes).

### Operator Overloading Syntax

```cpp
return_type operator operator_symbol(parameter_list);
```

### Basic Example - Complex Numbers

```cpp
#include <iostream>

class Complex {
private:
    double real, imag;

public:
    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    
    // Overloading the '+' operator
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    
    // Overloading the '-' operator
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }
    
    // Overloading the '==' operator
    bool operator==(const Complex& other) const {
        return (real == other.real && imag == other.imag);
    }
    
    // Overloading the '<<' operator for output
    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.real << " + " << c.imag << "i";
        return os;
    }
    
    // Display function
    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);
    
    Complex c3 = c1 + c2;  // Uses overloaded + operator
    Complex c4 = c1 - c2;  // Uses overloaded - operator
    
    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c1 + c2: " << c3 << std::endl;
    std::cout << "c1 - c2: " << c4 << std::endl;
    
    if (c1 == c2) {
        std::cout << "c1 and c2 are equal" << std::endl;
    } else {
        std::cout << "c1 and c2 are not equal" << std::endl;
    }
    
    return 0;
}
```

## Assignment Chaining

Assignment chaining allows multiple assignment operations in a single statement by returning a reference to the object being assigned. This is commonly used in operator overloading for the assignment operator (`=`).

### Key Concept

The overloaded assignment operator should return a reference to `*this`:

```cpp
MyClass& operator=(const MyClass& other) {
    if (this != &other) {
        // Perform the assignment
    }
    return *this; // Enables chaining
}
```

### Example

```cpp
#include <iostream>

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) : value(v) {}
    
    // Copy assignment operator with chaining support
    Number& operator=(const Number& other) {
        if (this != &other) {  // Self-assignment check
            value = other.value;
        }
        return *this;  // Return reference for chaining
    }
    
    // Getter
    int getValue() const { return value; }
    
    // Display
    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Number a, b, c;
    
    c = Number(100);
    
    // Assignment chaining - equivalent to: a = (b = c);
    a = b = c;
    
    std::cout << "After chained assignment:" << std::endl;
    a.display();  // Value: 100
    b.display();  // Value: 100
    c.display();  // Value: 100
    
    return 0;
}
```

## Orthodox Canonical Form

The Orthodox Canonical Form (also known as the Rule of Three in modern C++) includes the following components essential for a well-defined class in C++:

1. **Default Constructor:** Initializes an object without any parameters
2. **Copy Constructor:** Initializes an object using another object of the same class
3. **Copy Assignment Operator:** Assigns values from one object to another of the same class
4. **Destructor:** Cleans up resources when an object goes out of scope

### Complete Example

```cpp
#include <iostream>
#include <cstring>

class MyString {
private:
    char* data;
    size_t length;

public:
    // 1. Default Constructor
    MyString() : data(nullptr), length(0) {
        std::cout << "Default constructor called" << std::endl;
    }
    
    // Parameterized constructor
    MyString(const char* str) {
        if (str) {
            length = strlen(str);
            data = new char[length + 1];
            strcpy(data, str);
        } else {
            data = nullptr;
            length = 0;
        }
        std::cout << "Parameterized constructor called" << std::endl;
    }
    
    // 2. Copy Constructor
    MyString(const MyString& other) : length(other.length) {
        if (other.data) {
            data = new char[length + 1];
            strcpy(data, other.data);
        } else {
            data = nullptr;
        }
        std::cout << "Copy constructor called" << std::endl;
    }
    
    // 3. Copy Assignment Operator
    MyString& operator=(const MyString& other) {
        std::cout << "Assignment operator called" << std::endl;
        
        if (this != &other) {  // Self-assignment check
            // Clean up existing data
            delete[] data;
            
            // Copy new data
            length = other.length;
            if (other.data) {
                data = new char[length + 1];
                strcpy(data, other.data);
            } else {
                data = nullptr;
            }
        }
        return *this;  // Enable chaining
    }
    
    // 4. Destructor
    ~MyString() {
        delete[] data;
        std::cout << "Destructor called" << std::endl;
    }
    
    // Utility functions
    const char* getString() const {
        return data ? data : "";
    }
    
    void display() const {
        std::cout << "String: " << (data ? data : "null") << std::endl;
    }
};

int main() {
    MyString str1;                    // Default constructor
    MyString str2("Hello");           // Parameterized constructor
    MyString str3 = str2;             // Copy constructor
    
    str1 = str2;                      // Assignment operator
    
    str1.display();
    str2.display();
    str3.display();
    
    return 0;
} // Destructors called for str3, str2, str1
```

## Copy Constructor Deep Dive

A copy constructor creates an object by initializing it with an object of the same class that has been created previously. The copy constructor takes a reference to an object of the same class as an argument.

### Syntax

```cpp
ClassName(const ClassName& other) {
    // Initialize this object using other object
}
```

### Example

```cpp
#include <iostream>

class Example {
private:
    int id;
    int* data;

public:
    // Constructor
    Example(int i, int value) : id(i) {
        data = new int(value);
        std::cout << "Constructor called for id: " << id << std::endl;
    }
    
    // Copy Constructor
    Example(const Example& other) : id(other.id) {
        data = new int(*(other.data));  // Deep copy
        std::cout << "Copy constructor called for id: " << id << std::endl;
    }
    
    // Destructor
    ~Example() {
        delete data;
        std::cout << "Destructor called for id: " << id << std::endl;
    }
    
    // Display
    void display() const {
        std::cout << "ID: " << id << ", Data: " << *data 
                  << ", Address: " << data << std::endl;
    }
};

int main() {
    Example obj1(1, 100);        // Constructor called
    Example obj2 = obj1;         // Copy constructor called
    Example obj3(obj1);          // Copy constructor called
    
    obj1.display();
    obj2.display();
    obj3.display();
    
    return 0;
}
```

The process of initializing members of an object through a copy constructor is known as **copy initialization**.

## When is the Copy Constructor Called?

The copy constructor is called in the following situations:

1. **When an object of the class is returned by value**
2. **When an object of the class is passed to a function by value as an argument**
3. **When an object is constructed based on another object of the same class**
4. **When the compiler generates a temporary object**

### Examples

```cpp
#include <iostream>

class Test {
private:
    int value;

public:
    Test(int v = 0) : value(v) {
        std::cout << "Constructor called with value: " << value << std::endl;
    }
    
    Test(const Test& other) : value(other.value) {
        std::cout << "Copy constructor called" << std::endl;
    }
    
    int getValue() const { return value; }
};

// Function that takes object by value
void functionByValue(Test obj) {  // Copy constructor called here
    std::cout << "Inside functionByValue: " << obj.getValue() << std::endl;
}

// Function that returns object by value
Test functionReturnByValue() {
    Test temp(42);
    return temp;  // Copy constructor may be called here (depends on optimization)
}

int main() {
    Test obj1(10);              // Constructor called
    Test obj2 = obj1;           // Copy constructor called
    Test obj3(obj1);            // Copy constructor called
    
    functionByValue(obj1);      // Copy constructor called
    
    Test obj4 = functionReturnByValue();  // Copy constructor may be called
    
    return 0;
}
```

## Floating Point Representation

Understanding floating point representation is crucial for working with decimal numbers in C++. Here are the key concepts you need to know:

### IEEE 754 Standard

Most systems use the IEEE 754 standard for floating point representation. A 32-bit float consists of:
- **1 sign bit (S)**
- **8 exponent bits (E)**
- **23 mantissa bits (M)**

### Formula for Float Numbers

The value of a floating point number is calculated using:

```
(-1)^S × 1.M × 2^(E-127)
```

Where:
- **S** is the sign bit (0 for positive, 1 for negative)
- **M** is the mantissa (fractional part)
- **E** is the exponent (biased by 127)

### Special Cases: Infinity and NaN

#### Infinity
- If all exponent bits are set to 1 and all mantissa bits are zero, the number represents infinity
- Can be positive infinity (+∞) or negative infinity (-∞) depending on the sign bit

#### NaN (Not a Number)
- If all exponent bits are set to 1 and at least one mantissa bit is non-zero, the number is NaN
- NaN represents undefined or unrepresentable values (like 0/0 or √(-1))

### Practical Example

```cpp
#include <iostream>
#include <limits>
#include <cmath>

int main() {
    float positiveInf = std::numeric_limits<float>::infinity();
    float negativeInf = -std::numeric_limits<float>::infinity();
    float notANumber = std::numeric_limits<float>::quiet_NaN();
    
    std::cout << "Positive Infinity: " << positiveInf << std::endl;
    std::cout << "Negative Infinity: " << negativeInf << std::endl;
    std::cout << "NaN: " << notANumber << std::endl;
    
    // Check for special values
    std::cout << "Is positive infinity? " << std::isinf(positiveInf) << std::endl;
    std::cout << "Is NaN? " << std::isnan(notANumber) << std::endl;
    
    // Operations that produce special values
    float divByZero = 1.0f / 0.0f;  // Results in infinity
    float undefinedOp = 0.0f / 0.0f;  // Results in NaN
    
    std::cout << "1.0/0.0 = " << divByZero << std::endl;
    std::cout << "0.0/0.0 = " << undefinedOp << std::endl;
    
    return 0;
}
```

---

*This document covers all essential concepts in CPP Module 02, providing you with a comprehensive understanding of ad-hoc polymorphism, operator overloading, orthodox canonical form, and floating point representation in C++.*

# CPP Module 03

**Topics Covered:** Inheritance

## Summary

This module covers one of the most important features of Object-Oriented Programming - **Inheritance**. It includes:

- **Introduction to Inheritance:** A key OOP feature allowing a class to derive properties and characteristics from another class
- **Inheritance Modes:** Public, Protected, and Private inheritance with their access control implications
- **Types of Inheritance:**
  - Single inheritance: a class inherits from one parent class
  - Multiple inheritance: a class inherits from more than one parent class  
  - Multilevel inheritance: a class inherits from a child class
  - Hierarchical inheritance: multiple classes inherit from a single parent class

## What is Inheritance?

Inheritance is one of the most important features of Object-Oriented Programming (OOP). It's the capability of a class to derive properties and characteristics from another class. This allows for code reusability, establishing a relationship between parent and child classes, and creating a hierarchical classification.

## Basic Syntax

```cpp
class Child_class_name : access_specifier Parent_class_name {
    // body
};
```

**Components:**
- **Child_class_name:** The class that will inherit from the Parent class (also called derived class or subclass)
- **access_specifier:** Can be one of three types (public, private, protected). If none is specified, it defaults to private
- **Parent_class_name:** The class being inherited from (also called base class or superclass)

## Parent Class vs Child Class

- **Parent class (Base class/Superclass):** An existing class from which other classes inherit properties and methods
- **Child class (Derived class/Subclass):** A new class created by inheriting from the base class

### Basic Example

```cpp
#include <iostream>

// Parent class (Base class)
class Animal {
public:
    std::string name;
    int age;
    
    void eat() {
        std::cout << name << " is eating." << std::endl;
    }
    
    void sleep() {
        std::cout << name << " is sleeping." << std::endl;
    }
};

// Child class (Derived class)
class Dog : public Animal {
public:
    std::string breed;
    
    void bark() {
        std::cout << name << " is barking!" << std::endl;
    }
    
    void wagTail() {
        std::cout << name << " is wagging tail!" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.name = "Buddy";
    myDog.age = 3;
    myDog.breed = "Golden Retriever";
    
    // Using inherited methods
    myDog.eat();    // From Animal class
    myDog.sleep();  // From Animal class
    
    // Using own methods
    myDog.bark();   // From Dog class
    myDog.wagTail(); // From Dog class
    
    return 0;
}
```

## Inheritance Modes

There are three modes of inheritance that control how the access specifiers of the parent class members are modified in the derived class:

| Parent Class Access | Public Inheritance | Protected Inheritance | Private Inheritance |
|---------------------|-------------------|----------------------|-------------------|
| Public              | Public            | Protected            | Private           |
| Protected           | Protected         | Protected            | Private           |
| Private             | Not Accessible    | Not Accessible       | Not Accessible    |

### Public Inheritance

If we derive from a class called **Parent** publicly to a class called **Child**, then every access specifier from the **Parent** class stays the same in the **Child** class.

```cpp
class Parent {
public:
    int publicVar;
protected:
    int protectedVar;
private:
    int privateVar;
};

class Child : public Parent {
    // publicVar remains public
    // protectedVar remains protected  
    // privateVar is not accessible
public:
    void testAccess() {
        publicVar = 10;      // OK - public in Parent, public in Child
        protectedVar = 20;   // OK - protected in Parent, protected in Child
        // privateVar = 30;  // ERROR - private members are not accessible
    }
};
```

### Protected Inheritance

If we derive from a class called **Parent** in a protected way to a class called **Child**, then the public members of the **Parent** class become protected, and other accessible members stay the same in the **Child** class.

```cpp
class Child : protected Parent {
    // publicVar becomes protected
    // protectedVar remains protected
    // privateVar is not accessible
public:
    void testAccess() {
        publicVar = 10;      // OK - but now protected in Child
        protectedVar = 20;   // OK - still protected
        // privateVar = 30;  // ERROR - private members are not accessible
    }
};
```

### Private Inheritance

If we derive from a class called **Parent** privately to a class called **Child**, then the public and protected members of the **Parent** class become private in the **Child** class.

```cpp
class Child : private Parent {
    // publicVar becomes private
    // protectedVar becomes private
    // privateVar is not accessible
public:
    void testAccess() {
        publicVar = 10;      // OK - but now private in Child
        protectedVar = 20;   // OK - but now private in Child
        // privateVar = 30;  // ERROR - private members are not accessible
    }
};
```

## Complete Example of Different Inheritance Modes

```cpp
#include <iostream>

class Parent {
public:
    int x;
    void publicMethod() {
        std::cout << "Public method from Parent" << std::endl;
    }

protected:
    int y;
    void protectedMethod() {
        std::cout << "Protected method from Parent" << std::endl;
    }

private:
    int z;
    void privateMethod() {
        std::cout << "Private method from Parent" << std::endl;
    }
};

class ChildA : public Parent {
public:
    void testAccess() {
        x = 10;              // OK - x is public
        publicMethod();      // OK - publicMethod is public
        y = 20;              // OK - y is protected
        protectedMethod();   // OK - protectedMethod is protected
        // z = 30;           // ERROR - z is not accessible
        // privateMethod();  // ERROR - privateMethod is not accessible
    }
};

class ChildB : protected Parent {
public:
    void testAccess() {
        x = 10;              // OK - x is now protected
        publicMethod();      // OK - publicMethod is now protected
        y = 20;              // OK - y remains protected
        protectedMethod();   // OK - protectedMethod remains protected
        // z = 30;           // ERROR - z is not accessible
        // privateMethod();  // ERROR - privateMethod is not accessible
    }
};

class ChildC : private Parent {
public:
    void testAccess() {
        x = 10;              // OK - x is now private
        publicMethod();      // OK - publicMethod is now private
        y = 20;              // OK - y is now private
        protectedMethod();   // OK - protectedMethod is now private
        // z = 30;           // ERROR - z is not accessible
        // privateMethod();  // ERROR - privateMethod is not accessible
    }
};

int main() {
    ChildA objA;
    objA.x = 100;        // OK - x is public in ChildA
    objA.publicMethod(); // OK - publicMethod is public in ChildA
    
    ChildB objB;
    // objB.x = 200;     // ERROR - x is protected in ChildB
    // objB.publicMethod(); // ERROR - publicMethod is protected in ChildB
    
    ChildC objC;
    // objC.x = 300;     // ERROR - x is private in ChildC
    // objC.publicMethod(); // ERROR - publicMethod is private in ChildC
    
    return 0;
}
```

## Accessing Private Members of Parent Class

**Important Notes:**
- A derived class doesn't inherit **access** to private data members. However, it does inherit a full parent object, which contains any private members that class declares.
- A **protected** member is accessible within the class and its derived classes, but not from outside the class.

To access private members of the parent class from the child class, you need to use **Encapsulation** principles with **Setter and Getter** methods. These should be public in the **Parent** class so you can use them in the **Child** class.

```cpp
#include <iostream>

class Parent {
private:
    int privateData;

public:
    // Constructor
    Parent(int data = 0) : privateData(data) {}
    
    // Getter method (public)
    int getPrivateData() const {
        return privateData;
    }
    
    // Setter method (public)
    void setPrivateData(int data) {
        privateData = data;
    }
    
protected:
    int protectedData;
};

class Child : public Parent {
public:
    Child(int data = 0) : Parent(data) {}
    
    void accessParentData() {
        // Can't access privateData directly
        // privateData = 100; // ERROR
        
        // But can access through public methods
        setPrivateData(100);
        std::cout << "Private data: " << getPrivateData() << std::endl;
        
        // Can access protected data directly
        protectedData = 200;
        std::cout << "Protected data: " << protectedData << std::endl;
    }
};

int main() {
    Child child;
    child.accessParentData();
    return 0;
}
```

## Types of Inheritance

### 1. Single Inheritance

Single inheritance is when a class inherits from only one parent class. This is the most common and straightforward form of inheritance.

```cpp
#include <iostream>

class Vehicle {
protected:
    std::string brand;
    int year;

public:
    Vehicle(std::string b, int y) : brand(b), year(y) {}
    
    void displayInfo() {
        std::cout << "Brand: " << brand << ", Year: " << year << std::endl;
    }
};

class Car : public Vehicle {
private:
    int doors;

public:
    Car(std::string b, int y, int d) : Vehicle(b, y), doors(d) {}
    
    void displayCarInfo() {
        displayInfo(); // Call parent method
        std::cout << "Doors: " << doors << std::endl;
    }
};

int main() {
    Car myCar("Toyota", 2022, 4);
    myCar.displayCarInfo();
    return 0;
}
```

### 2. Multiple Inheritance

Multiple inheritance is when a class can inherit from more than one parent class.

**Syntax:**
```cpp
class subclass_name : access_mode parent_class1, access_mode parent_class2, access_mode parent_class3 {
    // body of subclass
};
```

**Example:**
```cpp
#include <iostream>

class Engine {
protected:
    int horsepower;

public:
    Engine(int hp) : horsepower(hp) {}
    
    void startEngine() {
        std::cout << "Engine started with " << horsepower << " HP" << std::endl;
    }
};

class GPS {
protected:
    std::string location;

public:
    GPS(std::string loc) : location(loc) {}
    
    void navigate() {
        std::cout << "Navigating to: " << location << std::endl;
    }
};

// Multiple inheritance
class SmartCar : public Engine, public GPS {
private:
    std::string model;

public:
    SmartCar(std::string m, int hp, std::string loc) 
        : model(m), Engine(hp), GPS(loc) {}
    
    void displayInfo() {
        std::cout << "Smart Car Model: " << model << std::endl;
        startEngine(); // From Engine class
        navigate();    // From GPS class
    }
};

int main() {
    SmartCar car("Tesla Model S", 670, "San Francisco");
    car.displayInfo();
    return 0;
}
```

### 3. Multilevel Inheritance

Multilevel inheritance is when a class inherits from a child class, creating a chain of inheritance.

**Syntax:**
```cpp
class C {
    // base class
};

class B : public C {
    // B inherits from C
};

class A : public B {
    // A inherits from B (which inherits from C)
};
```

**Example:**
```cpp
#include <iostream>

class Animal {
protected:
    std::string species;

public:
    Animal(std::string s) : species(s) {}
    
    void breathe() {
        std::cout << species << " is breathing" << std::endl;
    }
};

class Mammal : public Animal {
protected:
    bool warmBlooded;

public:
    Mammal(std::string s, bool wb) : Animal(s), warmBlooded(wb) {}
    
    void feedMilk() {
        std::cout << species << " is feeding milk to babies" << std::endl;
    }
};

class Dog : public Mammal {
private:
    std::string breed;

public:
    Dog(std::string s, std::string b) : Mammal(s, true), breed(b) {}
    
    void bark() {
        std::cout << breed << " " << species << " is barking" << std::endl;
    }
    
    void displayInfo() {
        breathe();   // From Animal class
        feedMilk();  // From Mammal class
        bark();      // From Dog class
    }
};

int main() {
    Dog myDog("Canine", "Golden Retriever");
    myDog.displayInfo();
    return 0;
}
```

### 4. Hierarchical Inheritance

Hierarchical inheritance is when multiple classes inherit from a single parent class.

**Syntax:**
```cpp
class A {
    // base class
};

class B : public A {
    // B inherits from A
};

class C : public A {
    // C inherits from A
};

class D : public A {
    // D inherits from A
};
```

**Example:**
```cpp
#include <iostream>

class Shape {
protected:
    std::string color;

public:
    Shape(std::string c) : color(c) {}
    
    void displayColor() {
        std::cout << "Color: " << color << std::endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(std::string c, double r) : Shape(c), radius(r) {}
    
    void displayArea() {
        std::cout << "Circle area: " << 3.14159 * radius * radius << std::endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(std::string c, double l, double w) : Shape(c), length(l), width(w) {}
    
    void displayArea() {
        std::cout << "Rectangle area: " << length * width << std::endl;
    }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(std::string c, double b, double h) : Shape(c), base(b), height(h) {}
    
    void displayArea() {
        std::cout << "Triangle area: " << 0.5 * base * height << std::endl;
    }
};

int main() {
    Circle circle("Red", 5.0);
    Rectangle rectangle("Blue", 4.0, 6.0);
    Triangle triangle("Green", 3.0, 4.0);
    
    circle.displayColor();    // From Shape class
    circle.displayArea();     // From Circle class
    
    rectangle.displayColor(); // From Shape class
    rectangle.displayArea();  // From Rectangle class
    
    triangle.displayColor();  // From Shape class
    triangle.displayArea();   // From Triangle class
    
    return 0;
}
```

## Key Points to Remember

1. **Private members** of the parent class are never directly accessible in derived classes, regardless of the inheritance type
2. **Protected members** are accessible in derived classes but not from outside the class
3. **Public inheritance** maintains the access levels of the parent class
4. **Protected inheritance** makes public members of the parent class protected in the derived class
5. **Private inheritance** makes both public and protected members of the parent class private in the derived class
6. Use **getter and setter methods** to access private members of the parent class
7. Inheritance promotes **code reusability** and establishes **is-a relationships**

---

*This document provides a comprehensive guide to inheritance in C++, covering all types and modes with practical examples that demonstrate the concepts in action.*

# CPP Module 04

**Topics Covered:** Virtual functions, override, deep & shallow copy, subtype polymorphism, abstract classes, interfaces

> *"Subtype polymorphism is key to understand maximum flexibility in object-oriented programming"* - Base64 decoded message

## Overview

In this module, we explore how polymorphism allows objects of different classes to be treated as objects of a common superclass, particularly through subtype polymorphism. We'll also cover deep & shallow copy, virtual functions, override, abstract classes, interfaces, and copying mechanisms relevant to inheritance and dynamic memory management.

## Deep vs Shallow Copy

When copying objects, C++ differentiates between **shallow** and **deep copies**:

- **Shallow copy:** Copies the memory address of an object, meaning both the original and the copy share the same data
- **Deep copy:** Creates a full, independent copy of an object and its associated resources, avoiding shared ownership of data

This distinction is crucial in classes using polymorphism, especially when handling pointers or dynamically allocated memory. For normal data types like `int` (not `int*`), there is no problem or difference - shallow copy will work normally without affecting your data.

### Shallow Copy Example

```cpp
#include <iostream>

class Base {
public:
    int* data;
    int a;
    
    // Constructor
    Base(int value) : a(value) {
        data = new int(value * 2);
    }
    
    // Problematic shallow copy constructor
    Base(const Base& other) : data(other.data), a(other.a) {
        // Only copies the pointer address, not the actual data
        std::cout << "Shallow copy constructor called" << std::endl;
    }
    
    // Destructor
    ~Base() {
        delete data;
        std::cout << "Destructor called" << std::endl;
    }
    
    void displayData() {
        std::cout << "a: " << a << ", *data: " << *data << std::endl;
    }
};
```

#### Problem Case with Shallow Copy:

```cpp
int main() {
    // Problem case with pointers
    {
        Base obj1(5);
        obj1.displayData(); // a: 5, *data: 10
        
        Base obj2 = obj1;  // Shallow copy - both share same data pointer
        obj2.displayData(); // a: 5, *data: 10
        
        *obj2.data = 100;  // Changing obj2's data
        
        std::cout << "After modifying obj2.data:" << std::endl;
        obj1.displayData(); // a: 5, *data: 100 (PROBLEM: obj1 affected!)
        obj2.displayData(); // a: 5, *data: 100
        
        // Both objects will try to delete the same memory location
        // This leads to undefined behavior (double deletion)
    }
    
    return 0;
}
```

**Issues with shallow copy:**
- Both `obj1` and `obj2` share the same `data` pointer
- Modifying `obj2.data` affects `obj1.data` because both point to the same location
- When objects are destroyed, both try to delete the same memory (undefined behavior)
- If the original object is deleted, the pointer becomes invalid in both objects (dangling pointer)

#### No Problem Case with Primitive Types:

```cpp
class SimpleBase {
public:
    int a;
    
    SimpleBase(int value) : a(value) {}
    
    // Shallow copy works fine for primitive types
    SimpleBase(const SimpleBase& other) : a(other.a) {}
};

int main() {
    SimpleBase obj1(5);
    SimpleBase obj2 = obj1;  // Shallow copy
    
    obj2.a = 10;  // Change obj2's a
    
    std::cout << "obj1.a: " << obj1.a << std::endl;  // Outputs: 5
    std::cout << "obj2.a: " << obj2.a << std::endl;  // Outputs: 10
    
    // No problem - each object has its own copy of primitive data
    return 0;
}
```

### Deep Copy Example

Because of the problems with shallow copy when dealing with pointers, deep copy provides a solution by creating independent copies of the data.

```cpp
#include <iostream>

class Base {
public:
    int* data;
    int a;
    
    // Constructor
    Base(int value) : a(value) {
        data = new int(value * 2);
        std::cout << "Constructor called" << std::endl;
    }
    
    // Deep copy constructor
    Base(const Base& other) : a(other.a) {
        data = new int(*other.data);  // Allocate new memory and copy the value
        std::cout << "Deep copy constructor called" << std::endl;
    }
    
    // Copy assignment operator (deep copy)
    Base& operator=(const Base& other) {
        if (this != &other) {
            delete data;  // Clean up existing data
            a = other.a;
            data = new int(*other.data);  // Deep copy
        }
        return *this;
    }
    
    // Clone method for polymorphic copying
    virtual Base* clone() const {
        return new Base(*this);
    }
    
    // Destructor
    ~Base() {
        delete data;
        std::cout << "Destructor called" << std::endl;
    }
    
    void displayData() {
        std::cout << "a: " << a << ", *data: " << *data 
                  << ", data address: " << data << std::endl;
    }
};

int main() {
    Base obj1(5);
    obj1.displayData(); // Shows original data and address
    
    Base obj2 = obj1;   // Deep copy constructor called
    obj2.displayData(); // Shows copied data with different address
    
    *obj2.data = 100;   // Modify obj2's data
    
    std::cout << "After modifying obj2.data:" << std::endl;
    obj1.displayData(); // obj1 is unaffected
    obj2.displayData(); // obj2 shows modified data
    
    return 0;
}
```

**Advantages of deep copy:**
- Each object has its own independent copy of the data
- Changes to one object don't affect the other
- No dangling pointer issues
- Safe destruction of objects

## Virtual Functions and Override

In C++, a **virtual function** allows derived classes to provide a specific implementation of a function defined in the base class. Virtual functions enable **runtime polymorphism**, where the actual function being called is determined by the object's runtime type rather than its compile-time type.

The `override` keyword ensures that a function in a derived class is actually overriding a base class's virtual function. If no matching function exists in the base class, the compiler generates an error.

### Runtime Polymorphism Example

Runtime polymorphism occurs when you use the `virtual` keyword in a parent class member function and override it in the child class.

#### Without Virtual Functions (Problem):

```cpp
#include <iostream>

class Shape {
public:
    void draw() {  // Non-virtual function
        std::cout << "Base Shape draw()" << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() {  // This hides the base class function
        std::cout << "Drawing a Circle" << std::endl;
    }
};

int main() {
    Shape* shape = new Circle();
    shape->draw();  // Calls Shape::draw(), not Circle::draw()!
    
    delete shape;
    return 0;
}
// Output: Base Shape draw() (WRONG!)
```

#### With Virtual Functions (Solution):

```cpp
#include <iostream>

class Shape {
public:
    virtual void draw() {  // Virtual function enables runtime polymorphism
        std::cout << "Base Shape draw()" << std::endl;
    }
    
    // Virtual destructor is important for proper cleanup
    virtual ~Shape() {
        std::cout << "Shape destructor" << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {  // Overrides the base class function
        std::cout << "Drawing a Circle" << std::endl;
    }
    
    ~Circle() override {
        std::cout << "Circle destructor" << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a Rectangle" << std::endl;
    }
    
    ~Rectangle() override {
        std::cout << "Rectangle destructor" << std::endl;
    }
};

int main() {
    Shape* shapes[] = {
        new Circle(),
        new Rectangle(),
        new Circle()
    };
    
    // Runtime polymorphism in action
    for (int i = 0; i < 3; i++) {
        shapes[i]->draw();  // Calls the correct derived class method
        delete shapes[i];   // Calls the correct destructor
    }
    
    return 0;
}
// Output:
// Drawing a Circle
// Drawing a Rectangle  
// Drawing a Circle
```

### Comprehensive Polymorphism Example

```cpp
#include <iostream>
#include <vector>
#include <memory>

class Animal {
public:
    virtual void makeSound() {
        std::cout << "Some generic animal sound" << std::endl;
    }
    
    virtual void move() {
        std::cout << "Animal moves" << std::endl;
    }
    
    // Pure virtual function makes this an abstract class
    virtual std::string getType() const = 0;
    
    virtual ~Animal() {
        std::cout << "Animal destructor" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof! Woof!" << std::endl;
    }
    
    void move() override {
        std::cout << "Dog runs on four legs" << std::endl;
    }
    
    std::string getType() const override {
        return "Dog";
    }
    
    ~Dog() override {
        std::cout << "Dog destructor" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Meow! Meow!" << std::endl;
    }
    
    void move() override {
        std::cout << "Cat walks silently" << std::endl;
    }
    
    std::string getType() const override {
        return "Cat";
    }
    
    ~Cat() override {
        std::cout << "Cat destructor" << std::endl;
    }
};

void demonstratePolymorphism(Animal* animal) {
    std::cout << "Animal type: " << animal->getType() << std::endl;
    animal->makeSound();
    animal->move();
    std::cout << "---" << std::endl;
}

int main() {
    // Using smart pointers for automatic memory management
    std::vector<std::unique_ptr<Animal>> animals;
    
    animals.push_back(std::make_unique<Dog>());
    animals.push_back(std::make_unique<Cat>());
    animals.push_back(std::make_unique<Dog>());
    
    for (auto& animal : animals) {
        demonstratePolymorphism(animal.get());
    }
    
    return 0;
}
```

## VTable (Virtual Table)

A **vtable (virtual table)** is a mechanism used in C++ to support **runtime polymorphism** for classes with **virtual functions**. It is essentially a table of function pointers, one for each virtual function in a class.

### How VTable Works:

1. **VTable Creation:** Each class with virtual functions gets its own vtable containing pointers to the virtual function implementations
2. **VPtr (Virtual Pointer):** Each object of a class with virtual functions contains a hidden pointer (vptr) that points to the class's vtable
3. **Dynamic Dispatch:** When a virtual function is called, the program uses the vptr to find the correct function in the vtable

### VTable Example Visualization:

```cpp
#include <iostream>

class Base {
public:
    virtual void func1() { std::cout << "Base::func1()" << std::endl; }
    virtual void func2() { std::cout << "Base::func2()" << std::endl; }
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void func1() override { std::cout << "Derived::func1()" << std::endl; }
    void func2() override { std::cout << "Derived::func2()" << std::endl; }
    virtual void func3() { std::cout << "Derived::func3()" << std::endl; }
};

/*
VTable for Base:
+-------------------+
| &Base::func1      |
| &Base::func2      |
| &Base::~Base      |
+-------------------+

VTable for Derived:
+-------------------+
| &Derived::func1   |  // Overridden
| &Derived::func2   |  // Overridden
| &Derived::~Derived|  // Overridden
| &Derived::func3   |  // New virtual function
+-------------------+
*/

int main() {
    Base* ptr = new Derived();
    
    // These calls use the vtable to find the correct function
    ptr->func1();  // Calls Derived::func1() via vtable lookup
    ptr->func2();  // Calls Derived::func2() via vtable lookup
    
    delete ptr;    // Calls Derived::~Derived() via vtable lookup
    
    return 0;
}
```

## Abstract Classes

An **abstract class** cannot create objects directly and must contain at least one **pure virtual function** (`= 0`). Derived classes must implement all pure virtual functions to become concrete classes. This enforces specific behavior across derived classes.

```cpp
#include <iostream>
#include <vector>
#include <memory>

// Abstract base class
class Drawable {
public:
    // Pure virtual functions make this class abstract
    virtual void draw() const = 0;
    virtual double getArea() const = 0;
    virtual std::string getName() const = 0;
    
    // Virtual destructor
    virtual ~Drawable() = default;
    
    // Concrete method that can be inherited
    void displayInfo() const {
        std::cout << "Shape: " << getName() 
                  << ", Area: " << getArea() << std::endl;
        draw();
    }
};

// Concrete derived class
class Circle : public Drawable {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    
    void draw() const override {
        std::cout << "Drawing a circle with radius " << radius << std::endl;
    }
    
    double getArea() const override {
        return 3.14159 * radius * radius;
    }
    
    std::string getName() const override {
        return "Circle";
    }
};

class Rectangle : public Drawable {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}
    
    void draw() const override {
        std::cout << "Drawing a rectangle " << width << "x" << height << std::endl;
    }
    
    double getArea() const override {
        return width * height;
    }
    
    std::string getName() const override {
        return "Rectangle";
    }
};

int main() {
    // Cannot instantiate abstract class
    // Drawable d;  // ERROR: Cannot instantiate abstract class
    
    std::vector<std::unique_ptr<Drawable>> shapes;
    
    shapes.push_back(std::make_unique<Circle>(5.0));
    shapes.push_back(std::make_unique<Rectangle>(4.0, 6.0));
    shapes.push_back(std::make_unique<Circle>(3.0));
    
    for (const auto& shape : shapes) {
        shape->displayInfo();
        std::cout << "---" << std::endl;
    }
    
    return 0;
}
```

## Interfaces

In C++, an **interface** is an abstract class where all methods are pure virtual. It defines a contract for the derived classes to follow without providing any implementation.

```cpp
#include <iostream>

// Interface - all methods are pure virtual
class Printable {
public:
    virtual void print() const = 0;
    virtual ~Printable() = default;
};

class Serializable {
public:
    virtual std::string serialize() const = 0;
    virtual void deserialize(const std::string& data) = 0;
    virtual ~Serializable() = default;
};

// Multiple interface inheritance
class Document : public Printable, public Serializable {
private:
    std::string content;
    std::string title;

public:
    Document(const std::string& t, const std::string& c) 
        : title(t), content(c) {}
    
    // Implement Printable interface
    void print() const override {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Content: " << content << std::endl;
    }
    
    // Implement Serializable interface
    std::string serialize() const override {
        return title + "|" + content;
    }
    
    void deserialize(const std::string& data) override {
        size_t pos = data.find('|');
        if (pos != std::string::npos) {
            title = data.substr(0, pos);
            content = data.substr(pos + 1);
        }
    }
    
    const std::string& getTitle() const { return title; }
    const std::string& getContent() const { return content; }
};

// Another class implementing the same interfaces
class Report : public Printable, public Serializable {
private:
    std::string reportType;
    std::vector<std::string> data;

public:
    Report(const std::string& type) : reportType(type) {}
    
    void addData(const std::string& item) {
        data.push_back(item);
    }
    
    void print() const override {
        std::cout << "Report Type: " << reportType << std::endl;
        std::cout << "Data items:" << std::endl;
        for (const auto& item : data) {
            std::cout << "  - " << item << std::endl;
        }
    }
    
    std::string serialize() const override {
        std::string result = reportType + ";";
        for (const auto& item : data) {
            result += item + ",";
        }
        return result;
    }
    
    void deserialize(const std::string& serialized) override {
        // Implementation for deserializing report data
        std::cout << "Deserializing: " << serialized << std::endl;
    }
};

// Function that works with any Printable object
void printAny(const Printable& obj) {
    obj.print();
}

// Function that works with any Serializable object
void saveToFile(const Serializable& obj) {
    std::string data = obj.serialize();
    std::cout << "Saving to file: " << data << std::endl;
}

int main() {
    Document doc("My Document", "This is the content of my document.");
    Report report("Monthly Sales");
    report.addData("Sales: $10000");
    report.addData("Profit: $2000");
    
    // Using interface polymorphism
    std::cout << "=== Printing objects ===" << std::endl;
    printAny(doc);
    std::cout << "---" << std::endl;
    printAny(report);
    
    std::cout << "\n=== Serializing objects ===" << std::endl;
    saveToFile(doc);
    saveToFile(report);
    
    return 0;
}
```

## Key Concepts Summary

### Virtual Functions
- Enable runtime polymorphism
- Allow derived classes to override base class behavior
- Function resolution happens at runtime based on object type

### Override Keyword
- Ensures function is actually overriding a virtual function
- Provides compile-time safety
- Makes code more readable and maintainable

### Deep vs Shallow Copy
- **Shallow:** Copies pointers/references (dangerous with dynamic memory)
- **Deep:** Copies actual data (safe but potentially expensive)
- Essential for classes with dynamic memory allocation

### Abstract Classes
- Cannot be instantiated directly
- Must contain at least one pure virtual function
- Used to define common interface for derived classes

### Interfaces
- Abstract classes with only pure virtual functions
- Define contracts that implementing classes must follow
- Enable multiple inheritance of behavior

### VTable
- Mechanism enabling runtime polymorphism
- Table of function pointers for virtual functions
- Each object has a vptr pointing to its class's vtable

---

*This module provides the foundation for advanced object-oriented programming in C++, enabling flexible and maintainable code through proper use of polymorphism and abstraction.*


# CPP Module 05

**Topics Covered:** Exception handling, try-catch blocks, synchronous & asynchronous exceptions, function pointers, insertion operator overloading

> *"Exception handling transforms unpredictable runtime problems into controlled, manageable responses"*

## Overview

In this module, we explore C++ exception handling mechanisms that allow programs to respond gracefully to runtime errors and exceptional circumstances. We'll cover fundamental try-throw-catch blocks, exception types, function pointers, and operator overloading patterns that enhance robust program design.

## What Are Exceptions

**Exceptions** are responses to exceptional circumstances that arise while a program is running, such as dividing by zero. When problems occur during program execution, exceptions provide a structured way to handle these situations.

### Key Benefits:
- **Allow program continuation**: Programs can continue executing after handling the exception
- **Controlled termination**: Programs can notify users of problems and terminate in a controlled manner  
- **Robust programs**: Makes programs more robust and fault-tolerant

### Basic Concept:

```cpp
// When an exceptional situation occurs, the program throws an exception
if (someErrorCondition) {
    throw SomeExceptionType("Error message");
}

// The exception is caught and handled in a catch block
catch(SomeExceptionType e) {
    // Handle the error appropriately
}
```

## Exception Handling Fundamentals

An **exception is a class** - specifically, the standard C++ base class for all exceptions. This class provides derived classes with a virtual function `what()` that returns the exception's stored error message.

### The Exception Process:
1. When an exceptional situation occurs, the program **throws** an object of the exception class
2. The thrown exception is **caught** in a catch block
3. The catch block handles the exception appropriately

### Basic Syntax:

```cpp
try {
    // Code that might throw an exception
    throw SomeExceptionType("Error message");
}
catch(ExceptionType ExceptionName) {   
    // catch block catches the exception that is thrown from try block
}
```

## Types of C++ Exceptions

Understanding the two main categories of exceptions helps in designing appropriate error handling strategies.

### 1. Synchronous Exceptions

**Synchronous exceptions** happen when something goes wrong because of a mistake in the input data or when the program is not equipped to handle the current type of data it's working with.

**Examples:**
- Dividing a number by zero
- Array index out of bounds
- Invalid input data
- Logic errors in program flow

```cpp
#include <iostream>

int main() {
    try {
        int i;
        std::cin >> i; 
        if (i > 18) {
            std::cout << "Access granted" << std::endl;
        }
        else {
            throw (i); // Throw the age value as an exception
            // Note: Code after throw won't execute as control jumps to catch
        }
    }
    catch(int e) { // Catch the thrown integer
        std::cout << "Access denied" << std::endl;
        std::cout << "Age is " << e << std::endl;
    }
    
    return 0;
}
```

### 2. Asynchronous Exceptions

**Asynchronous exceptions** are beyond the program's control, caused by external factors.

**Examples:**
- Disc failure
- Keyboard interrupts  
- Network failures
- System resource exhaustion
- Hardware malfunctions

These exceptions require different handling strategies since they're unpredictable and external to the program logic.

## Exception Handling Rules and Patterns

### Type Matching Requirements

Exception handling follows strict rules for type matching between throw and catch blocks:

#### Key Rules:
- **Exact type match required**: The throw and catch types must match exactly
- **No implicit conversion**: Implicit type conversion doesn't occur for primitive types
- **First-match rule**: When multiple catch blocks exist, the first matching catch block is executed

#### Type Matching Examples:

```cpp
// Example 1: Multiple catch blocks with same type
try {
    throw 100;
}
catch (int x) {     // This will catch the exception (first match)
    std::cout << "First catch: " << x << std::endl;
}
catch (int y) {     // This won't execute due to first-match rule
    std::cout << "Second catch: " << y << std::endl;
}

// Example 2: Type conversion doesn't happen
try {
    throw 100;      // Throwing int
}
catch (double x) {  // Won't catch int - no implicit conversion
    std::cout << "Double catch: " << x << std::endl;
}
catch (int i) {     // Will catch the int
    std::cout << "Int catch: " << i << std::endl;
}
```

### Important Exception Handling Notes

#### Uncaught Exceptions:
- **Critical**: If an exception is thrown and not caught anywhere, the program terminates abnormally
- Always ensure appropriate catch blocks exist for thrown exceptions

#### Catch-All Handler:
- **Special syntax**: `catch(...)` catches any exception type
- **Modern practice**: Generally not recommended in current development
- Use specific exception types for better error handling

#### The throw() Specifier:
```cpp
const char* what() const throw()
```
- **Purpose**: Ensures the function will not throw an exception
- **Critical for error handling**: Prevents nested exceptions
- **Used in what() function**: Standard practice for exception classes

## Function Pointers

**Function pointers** store the address of functions, enabling dynamic function calls and callback mechanisms.

### Basic Syntax:

```cpp
return_type (*FuncPtr)(parameter_type, ...);
```

### Function Pointer Examples:

```cpp
#include <iostream>

// Function declarations
void greetEnglish() { std::cout << "Hello!" << std::endl; }
void greetFrench() { std::cout << "Bonjour!" << std::endl; }

int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

int main() {
    // Function pointer declaration and assignment
    void (*greetFunc)() = greetEnglish;
    greetFunc(); // Calls greetEnglish()
    
    greetFunc = greetFrench;
    greetFunc(); // Calls greetFrench()
    
    // Function pointer for functions with parameters
    int (*mathFunc)(int, int) = add;
    std::cout << "Result: " << mathFunc(5, 3) << std::endl; // Output: 8
    
    mathFunc = multiply;
    std::cout << "Result: " << mathFunc(5, 3) << std::endl; // Output: 15
    
    return 0;
}
```

### Array of Function Pointers:

```cpp
#include <iostream>

void operation1() { std::cout << "Operation 1" << std::endl; }
void operation2() { std::cout << "Operation 2" << std::endl; }
void operation3() { std::cout << "Operation 3" << std::endl; }

int main() {
    // Array of function pointers
    void (*operations[])() = {operation1, operation2, operation3};
    
    for (int i = 0; i < 3; i++) {
        operations[i](); // Call each function
    }
    
    return 0;
}
```

## Insertion Operator Overloading (<<)

The insertion operator `<<` can be overloaded to provide custom output formatting for user-defined classes.

### Standard Pattern:

```cpp
std::ostream& operator<<(std::ostream& os, const ClassName& obj) {
    os << /* object data */;
    return os;
}
```

### Comprehensive Example:

```cpp
#include <iostream>
#include <fstream>
#include <sstream>

class Bureaucrat {
private:
    std::string name;
    int grade;

public:
    Bureaucrat(const std::string& n, int g) : name(n), grade(g) {}
    
    const std::string& getName() const { return name; }
    int getGrade() const { return grade; }
};

// Insertion operator overload
std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return os;
}

int main() {
    Bureaucrat b("John", 5);
    
    // Console output
    std::cout << b << std::endl;
    
    // File output
    std::ofstream file("output.txt");
    file << b << std::endl;
    file.close();
    
    // String stream output
    std::ostringstream oss;
    oss << b;
    std::string result = oss.str();
    std::cout << "String: " << result << std::endl;
    
    // Chaining demonstration
    std::cout << "Multiple objects: " << b << " and " << b << std::endl;
    
    return 0;
}
```

### Why Use std::ostream& Parameter?

#### Design Benefits:

1. **Flexibility**: Works with any `std::ostream` derived class:
   - `std::cout` (console output)
   - `std::ofstream` (file output)
   - `std::ostringstream` (string stream output)
   - Any other stream type

2. **Consistency**: Matches the standard C++ operator design pattern:
   ```cpp
   std::ostream& operator<<(std::ostream& os, int value);
   std::ostream& operator<<(std::ostream& os, const std::string& str);
   ```

3. **Chaining Support**: The reference return enables operator chaining:
   ```cpp
   std::cout << obj1 << " and " << obj2 << std::endl;
   ```

#### What Happens Without std::ostream& Parameter?

If you hardcode `std::cout` instead of using the parameter:

```cpp
// BAD: Limited to console output only
std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
    std::cout << obj.getName() << ", grade " << obj.getGrade();
    return os;
}
```

**Problems:**
- **Limited functionality**: Only works for console output
- **Breaks flexibility**: Cannot use with files, string streams, etc.
- **Inconsistent design**: Doesn't follow C++ standard patterns

#### Reference Parameters Benefits:

1. **Avoids copying**: The `&` in both parameters prevents unnecessary object copying
2. **Enables chaining**: The return reference allows multiple `<<` operations in sequence
3. **Maintains stream state**: Preserves formatting flags and other stream properties

## Assignment Operator Pattern

### Reference Return in Assignment Operators:

```cpp
ClassName& ClassName::operator=(const ClassName& rhs) {
    if (this != &rhs) {  // Self-assignment check
        // Copy data from rhs
    }
    return (*this);  // Return reference to current object
}
```

#### Why Return by Reference?

1. **Efficiency**: Returning by reference avoids creating unnecessary copies
2. **Chaining support**: Enables assignment chaining: `a = b = c`
3. **Standard behavior**: Matches built-in type assignment semantics

#### Reference vs Value Return:

```cpp
// With reference (GOOD)
ClassName& operator=(const ClassName& rhs) {
    return (*this);  // Efficient, enables chaining
}

// Without reference (LESS EFFICIENT)
ClassName operator=(const ClassName& rhs) {
    return (*this);  // Creates copy, but chaining still works
}
```

**Impact of removing reference:**
- **Chaining still works**: C++ handles this automatically
- **Performance cost**: Creates unnecessary copies of the object
- **Memory overhead**: Multiple copies for chained assignments like `a = b = c = d`

## Key Concepts Summary

### Exception Handling
- **Exceptions are classes** that carry error information
- **try-throw-catch** mechanism provides structured error handling
- **Type matching** must be exact between throw and catch blocks
- **Uncaught exceptions** cause abnormal program termination

### Exception Types
- **Synchronous**: Input/data errors that can be predicted and prevented
- **Asynchronous**: External system failures beyond program control

### Function Pointers
- Store addresses of functions for dynamic calls
- Enable callback mechanisms and flexible program design
- Syntax: `return_type (*pointer_name)(parameter_types)`

### Operator Overloading
- **std::ostream&** parameter enables flexible output to any stream type
- **Reference returns** enable chaining and avoid unnecessary copying
- **Consistent patterns** follow C++ standard library design principles

---

*This module provides essential error handling mechanisms and advanced C++ features for building robust, maintainable applications.*

# CPP Module 06

**Topics Covered:** Type casting, static_cast, dynamic_cast, const_cast, reinterpret_cast, uintptr_t, virtual destructors

> *"Casting provides powerful tools for type conversion, but with great power comes great responsibility"*

## Overview

In this module, we explore C++ casting mechanisms that allow developers to convert variables from one type to another effectively. We'll cover different casting types, each designed for specific scenarios with varying levels of safety and explicitness, along with related concepts like virtual destructors and low-level memory manipulation.

## What is Casting in C++

**Casting** refers to the process of converting a variable from one type to another. It is an essential part of programming as it allows developers to handle data of different types effectively.

### Why Casting is Important:
- **Data type compatibility**: Enables interaction between different data types
- **Memory management**: Allows low-level memory manipulation when needed
- **API compatibility**: Helps interface with different libraries and systems
- **Polymorphism support**: Enables safe type conversions in inheritance hierarchies

C++ provides several types of casting mechanisms, each designed for specific scenarios and with different levels of safety and explicitness.

## Types of Casting in C++

### 1. Implicit Casting (Type Conversion)

**Implicit casting**, also known as "type coercion," happens automatically when the compiler converts a value from one type to another, as long as there is no data loss or ambiguity.

#### Characteristics:
- Performed automatically by the compiler
- Only occurs when conversion is considered "safe"
- No explicit syntax required
- Limited to compatible types

#### Example:

```cpp
#include <iostream>

int main() {
    // Implicit conversions that are considered safe
    int a = 42;
    double b = a;        // int to double (safe - no data loss)
    float c = 3.14f;
    double d = c;        // float to double (safe - wider range)
    
    char ch = 'A';
    int ascii = ch;      // char to int (safe - ASCII conversion)
    
    std::cout << "a: " << a << std::endl;           // 42
    std::cout << "b: " << b << std::endl;           // 42.0
    std::cout << "c: " << c << std::endl;           // 3.14
    std::cout << "d: " << d << std::endl;           // 3.14
    std::cout << "ch: " << ch << std::endl;         // A
    std::cout << "ascii: " << ascii << std::endl;   // 65
    
    return 0;
}
```

#### When Implicit Casting Fails:

```cpp
#include <iostream>

int main() {
    double pi = 3.14159;
    // int truncated = pi;  // Warning: potential data loss
    
    const int value = 100;
    // int& ref = value;    // Error: cannot remove const implicitly
    
    int* ptr = nullptr;
    // int num = ptr;       // Error: cannot convert pointer to int
    
    return 0;
}
```

### 2. Explicit Casting (C-Style Casting)

**C-style casting** uses parentheses to explicitly specify the target type. It is less safe and does not distinguish between different types of casts.

#### Syntax:
```cpp
(type)value;
```

#### Characteristics:
- Inherited from C language
- Very powerful but potentially dangerous
- No compile-time type checking
- Can perform multiple cast types in one operation

#### Example:

```cpp
#include <iostream>

int main() {
    // Basic C-style casting
    double pi = 3.14159;
    int intPi = (int)pi;              // Truncates decimal part
    
    char ch = (char)65;               // ASCII to character
    
    // Potentially dangerous casts
    int num = 42;
    char* charPtr = (char*)&num;      // Reinterprets int as char pointer
    
    const int constVal = 100;
    int* nonConstPtr = (int*)&constVal; // Removes const qualifier
    
    std::cout << "pi: " << pi << std::endl;           // 3.14159
    std::cout << "intPi: " << intPi << std::endl;     // 3
    std::cout << "ch: " << ch << std::endl;           // A
    
    return 0;
}
```

#### Problems with C-Style Casting:
- **No type safety**: Can perform dangerous conversions
- **Hidden complexity**: May perform multiple cast operations
- **Hard to debug**: Difficult to identify cast-related issues
- **Poor readability**: Doesn't express intent clearly

### 3. Static Cast

**static_cast** is a safer and more explicit way to perform type conversions. It is used for conversions that are well-defined and do not involve casting away constness or performing dynamic checks.

#### Syntax:
```cpp
static_cast<new_type>(value);
```

#### Characteristics:
- Compile-time type checking
- Safer than C-style casts
- Cannot cast away const or volatile qualifiers
- Cannot perform unsafe pointer conversions

#### Use Cases and Examples:

```cpp
#include <iostream>
#include <vector>

class Base {
public:
    virtual ~Base() {}
    virtual void show() { std::cout << "Base class" << std::endl; }
};

class Derived : public Base {
public:
    void show() override { std::cout << "Derived class" << std::endl; }
    void derivedMethod() { std::cout << "Derived-specific method" << std::endl; }
};

int main() {
    // 1. Scalar type conversions
    float f = 5.67f;
    int i = static_cast<int>(f);              // float to int
    double d = static_cast<double>(i);        // int to double
    
    std::cout << "f: " << f << ", i: " << i << ", d: " << d << std::endl;
    
    // 2. Pointer conversions in inheritance hierarchy
    Derived derivedObj;
    Base* basePtr = &derivedObj;              // Implicit upcast (safe)
    Derived* derivedPtr = static_cast<Derived*>(basePtr);  // Explicit downcast
    
    basePtr->show();                          // Calls Derived::show()
    derivedPtr->derivedMethod();              // Access derived-specific method
    
    // 3. Void pointer conversions
    int value = 42;
    void* voidPtr = &value;
    int* intPtr = static_cast<int*>(voidPtr); // void* to int*
    std::cout << "Value through void*: " << *intPtr << std::endl;
    
    // 4. Enum conversions
    enum Color { RED = 1, GREEN = 2, BLUE = 3 };
    int colorValue = static_cast<int>(RED);   // enum to int
    Color color = static_cast<Color>(2);      // int to enum (careful!)
    
    std::cout << "Color value: " << colorValue << std::endl;
    
    return 0;
}
```

#### When static_cast Won't Work:

```cpp
#include <iostream>

int main() {
    const int constValue = 100;
    // int* ptr = static_cast<int*>(&constValue);  // Error: cannot cast away const
    
    int value = 42;
    // char* charPtr = static_cast<char*>(&value); // Error: unrelated pointer types
    
    // Use const_cast and reinterpret_cast for these cases
    return 0;
}
```

### 4. Dynamic Cast

**dynamic_cast** is used for safely converting pointers or references of polymorphic types (i.e., classes with virtual functions). It performs runtime type checking and returns `nullptr` if the conversion is not valid.

#### Syntax:
```cpp
dynamic_cast<new_type>(value);
```

#### Characteristics:
- Runtime type checking
- Only works with polymorphic types (classes with virtual functions)
- Returns nullptr for invalid pointer conversions
- Throws std::bad_cast for invalid reference conversions
- Safest cast for inheritance hierarchies

#### Comprehensive Example:

```cpp
#include <iostream>
#include <vector>
#include <memory>
#include <typeinfo>

class Animal {
public:
    virtual ~Animal() = default;  // Makes class polymorphic
    virtual void makeSound() = 0;
    virtual std::string getType() const = 0;
};

class Dog : public Animal {
public:
    void makeSound() override { std::cout << "Woof!" << std::endl; }
    std::string getType() const override { return "Dog"; }
    void wagTail() { std::cout << "Wagging tail!" << std::endl; }
};

class Cat : public Animal {
public:
    void makeSound() override { std::cout << "Meow!" << std::endl; }
    std::string getType() const override { return "Cat"; }
    void purr() { std::cout << "Purring..." << std::endl; }
};

class Fish : public Animal {
public:
    void makeSound() override { std::cout << "Blub blub!" << std::endl; }
    std::string getType() const override { return "Fish"; }
    void swim() { std::cout << "Swimming..." << std::endl; }
};

void identifyAndInteract(Animal* animal) {
    if (!animal) return;
    
    std::cout << "Animal type: " << animal->getType() << std::endl;
    animal->makeSound();
    
    // Safe downcasting with dynamic_cast
    if (Dog* dog = dynamic_cast<Dog*>(animal)) {
        std::cout << "It's a dog! ";
        dog->wagTail();
    }
    else if (Cat* cat = dynamic_cast<Cat*>(animal)) {
        std::cout << "It's a cat! ";
        cat->purr();
    }
    else if (Fish* fish = dynamic_cast<Fish*>(animal)) {
        std::cout << "It's a fish! ";
        fish->swim();
    }
    else {
        std::cout << "Unknown animal type!" << std::endl;
    }
    
    std::cout << "---" << std::endl;
}

int main() {
    // Create different animals
    std::vector<std::unique_ptr<Animal>> animals;
    animals.push_back(std::make_unique<Dog>());
    animals.push_back(std::make_unique<Cat>());
    animals.push_back(std::make_unique<Fish>());
    
    // Identify and interact with each animal
    for (auto& animal : animals) {
        identifyAndInteract(animal.get());
    }
    
    // Demonstrate failed dynamic_cast
    std::cout << "=== Failed Cast Example ===" << std::endl;
    Dog dog;
    Animal* animalPtr = &dog;
    
    Cat* catPtr = dynamic_cast<Cat*>(animalPtr);  // Will return nullptr
    if (catPtr) {
        std::cout << "Successfully cast to Cat" << std::endl;
    } else {
        std::cout << "Failed to cast to Cat (as expected)" << std::endl;
    }
    
    return 0;
}
```

#### Dynamic Cast with References:

```cpp
#include <iostream>
#include <stdexcept>

class Base {
public:
    virtual ~Base() = default;
};

class Derived : public Base {
public:
    void specificMethod() { std::cout << "Derived method called" << std::endl; }
};

void processReference(Base& base) {
    try {
        // dynamic_cast with references throws exception on failure
        Derived& derived = dynamic_cast<Derived&>(base);
        derived.specificMethod();
    }
    catch (const std::bad_cast& e) {
        std::cout << "Bad cast exception: " << e.what() << std::endl;
    }
}

int main() {
    Derived d;
    Base b;
    
    std::cout << "Casting derived reference:" << std::endl;
    processReference(d);  // Success
    
    std::cout << "Casting base reference:" << std::endl;
    processReference(b);  // Throws std::bad_cast
    
    return 0;
}
```

### 5. Const Cast

**const_cast** is used to add or remove the `const` qualifier from a variable. This is particularly useful for API compatibility but should be used cautiously.

#### Syntax:
```cpp
const_cast<new_type>(value);
```

#### Characteristics:
- Only modifies const/volatile qualifiers
- Does not change the underlying type
- Should be used sparingly and carefully
- Undefined behavior if you modify originally const data

#### Use Cases and Examples:

```cpp
#include <iostream>
#include <cstring>

// Legacy C function that doesn't use const (but doesn't modify data)
void legacyPrintFunction(char* str) {
    std::cout << "Legacy output: " << str << std::endl;
}

// Function that needs to modify data temporarily
void processData(const std::string& data) {
    // Need to interface with legacy API that requires non-const
    char* modifiableData = const_cast<char*>(data.c_str());
    
    // Safe because we're not actually modifying it
    legacyPrintFunction(modifiableData);
    
    // DO NOT DO THIS - undefined behavior:
    // modifiableData[0] = 'X';  // DANGEROUS!
}

class DataManager {
private:
    mutable int accessCount;  // Can be modified in const methods
    std::string data;

public:
    DataManager(const std::string& d) : data(d), accessCount(0) {}
    
    // Const method that needs to modify mutable member
    const std::string& getData() const {
        ++accessCount;  // OK - accessCount is mutable
        return data;
    }
    
    // Sometimes you need const_cast for complex scenarios
    void complexConstOperation() const {
        DataManager* nonConstThis = const_cast<DataManager*>(this);
        // Only modify mutable members or perform non-modifying operations
        nonConstThis->accessCount++;
    }
    
    int getAccessCount() const { return accessCount; }
};

int main() {
    // 1. API compatibility example
    const std::string message = "Hello, World!";
    processData(message);
    
    // 2. Removing const from references
    const int constValue = 42;
    int& nonConstRef = const_cast<int&>(constValue);
    std::cout << "Value: " << nonConstRef << std::endl;
    
    // WARNING: Modifying nonConstRef is undefined behavior!
    // nonConstRef = 100;  // DANGEROUS - undefined behavior
    
    // 3. Working with const objects
    const DataManager manager("Important Data");
    std::cout << "Data: " << manager.getData() << std::endl;
    std::cout << "Access count: " << manager.getAccessCount() << std::endl;
    
    return 0;
}
```

#### When const_cast is Dangerous:

```cpp
#include <iostream>

int main() {
    // DANGEROUS: Modifying originally const data
    const int originallyConst = 100;
    int* ptr = const_cast<int*>(&originallyConst);
    
    std::cout << "Before: " << originallyConst << std::endl;
    
    // This is undefined behavior!
    // *ptr = 200;  // DON'T DO THIS
    
    // SAFE: Removing const from non-originally-const data
    int originallyNonConst = 300;
    const int* constPtr = &originallyNonConst;
    int* nonConstPtr = const_cast<int*>(constPtr);
    *nonConstPtr = 400;  // OK - data wasn't originally const
    
    std::cout << "Modified: " << originallyNonConst << std::endl;
    
    return 0;
}
```

### 6. Reinterpret Cast

**reinterpret_cast** is used for low-level casting that reinterprets the bit pattern of the object. It is considered unsafe and should be used only when absolutely necessary.

#### Syntax:
```cpp
reinterpret_cast<new_type>(value);
```

#### Characteristics:
- Lowest-level cast operation
- Reinterprets bit patterns without conversion
- Platform and implementation dependent
- No safety checks whatsoever
- Should be used only for system-level programming

#### Use Cases and Examples:

```cpp
#include <iostream>
#include <cstdint>

struct Point {
    int x, y;
};

int main() {
    // 1. Pointer to integer conversion
    int value = 42;
    uintptr_t address = reinterpret_cast<uintptr_t>(&value);
    std::cout << "Address of value: 0x" << std::hex << address << std::dec << std::endl;
    
    // Convert back to pointer
    int* ptr = reinterpret_cast<int*>(address);
    std::cout << "Value through converted pointer: " << *ptr << std::endl;
    
    // 2. Type punning (viewing same memory as different type)
    Point p = {10, 20};
    int* intArray = reinterpret_cast<int*>(&p);
    std::cout << "Point as int array: [" << intArray[0] << ", " << intArray[1] << "]" << std::endl;
    
    // 3. Function pointer conversions
    void (*funcPtr)() = reinterpret_cast<void(*)()>(address);
    // Note: Calling this would be undefined behavior unless address points to valid function
    
    // 4. Byte-level access to objects
    double d = 3.14159;
    unsigned char* bytes = reinterpret_cast<unsigned char*>(&d);
    std::cout << "Double as bytes: ";
    for (size_t i = 0; i < sizeof(double); ++i) {
        std::cout << std::hex << static_cast<int>(bytes[i]) << " ";
    }
    std::cout << std::dec << std::endl;
    
    // 5. Working with memory-mapped hardware (simulation)
    const uintptr_t HARDWARE_REGISTER = 0x12345678;  // Simulated address
    volatile uint32_t* registerPtr = reinterpret_cast<volatile uint32_t*>(HARDWARE_REGISTER);
    // In real hardware programming: *registerPtr = 0xFF;
    
    return 0;
}
```

#### Common reinterpret_cast Patterns:

```cpp
#include <iostream>
#include <cstdint>

// Serialize/deserialize functions
void serializeInt(int value, unsigned char* buffer) {
    unsigned char* valueBytes = reinterpret_cast<unsigned char*>(&value);
    for (size_t i = 0; i < sizeof(int); ++i) {
        buffer[i] = valueBytes[i];
    }
}

int deserializeInt(const unsigned char* buffer) {
    int result;
    unsigned char* resultBytes = reinterpret_cast<unsigned char*>(&result);
    for (size_t i = 0; i < sizeof(int); ++i) {
        resultBytes[i] = buffer[i];
    }
    return result;
}

int main() {
    int original = 305419896;  // 0x12345678
    unsigned char buffer[sizeof(int)];
    
    // Serialize
    serializeInt(original, buffer);
    std::cout << "Serialized bytes: ";
    for (size_t i = 0; i < sizeof(int); ++i) {
        std::cout << std::hex << static_cast<int>(buffer[i]) << " ";
    }
    std::cout << std::dec << std::endl;
    
    // Deserialize
    int reconstructed = deserializeInt(buffer);
    std::cout << "Reconstructed value: " << reconstructed << std::endl;
    std::cout << "Match: " << (original == reconstructed ? "Yes" : "No") << std::endl;
    
    return 0;
}
```

## uintptr_t: Pointer-to-Integer Type

**uintptr_t** is an unsigned integer type defined in `<cstdint>` that is capable of storing a pointer's value by representing the pointer as an integer.

### Key Characteristics:
- **Pointer storage**: Designed to store pointer values as integers
- **Platform independent**: Size adapts to platform pointer size
- **Standardized**: Defined in C++ standard library
- **Reversible conversion**: Can convert back to pointer safely

### Purpose and Use Cases:

```cpp
#include <iostream>
#include <cstdint>
#include <vector>
#include <iomanip>

class MemoryManager {
private:
    struct AllocationRecord {
        uintptr_t address;
        size_t size;
        std::string description;
    };
    
    std::vector<AllocationRecord> allocations;

public:
    void recordAllocation(void* ptr, size_t size, const std::string& desc) {
        uintptr_t addr = reinterpret_cast<uintptr_t>(ptr);
        allocations.push_back({addr, size, desc});
    }
    
    void printAllocations() const {
        std::cout << "Memory Allocations:" << std::endl;
        std::cout << std::setfill('0');
        for (const auto& record : allocations) {
            std::cout << "0x" << std::hex << std::setw(16) << record.address 
                      << std::dec << " - Size: " << record.size 
                      << " bytes - " << record.description << std::endl;
        }
    }
    
    bool isValidAddress(void* ptr) const {
        uintptr_t addr = reinterpret_cast<uintptr_t>(ptr);
        for (const auto& record : allocations) {
            if (addr >= record.address && addr < record.address + record.size) {
                return true;
            }
        }
        return false;
    }
};

// Pointer arithmetic using uintptr_t
void demonstratePointerArithmetic() {
    int array[5] = {10, 20, 30, 40, 50};
    
    // Get base address as uintptr_t
    uintptr_t baseAddr = reinterpret_cast<uintptr_t>(array);
    
    std::cout << "Array element addresses and values:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        uintptr_t elemAddr = baseAddr + i * sizeof(int);
        int* elemPtr = reinterpret_cast<int*>(elemAddr);
        
        std::cout << "Element " << i << ": Address = 0x" << std::hex << elemAddr 
                  << std::dec << ", Value = " << *elemPtr << std::endl;
    }
}

int main() {
    MemoryManager memMgr;
    
    // Allocate some memory and record it
    int* intPtr = new int(42);
    double* doublePtr = new double(3.14);
    char* charArray = new char[100];
    
    memMgr.recordAllocation(intPtr, sizeof(int), "Integer variable");
    memMgr.recordAllocation(doublePtr, sizeof(double), "Double variable");
    memMgr.recordAllocation(charArray, 100, "Character array");
    
    // Print allocation records
    memMgr.printAllocations();
    
    // Test address validation
    std::cout << "\nAddress validation tests:" << std::endl;
    std::cout << "intPtr valid: " << (memMgr.isValidAddress(intPtr) ? "Yes" : "No") << std::endl;
    std::cout << "doublePtr valid: " << (memMgr.isValidAddress(doublePtr) ? "Yes" : "No") << std::endl;
    
    int stackVar = 100;
    std::cout << "stackVar valid: " << (memMgr.isValidAddress(&stackVar) ? "Yes" : "No") << std::endl;
    
    // Demonstrate pointer arithmetic
    std::cout << "\nPointer arithmetic demonstration:" << std::endl;
    demonstratePointerArithmetic();
    
    // Cleanup
    delete intPtr;
    delete doublePtr;
    delete[] charArray;
    
    return 0;
}
```

### Common uintptr_t Use Cases:

1. **Pointer-to-Integer Conversions**: Converting pointers for logging, serialization, or low-level manipulation
2. **System-Level Programming**: Operating systems, embedded systems, direct memory manipulation
3. **Interfacing with Hardware**: Memory-mapped I/O, hardware registers
4. **Hash Functions**: Using pointer addresses as hash keys
5. **Alignment Calculations**: Ensuring proper memory alignment

## Virtual Destructors

A **virtual destructor** ensures that the correct destructor is called for an object when it is deleted through a base class pointer. This is critical for proper resource management in inheritance hierarchies.

### Why Virtual Destructors Are Important

When deleting an object of a derived class through a base class pointer, if the base class destructor is **not virtual**, only the base class destructor will be invoked. This can lead to **resource leaks** because the derived class destructor won't execute.

### Problem Without Virtual Destructors:

```cpp
#include <iostream>

class Base {
public:
    Base() { std::cout << "Base constructor" << std::endl; }
    ~Base() { std::cout << "Base destructor" << std::endl; }  // Non-virtual!
};

class Derived : public Base {
private:
    int* data;

public:
    Derived() : data(new int[1000]) { 
        std::cout << "Derived constructor (allocated memory)" << std::endl; 
    }
    
    ~Derived() { 
        delete[] data;
        std::cout << "Derived destructor (freed memory)" << std::endl; 
    }
};

int main() {
    std::cout << "=== Problem: Non-virtual destructor ===" << std::endl;
    
    Base* ptr = new Derived();  // Derived object created
    delete ptr;                 // Only Base destructor called! MEMORY LEAK!
    
    std::cout << "\nDerived destructor was NOT called - memory leaked!" << std::endl;
    
    return 0;
}
```

### Solution With Virtual Destructors:

```cpp
#include <iostream>
#include <memory>

class Base {
public:
    Base() { std::cout << "Base constructor" << std::endl; }
    virtual ~Base() { std::cout << "Base destructor" << std::endl; }  // Virtual!
};

class Derived : public Base {
private:
    int* data;

public:
    Derived() : data(new int[1000]) { 
        std::cout << "Derived constructor (allocated memory)" << std::endl; 
    }
    
    ~Derived() override { 
        delete[] data;
        std::cout << "Derived destructor (freed memory)" << std::endl; 
    }
};

class MoreDerived : public Derived {
private:
    double* moreData;

public:
    MoreDerived() : moreData(new double[500]) {
        std::cout << "MoreDerived constructor (allocated more memory)" << std::endl;
    }
    
    ~MoreDerived() override {
        delete[] moreData;
        std::cout << "MoreDerived destructor (freed more memory)" << std::endl;
    }
};

int main() {
    std::cout << "=== Solution: Virtual destructor ===" << std::endl;
    
    Base* ptr1 = new Derived();
    Base* ptr2 = new MoreDerived();
    
    std::cout << "\nDeleting Derived through Base pointer:" << std::endl;
    delete ptr1;  // Correct destructors called: Derived -> Base
    
    std::cout << "\nDeleting MoreDerived through Base pointer:" << std::endl;
    delete ptr2;  // Correct destructors called: MoreDerived -> Derived -> Base
    
    std::cout << "\n=== Using smart pointers (recommended) ===" << std::endl;
    {
        std::unique_ptr<Base> smartPtr1 = std::make_unique<Derived>();
        std::unique_ptr<Base> smartPtr2 = std::make_unique<MoreDerived>();
        
        // Destructors automatically called when smart pointers go out of scope
        std::cout << "Smart pointers going out of scope..." << std::endl;
    }
    std::cout << "All resources properly cleaned up!" << std::endl;
    
    return 0;
}
```

## Best Practices for Casting in C++

1. **Prefer safer casts (`static_cast`, `dynamic_cast`)**: Use these over C-style casts whenever possible.
2. **Avoid unnecessary casting**: Redundant or unsafe casting can lead to undefined behavior and difficult-to-debug errors.
3. **Be cautious with `reinterpret_cast` and `const_cast`**: Use them only when you fully understand the implications.
4. **Use polymorphism and virtual functions**: When dealing with dynamic types, prefer designs that minimize the need for casting.

*Casting in C++ provides powerful tools for type conversion, but with great power comes great responsibility. Always prioritize code safety and readability when employing casting mechanisms.*

# CPP Module 07

**Topics Covered:** Function templates, class templates, template instantiation, type deduction, .tpp files

> *"Templates enable generic programming - write once, use with any type!"*

## Overview

In this module, we explore C++ templates that enable **generic programming**, allowing functions and classes to operate on various data types without rewriting code. Templates promote code reusability and type safety, forming the foundation of the Standard Template Library (STL). They are evaluated at compile time, generating type-specific code automatically through **instantiation**.

## What Are Templates

**Templates** are C++'s way of writing code that works with any data type. Instead of writing the same function or class multiple times for different types, you write it once using a placeholder type.

### Key Benefits:
- **Code reusability**: Write once, use with many types
- **Type safety**: Compiler ensures type correctness
- **Performance**: No runtime overhead - resolved at compile time
- **STL foundation**: Powers containers like `vector`, `map`, `set`

Think of templates as **smart copy-paste** - the compiler creates specialized versions for each type you use.

## Function Templates

**Function templates** define functions that work with any type using a placeholder `T` (or any name you choose).

### Basic Syntax:
```cpp
template<typename T>  // or template<class T>
T functionName(T param1, T param2) {
    // Implementation using T
}
```

### Simple Examples:

```cpp
#include <iostream>
#include <string>

// Basic function template
template<typename T>
T max(const T& a, const T& b) {
    return (a < b) ? b : a;
}

// Template with multiple parameters
template<typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

// Template that works with different types
template<typename T>
void printValue(const T& value) {
    std::cout << "Value: " << value << std::endl;
}

int main() {
    // Type deduction - compiler figures out T automatically
    int x = 5, y = 10;
    std::cout << "Max of " << x << " and " << y << " is " << max(x, y) << std::endl;
    
    double d1 = 3.14, d2 = 2.71;
    std::cout << "Max of " << d1 << " and " << d2 << " is " << max(d1, d2) << std::endl;
    
    std::string s1 = "hello", s2 = "world";
    std::cout << "Max of '" << s1 << "' and '" << s2 << "' is '" << max(s1, s2) << "'" << std::endl;
    
    // Using swap template
    std::cout << "\nBefore swap: x=" << x << ", y=" << y << std::endl;
    swap(x, y);
    std::cout << "After swap: x=" << x << ", y=" << y << std::endl;
    
    // Print different types
    printValue(42);
    printValue(3.14);
    printValue("Templates are cool!");
    
    return 0;
}
```

### Explicit Template Instantiation:

Sometimes you need to specify the type explicitly:

```cpp
#include <iostream>

template<typename T>
T convert(double value) {
    return static_cast<T>(value);
}

template<typename T, typename U>
T add(T a, U b) {
    return a + static_cast<T>(b);
}

int main() {
    // Explicit type specification
    int intValue = convert<int>(3.14);        // T = int
    char charValue = convert<char>(65.7);     // T = char
    
    std::cout << "Converted to int: " << intValue << std::endl;      // 3
    std::cout << "Converted to char: " << charValue << std::endl;    // A
    
    // Multiple template parameters
    int result = add<int, double>(5, 3.14);   // T = int, U = double
    std::cout << "5 + 3.14 = " << result << std::endl;              // 8
    
    return 0;
}
```

### Function Templates with Non-Type Parameters:

```cpp
#include <iostream>
#include <array>

// Template with both type and non-type parameters
template<typename T, size_t N>
void printArray(const std::array<T, N>& arr) {
    std::cout << "Array of " << N << " elements: ";
    for (const auto& elem : arr) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

template<int N>
int power(int base) {
    int result = 1;
    for (int i = 0; i < N; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    std::array<int, 5> intArr = {1, 2, 3, 4, 5};
    std::array<double, 3> doubleArr = {1.1, 2.2, 3.3};
    
    printArray(intArr);     // T = int, N = 5
    printArray(doubleArr);  // T = double, N = 3
    
    std::cout << "2^3 = " << power<3>(2) << std::endl;  // N = 3
    std::cout << "5^4 = " << power<4>(5) << std::endl;  // N = 4
    
    return 0;
}
```

## Class Templates

**Class templates** create classes that can handle different data types, making them incredibly flexible and reusable.

### Basic Syntax:
```cpp
template<typename T>
class ClassName {
    // Members using T
};
```

### Simple Container Example:

```cpp
#include <iostream>
#include <string>

template<typename T>
class MyContainer {
private:
    T element;
    
public:
    MyContainer(const T& elem) : element(elem) {}
    
    T getElement() const { 
        return element; 
    }
    
    void setElement(const T& elem) { 
        element = elem; 
    }
    
    void display() const {
        std::cout << "Container holds: " << element << std::endl;
    }
};

int main() {
    // Instantiate with different types
    MyContainer<int> intContainer(42);
    MyContainer<std::string> stringContainer("Hello Templates");
    MyContainer<double> doubleContainer(3.14159);
    
    intContainer.display();
    stringContainer.display();
    doubleContainer.display();
    
    // Modify values
    intContainer.setElement(100);
    stringContainer.setElement("Updated string");
    
    std::cout << "\nAfter updates:" << std::endl;
    intContainer.display();
    stringContainer.display();
    
    return 0;
}
```

### More Advanced Class Template:

```cpp
#include <iostream>
#include <vector>
#include <stdexcept>

template<typename T>
class SimpleVector {
private:
    std::vector<T> data;
    
public:
    // Constructor
    SimpleVector() = default;
    SimpleVector(size_t size) : data(size) {}
    SimpleVector(size_t size, const T& value) : data(size, value) {}
    
    // Add element
    void push_back(const T& value) {
        data.push_back(value);
    }
    
    // Access element
    T& operator[](size_t index) {
        return data[index];
    }
    
    const T& operator[](size_t index) const {
        return data[index];
    }
    
    // Safe access with bounds checking
    T& at(size_t index) {
        if (index >= data.size()) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }
    
    // Size and capacity
    size_t size() const { return data.size(); }
    bool empty() const { return data.empty(); }
    
    // Iterator support
    typename std::vector<T>::iterator begin() { return data.begin(); }
    typename std::vector<T>::iterator end() { return data.end(); }
    typename std::vector<T>::const_iterator begin() const { return data.begin(); }
    typename std::vector<T>::const_iterator end() const { return data.end(); }
    
    // Display all elements
    void display() const {
        std::cout << "[";
        for (size_t i = 0; i < data.size(); ++i) {
            std::cout << data[i];
            if (i < data.size() - 1) std::cout << ", ";
        }
        std::cout << "]" << std::endl;
    }
};

int main() {
    // Create vectors of different types
    SimpleVector<int> intVec;
    SimpleVector<std::string> stringVec;
    SimpleVector<double> doubleVec(3, 1.5);  // 3 elements, all 1.5
    
    // Add elements to int vector
    intVec.push_back(10);
    intVec.push_back(20);
    intVec.push_back(30);
    
    // Add elements to string vector
    stringVec.push_back("First");
    stringVec.push_back("Second");
    stringVec.push_back("Third");
    
    // Display vectors
    std::cout << "Int vector: ";
    intVec.display();
    
    std::cout << "String vector: ";
    stringVec.display();
    
    std::cout << "Double vector: ";
    doubleVec.display();
    
    // Access elements
    std::cout << "\nAccessing elements:" << std::endl;
    std::cout << "intVec[1] = " << intVec[1] << std::endl;
    std::cout << "stringVec[0] = " << stringVec[0] << std::endl;
    
    // Range-based for loop (thanks to iterators)
    std::cout << "\nUsing range-based for loop on intVec: ";
    for (const auto& value : intVec) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
```

## Template Specialization

Sometimes you need different behavior for specific types:

```cpp
#include <iostream>
#include <string>

// Primary template
template<typename T>
class Printer {
public:
    void print(const T& value) {
        std::cout << "Generic: " << value << std::endl;
    }
};

// Specialization for strings
template<>
class Printer<std::string> {
public:
    void print(const std::string& value) {
        std::cout << "String: \"" << value << "\"" << std::endl;
    }
};

// Specialization for bool
template<>
class Printer<bool> {
public:
    void print(const bool& value) {
        std::cout << "Boolean: " << (value ? "true" : "false") << std::endl;
    }
};

int main() {
    Printer<int> intPrinter;
    Printer<std::string> stringPrinter;
    Printer<bool> boolPrinter;
    Printer<double> doublePrinter;
    
    intPrinter.print(42);                    // Uses generic
    stringPrinter.print("Hello World");     // Uses string specialization
    boolPrinter.print(true);                // Uses bool specialization
    doublePrinter.print(3.14);              // Uses generic
    
    return 0;
}
```

## .tpp Files

Due to how templates are instantiated, **template implementations must be visible to the compiler** when they're used. The `.tpp` (template implementation) file pattern helps organize template code.

### Why .tpp Files?
- **Template instantiation**: Compiler needs full template definition to generate code
- **Organization**: Keeps interface (`.hpp`) and implementation (`.tpp`) separate  
- **Readability**: Cleaner header files, detailed implementations separate

### File Organization Pattern:

**MyContainer.hpp** (Declaration):
```cpp
#ifndef MYCONTAINER_HPP
#define MYCONTAINER_HPP

#include <iostream>

template<typename T>
class MyContainer {
private:
    T* data;
    size_t capacity;
    size_t count;
    
public:
    MyContainer(size_t cap = 10);
    ~MyContainer();
    
    void add(const T& item);
    T& get(size_t index);
    const T& get(size_t index) const;
    size_t size() const;
    void display() const;
};

#include "MyContainer.tpp"  // Include implementation

#endif
```

**MyContainer.tpp** (Implementation):
```cpp
#include "MyContainer.hpp"

template<typename T>
MyContainer<T>::MyContainer(size_t cap) : capacity(cap), count(0) {
    data = new T[capacity];
    std::cout << "Container created with capacity " << capacity << std::endl;
}

template<typename T>
MyContainer<T>::~MyContainer() {
    delete[] data;
    std::cout << "Container destroyed" << std::endl;
}

template<typename T>
void MyContainer<T>::add(const T& item) {
    if (count < capacity) {
        data[count++] = item;
    } else {
        std::cout << "Container is full!" << std::endl;
    }
}

template<typename T>
T& MyContainer<T>::get(size_t index) {
    if (index >= count) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

template<typename T>
const T& MyContainer<T>::get(size_t index) const {
    if (index >= count) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

template<typename T>
size_t MyContainer<T>::size() const {
    return count;
}

template<typename T>
void MyContainer<T>::display() const {
    std::cout << "Container contents: ";
    for (size_t i = 0; i < count; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}
```

**main.cpp** (Usage):
```cpp
#include <iostream>
#include "MyContainer.hpp"

int main() {
    // The compiler will instantiate MyContainer<int> and MyContainer<std::string>
    MyContainer<int> intContainer(5);
    MyContainer<std::string> stringContainer(3);
    
    // Add elements
    intContainer.add(10);
    intContainer.add(20);
    intContainer.add(30);
    
    stringContainer.add("First");
    stringContainer.add("Second");
    
    // Display containers
    intContainer.display();
    stringContainer.display();
    
    // Access elements
    std::cout << "First int: " << intContainer.get(0) << std::endl;
    std::cout << "Second string: " << stringContainer.get(1) << std::endl;
    
    return 0;
}
```

## Template Best Practices

### 1. Keep Templates Simple
```cpp
// GOOD: Simple, clear template
template<typename T>
T add(const T& a, const T& b) {
    return a + b;
}

// AVOID: Overly complex templates that are hard to understand
template<typename T, typename U, typename V, int N, bool Flag>
class ComplexTemplate { /* ... */ };
```

### 2. Use Meaningful Names
```cpp
// BAD: Unclear names
template<typename X, typename Y>
class Thing { /* ... */ };

// GOOD: Descriptive names
template<typename Key, typename Value>
class Map { /* ... */ };
```



## Key Concepts Summary

### Templates Fundamentals
- **Generic programming**: Write code once, use with multiple types
- **Compile-time**: Templates resolved during compilation, no runtime overhead
- **Type safety**: Compiler ensures correct type usage

### Function Templates
- Use `template<typename T>` to create generic functions
- **Type deduction**: Compiler can automatically determine types
- **Explicit instantiation**: Can specify types manually when needed

### Class Templates  
- Create flexible classes that work with different data types
- Must specify type when creating instances: `MyClass<int> obj`
- Can have multiple template parameters

### Template Organization
- **`.tpp` files**: Separate implementation for better organization
- Template code must be visible during compilation
- Include `.tpp` at end of header file

### Best Practices
- Keep templates simple and readable
- Use meaningful parameter names
- Don't overuse - sometimes regular functions/classes are better

---

*Templates are powerful tools that make C++ code more flexible and reusable. Master them to write elegant, efficient code that works with any data type!*

