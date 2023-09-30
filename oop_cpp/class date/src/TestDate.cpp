#include "Date.h"
#include <iostream>

int main() {
    // Test constructor and toString()
    Date d1(2020, 2, 8);
    std::cout << d1.toString() << std::endl;

    // Test Setters and Getters
    d1.setYear(2012);
    d1.setMonth(12);
    d1.setDay(23);
    std::cout << d1.toString() << std::endl;
    std::cout << "Year is: " << d1.getYear() << std::endl;
    std::cout << "Month is: " << d1.getMonth() << std::endl;
    std::cout << "Day is: " << d1.getDay() << std::endl;

    // Test setDate()
    d1.setDate(2988, 1, 2);
    std::cout << d1.toString() << std::endl;

    return 0;
}
