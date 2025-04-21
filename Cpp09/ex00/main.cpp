// ex00/main.cpp
#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }
    BitcoinExchange btc;
    btc.loadDatabase("data.csv");
    btc.processFile(argv[1]);
    return 0;
}