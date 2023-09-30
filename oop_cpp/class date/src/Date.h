#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
public:
    // Constructors
    Date(int year, int month, int day);

    // Getters
    int getYear() const;
    int getMonth() const;
    int getDay() const;

    // Setters
    void setYear(int year);
    void setMonth(int month);
    void setDay(int day);

    // Other methods
    void setDate(int year, int month, int day);
    std::string toString() const;

private:
    int year, month, day;
};

#endif // DATE_H
