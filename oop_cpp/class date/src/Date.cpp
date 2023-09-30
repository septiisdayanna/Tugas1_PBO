#include "Date.h"
#include <iomanip>

// Constructor
Date::Date(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}

// Getters
int Date::getYear() const {
    return year;
}

int Date::getMonth() const {
    return month;
}

int Date::getDay() const {
    return day;
}

// Setters
void Date::setYear(int year) {
    this->year = year;
}

void Date::setMonth(int month) {
    this->month = month;
}

void Date::setDay(int day) {
    this->day = day;
}

// Other methods
void Date::setDate(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}

std::string Date::toString() const {
    // Use stringstream to format the date
    std::stringstream ss;
    ss << std::setw(2) << std::setfill('0') << month << "/"
       << std::setw(2) << std::setfill('0') << day << "/"
       << std::setw(4) << year;
    return ss.str();
}
