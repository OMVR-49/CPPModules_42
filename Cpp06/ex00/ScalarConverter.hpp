#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

#include <string>
#include <iostream>
#include <exception>

class ScalarConverter
{
    private:
    // OCCF:
        ScalarConverter();
        ScalarConverter (const ScalarConverter &copy);
        ScalarConverter& operator=(const ScalarConverter &rhs);
        ~ScalarConverter();
    public:
    // method:
        static void convert (const std::string &input);
};

#endif