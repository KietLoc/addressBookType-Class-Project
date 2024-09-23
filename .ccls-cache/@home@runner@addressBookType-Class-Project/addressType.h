#pragma once

#include <iostream>
using namespace std;

class dateType 
{

    public:
        // Constructor
        dateType(int month = 1, int day = 1, int year = 1900);
    
        // Setters
        void setDate(int month, int day, int year);
    
        // Getters
        int getDay() const;
        int getMonth() const;
        int getYear() const;
    
        // Additional methods
        int getDaysinMonth(int month, int year) const;
        void print() const;
        bool isLeapYear(int year) const;
    
    private:
    int dMonth;
    int dDay;
    int dYear;

};