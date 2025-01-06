#include "ScalarConverter.hpp"

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

void ScalarConverter::convert (const std::string &input)
{
    // Special cases:
    static const std::string special[] = {"nan", "nanf", "+inf", "+inff", "-inf", "-inff"};
    
    for (int i = 0; i < 6; i++) {
        if (input == special[i]) {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: " << (i % 2 ? special[i] : special[i] + "f") << std::endl;
            std::cout << "double: " << (i % 2 ? special[i].substr(0, special[i].length() - 1) : special[i]) << std::endl;
            return;
        }
    } 

    // Single char:
    if (input.length() == 1 && std::isalpha(input[0]))
    {
        char c = input[0];
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
        return;
    }

    // Numeric conversion:
    try {
        double value;
        std::string tmp = input;
        if (input[input.length() - 1] == 'f')
            tmp = input.substr(0, input.length() - 1);
        value = std::strtod(tmp.c_str(), NULL);

        // Print char
        if (value >= CHAR_MIN && value <= CHAR_MAX && std::isprint(static_cast<int>(value)))
            std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;

        // Print int
        if (value > INT_MAX || value < INT_MIN || std::isnan(value))
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(value) << std::endl;

        // Print float and double with precision handling
        bool isWholeNumber = (value == std::floor(value));
        std::cout << "float: " << value << (isWholeNumber ? ".0f" : "f") << std::endl;
        std::cout << "double: " << value << (isWholeNumber ? ".0" : "") << std::endl;
    }
    catch (...) {
        std::cout << "Error: Invalid input" << std::endl;
    }
}
