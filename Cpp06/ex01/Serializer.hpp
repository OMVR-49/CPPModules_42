#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <iostream>
#include <stdint.h>

struct Data {
       int value;
   };

class Serializer
{
    private:
    // OCCF:
        Serializer();
        Serializer (const Serializer &copy);
        Serializer& operator=(const Serializer &rhs);
        ~Serializer();
    public:
    // Method:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif