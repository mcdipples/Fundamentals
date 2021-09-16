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

/****************************************************************************************
* void Date::setDate:
* _______________________________________________________________________________________
* Pull values passed as arguments from main and assign them to the object's data members
* This function will not quite be used on its own; it will be used within the 'set' 
* functions of classes that include objects from this class. 
* _______________________________________________________________________________________
* 
****************************************************************************************/
void Date::setDate(int month, int day, int year)
{
    this->month = month;
    this->day = day;
    this->year = year; 
}

/****************************************************************************************
* void Date::printDate:
* _______________________________________________________________________________________
* Print out the object's data members to the console. 
* This function will not quite be used on its own; it will be used within the 'print' 
* functions of classes that include objects from this class. 
* _______________________________________________________________________________________
* 
****************************************************************************************/
void Date::printDate()
{
    cout << month << "/" << day << "/" << year;
}