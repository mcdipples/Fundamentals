#ifndef SoftwareArchitect_h
#define SoftwareArchitect_h

#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

class Software : public Employee
{
    public:
    // Public functions of the class, can be used by including this 
    // class within the program.
        //--------------------------------
        // === Constructors/Destructors ============================
        //--------------------------------
        Software(); // defualt constructor
        Software(string name, int ID, string phone, int age, char gender, string title, string salary, int month, int day, int year, int depNum, string supervisor, double percentSal, int years); // overloaded constructor
        ~Software(); // destructor

        //--------------------------------
        // === Mutator Functions ====================================
        // sets values passed as arguments from main as object's data values
        //--------------------------------
        void setSoftware(int depNum, string supervisor, double percentSal, int years);
        void setTotal(string name, int ID, string phone, int age, char gender, string title, string salary, int month, int day, int year);
        void setDepNum(int depNum);
        void setSupervisor(string supervisor);
        void setPercentSal(double percentSal);
        void setYears(int years);

        //--------------------------------
        // === Accessor Functions ===================================
        // Takes data values from class and uses them to perform operations
        //--------------------------------
        void print();

    private:
    // Private data members: accessed by the class' public functions
        int depNum;
        string supervisor;
        double percentSal;
        int years;
        Employee ob;    // Employee object used as a private data member so 
                        // we can use the setEmployee function in order to 
                        // set Employee values to the Software Architect object's 
                        // data members.
};

#endif