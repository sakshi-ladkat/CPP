#include "main.hpp"
#include <iostream>
#include <iomanip>
#include <string>

bool SymmetricDateChecker::isSymmetric(int day, int month, int year) {
    // Format as DDMMYYYY string with leading zeros
    std::string dateStr = 
        (day < 10 ? "0" : "") + std::to_string(day) +
        (month < 10 ? "0" : "") + std::to_string(month) +
        std::to_string(year); // Full 4-digit year
    
    // Check if it's a palindrome
    return dateStr == std::string(dateStr.rbegin(), dateStr.rend());
}

void SymmetricDateChecker::findDates() {
    for (int year = 2000; year <= 2099; year++) {
        for (int month = 1; month <= 12; month++) {
            // Determine days in month
            int daysInMonth;
            if (month == 2) {
                // February (check for leap year)
                daysInMonth = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
            } else if (month == 4 || month == 6 || month == 9 || month == 11) {
                // April, June, September, November
                daysInMonth = 30;
            } else {
                // All other months
                daysInMonth = 31;
            }
            
            // Check each day
            for (int day = 1; day <= daysInMonth; day++) {
                if (isSymmetric(day, month, year)) {
                    // Print in DD-MM-YYYY format
                    std::cout << std::setw(2) << std::setfill('0') << day << "-"
                              << std::setw(2) << month << "-" << year << "\n";
                }
            }
        }
    }
}