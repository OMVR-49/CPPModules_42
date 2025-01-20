#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

#include <string>
#include <iostream>
#include <cstdlib>     // for strtod
#include <limits>       // for INT_MAX, INT_MIN
#include <climits>       // for CHAR_MAX, CHAR_MIN
#include <cmath>       // for std::isnan, std::floor
#include <cctype>      // for std::isalpha, std::isdigit

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