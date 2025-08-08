# CPPModules_42

[MY AWESOME NOTION FOR BETTER UI](https://www.notion.so/CPP-Modules-1337-0915128b4ffe4597a16ecd5d72919486)

![9425017](https://github.com/OMVR-49/CPPModules_42/assets/111209064/cb2c4c71-4ddc-4e86-b786-ec534b1461b0)

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

- `atoi()` function with strings in C++
- `string.length()` vs. `string.size()`
- `std::cin.getline()` vs. `std::cin`

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
