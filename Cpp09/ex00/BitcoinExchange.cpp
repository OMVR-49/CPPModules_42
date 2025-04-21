// ex00/BitcoinExchange.cpp
#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <cctype>

//OCCF:
BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
    *this = other;
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
    if (this != &other) {
        data_ = other.data_;
    }
    return *this;
}

//Ex requerements:

bool BitcoinExchange::isLeapYear(int y) {
    return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
}

bool BitcoinExchange::isValidDate(int y, int m, int d) {
    if (y < 0 || m < 1 || m > 12 || d < 1) return false;
    static const int mdays[12] = {
        31,28,31,30,31,30,31,31,30,31,30,31
    };
    int maxd = mdays[m - 1];
    if (m == 2 && isLeapYear(y)) maxd = 29;
    return d <= maxd;
}

bool BitcoinExchange::parseDate(const std::string& s, int& y, int& m, int& d) {
    if (s.size() != 10 || s[4] != '-' || s[7] != '-') return false;
    // ensure all other chars are digits
    for (size_t i = 0; i < s.size(); ++i) {
        if (i == 4 || i == 7) continue;
        if (!std::isdigit(s[i])) return false;
    }
    y = std::atoi(s.substr(0,4).c_str());
    m = std::atoi(s.substr(5,2).c_str());
    d = std::atoi(s.substr(8,2).c_str());
    return isValidDate(y,m,d);
}

std::string BitcoinExchange::trim(const std::string& s) {
    size_t start = s.find_first_not_of(" \t");
    if (start == std::string::npos) return "";
    size_t end = s.find_last_not_of(" \t");
    return s.substr(start, end - start + 1);
}

void BitcoinExchange::loadDatabase(const std::string& dbFile) {
    std::ifstream file(dbFile.c_str());
    if (!file.is_open()) {
        std::cout << "Error: could not open database file." << std::endl;
        std::exit(1);
    }
    std::string line;
    // skip header
    std::getline(file, line);

    while (std::getline(file, line)) {
        if (line.empty()) continue;
        std::stringstream ss(line);
        std::string date, rateStr;
        if (!std::getline(ss, date, ',') || !std::getline(ss, rateStr))
            continue;
        date = trim(date);
        rateStr = trim(rateStr);

        int y, m, d;
        if (!parseDate(date, y, m, d))
            continue;

        double rate = std::atof(rateStr.c_str());
        data_[date] = rate;
    }
}

double BitcoinExchange::getRate(const std::string& date) const {
    std::map<std::string,double>::const_iterator it = data_.lower_bound(date);
    if (it != data_.end() && it->first == date)
        return it->second;
    if (it == data_.begin())
        throw std::out_of_range("no earlier date");
    --it;
    return it->second;
}

void BitcoinExchange::processFile(const std::string& inFile) const {
    std::ifstream file(inFile.c_str());
    if (!file.is_open()) {
        std::cout << "Error: could not open file." << std::endl;
        std::exit(1);
    }
    std::string line;
    // skip header
    std::getline(file, line);

    while (std::getline(file, line)) {
        if (line.empty()) continue;
        std::size_t sep = line.find('|');
        if (sep == std::string::npos) {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }

        std::string dateStr  = trim(line.substr(0, sep));
        std::string valueStr = trim(line.substr(sep + 1));

        int y, m, d;
        if (!parseDate(dateStr, y, m, d)) {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }

        char* endPtr;
        double value = std::strtod(valueStr.c_str(), &endPtr);
        if (*endPtr != '\0') {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }

        if (value < 0.0) {
            std::cout << "Error: not a positive number." << std::endl;
            continue;
        }
        if (value > 1000.0) {
            std::cout << "Error: too large a number." << std::endl;
            continue;
        }

        try {
            double rate   = getRate(dateStr);
            double result = value * rate;
            std::cout
                << dateStr
                << " => " << value
                << " = " << result
                << std::endl;
        }
        catch (const std::out_of_range&) {
            std::cout << "Error: no exchange rate available for this date." << std::endl;
        }
    }
}