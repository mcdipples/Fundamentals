#include "Date.h"
//--------------------------------

// === Default constructor =============================
Date::Date()
{
    month = 0;
    day = 0; 
    year = 0;
} 
//--------------------------------
// === Overloaded constructor ==========================
// Values passed as arguments from main() are assigned to an object's data members
//--------------------------------
Date::Date(int month, int day, int year)
{
    this->month = month;
    this->day = day;
    this->year = year;
}
//--------------------------------
// === Destructor ======================================
//--------------------------------
Date::~Date(){};
//--------------------------------

void Date::setDate(int month, int day, int year)
{
    this->month = month;
    this->day = day;
    this->year = year; 
}

void Date::printDate()
{
    cout << month << "/" << day << "/" << year;
}