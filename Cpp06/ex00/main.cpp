#include "ScalarConverter.hpp"

int main()
{
    ScalarConverter::convert("42");     // Converts integer literal
    ScalarConverter::convert("3.14f");  // Converts float literal
    ScalarConverter::convert("'A'");    // Converts character literal
    ScalarConverter::convert("-inf");   // Converts special numeric literal

    ScalarConverter::convert("0");
    ScalarConverter::convert("nan");
    ScalarConverter::convert("42.0f");
    ScalarConverter::convert("'c'");

}