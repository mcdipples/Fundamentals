#ifndef Date_H
#define Date_H

#include <iostream>
using namespace std; 

class Date
{
    /****************************************************************************************
    * friend ostream& operator << :
    * _______________________________________________________________________________________
    * Operator overload "<<" so that we can output Date object data values.  
    ****************************************************************************************/
    friend ostream& operator << (ostream& os, const Date& date);
    
    public:
    // Public functions of the class, can be used by including this 
    // class within the program. 
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
    // Private data members: accessed by the class' public functions
        int month;
        int day; 
        int year; 

};

#endif