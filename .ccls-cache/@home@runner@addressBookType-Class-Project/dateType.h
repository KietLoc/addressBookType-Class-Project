#pragma once

#include <iostream>
using namespace std;

class dateType 
{

    public:
        // Default Constructor
        //dateType() : dMonth(1), dDay(1), dYear(1900) {};


        // Constructor with parameters
        dateType(int month = 1, int day = 1, int year = 1900) :
        dMonth(month), dDay(day), dYear(year) {};
    
        // Setters
        //void setDate(int month, int day, int year);
        void setDate(int month, int day, int year) 
        {
            if (month < 1 || month > 12) {
                cout << "Invalid month. Month must be between 1 and 12.\n";
                return;
            }

            if (year < 1900) {
                cout << "Invalid year. Year must be greater than or equal to 1900.\n";
                return;
            }

            if (day < 1 || day > getDaysinMonth(month, year)) {
                cout << "Invalid day for the given month and year.\n";
                return;
            }

            dMonth = month;
            dDay = day;
            dYear = year;
        }
    
        // Getters
        int getDay() const { return dDay; }
        int getMonth() const { return dMonth; }
        int getYear() const { return dYear; }
    
        // Additional methods
        //int getDaysinMonth(int month, int year) const;
        int getDaysinMonth(int month, int year) const 
        {
            if (month == 2) {
                if (isLeapYear(year)) {
                    return 29;
                } else {
                    return 28;
                }
            } else if (month == 4 || month == 6 || month == 9 || month == 11) {
                return 30;
            } else {
                return 31;
            }
        }

        bool isLeapYear(int year) const 
        {
            return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
        }

        void print() const 
        {
            cout << dMonth << "/" << dDay << "/" << dYear;
        }


    
    private:
    int dMonth;
    int dDay;
    int dYear;

};