#include "ScalarConverter.hpp"
#include <iostream>
#include <cstdlib>
#include <limits>
#include <cctype>
#include <cmath>
#include <iomanip>

// OCCF:

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) { (void)other; }

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    (void)other;
    return *this;
}

ScalarConverter::~ScalarConverter(){};

// Method:
int pseudoLiterals(const std::string& literal)
{
    double value;
    std::string floatStr, doubleStr;

    if (literal.find("inf") != std::string::npos || literal.find("nan") != std::string::npos)
    {
        value = std::strtod(literal.c_str(), NULL);
        floatStr = literal.find('f') != std::string::npos ? literal : literal + 'f';
        doubleStr = literal.find('f') != std::string::npos ? literal.substr(0, literal.size() - 1) : literal;

        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << floatStr << std::endl;
        std::cout << "double: " << doubleStr << std::endl;
        return 1;
    }
}

void ScalarConverter::convert(const std::string& literal) {
    // Handle pseudo-literals
    if (pseudoLiterals(literal))
        return;
    // Try to convert to double first (widest type)
    char* endPtr;
    double value;

    // Check if it's a single character
    if (literal.length() == 1 && !isdigit(literal[0]))
        value = static_cast<double>(literal[0]);
    else
    {
        value = std::strtod(literal.c_str(), &endPtr);
        
        // Check for invalid input or if not fully parsed (except for 'f' suffix)
        if ((*endPtr != '\0' && *endPtr != 'f') || (endPtr == literal.c_str())) {
            std::cout << "Error: Invalid literal format" << std::endl;
            return;
        }
    }

    // Print char conversion
    std::cout << "char: ";
    if (std::isnan(value) || std::isinf(value) || value > 127 || value < 0)
        std::cout << "impossible";
    else if (isprint(static_cast<int>(value)))
        std::cout << "'" << static_cast<char>(value) << "'";
    else
        std::cout << "Non displayable";
    std::cout << std::endl;

    // Print int conversion
    std::cout << "int: ";
    if (std::isnan(value) || std::isinf(value) || value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
        std::cout << "impossible";
    else
        std::cout << static_cast<int>(value);
    std::cout << std::endl;

    // Set precision for floating point output
    std::cout << std::fixed << std::setprecision(1);

    // Print float conversion
    std::cout << "float: ";
    if (value > std::numeric_limits<float>::max() || 
        value < -std::numeric_limits<float>::max())
        std::cout << "impossible";
    else
        std::cout << static_cast<float>(value) << "f";
    std::cout << std::endl;

    // Print double conversion
    std::cout << "double: " << value << std::endl;
}