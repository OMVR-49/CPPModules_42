#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>

class BitcoinExchange {
    private:
        std::map<std::string, double> data_;  // date → rate

        // Helpers for date parsing & validation
        static bool isLeapYear(int year);
        static bool isValidDate(int y, int m, int d);
        static bool parseDate(const std::string& s, int& y, int& m, int& d);

        // Trim leading/trailing whitespace
        static std::string trim(const std::string& s);

        // Find the rate for 'date' or the closest earlier date
        double getRate(const std::string& date) const;
    public:
        // OCCF:
            BitcoinExchange();
            ~BitcoinExchange();
            BitcoinExchange(const BitcoinExchange& other);
            BitcoinExchange& operator=(const BitcoinExchange& other);

        //Ex requerements
            // Load the CSV database: "date,rate" with header on first line
            void loadDatabase(const std::string& dbFile);

            // Process an input file of lines "YYYY-MM-DD | value"
            void processFile(const std::string& inFile) const;
};

#endif