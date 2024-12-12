#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

#include <string>
#include <iostream>

class ScalarConverter
{
    private:

    public:
    // OCCF:
    ScalarConverter();
    ScalarConverter (const ScalarConverter &copy);
    ScalarConverter& operator=(const ScalarConverter &rhs);
    ~ScalarConverter();
    // method:
    static void convert (std::string input);
};

#endif