#ifndef Date_H
#define Date_H

#include <iostream>
using namespace std; 

class Date
{
    public:
        //--------------------------------
        // === Constructors/Destructors ============================
        //--------------------------------
        Date();                             // default constructor
        Date(int month, int day, int year); // overload constructor
        ~Date();                            // destructor

        //--------------------------------
        // === Mutator Functions ====================================
        // sets values passed as arguments from main as object's data values
        //--------------------------------
        void setDate(int month, int day, int year);

        //--------------------------------
        // === Accessor Functions ===================================
        // Takes data values from class and uses them to perform operations
        //--------------------------------
        void printDate();
   
    private:
     int month;
     int day; 
        int year; 

};

#endif