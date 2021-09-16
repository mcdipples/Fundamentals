#ifndef Employee_H
#define Employee_H

#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class Employee
{
    public:
    // Public functions of the class, can be used by including this 
    // class within the program.
        //--------------------------------
        // === Constructors/Destructors ============================
        //--------------------------------
        Employee();     // default constructor
        Employee(string name, int ID, string phone, int age, char gender, string title, string salary, int month, int day, int year); // overloaded constructor 
        ~Employee();    // destructor

        //--------------------------------
        // === Mutator Functions ====================================
        // sets values passed as arguments from main as object's data values
        //--------------------------------
        void setEmployee(string name, int ID, string phone, int age, char gender, string title, string salary, int month, int day, int year);
        void setName(string name);
        void setID(int ID);
        void setPhone(string phone);
        void setAge(int age);
        void setGender(char gender);
        void setTitle(string title);
        void setSalary(string salary);
        void setHireDate(int month, int day, int year);

        //--------------------------------
        // === Accessor Functions ===================================
        // Takes data values from class and uses them to perform operations
        //--------------------------------
        void print();
    
    protected:
    // Protected data members: accessed by the class' public functions and derived classes. 
        string name;
        string title; 
        string phone;
        string salary;
        char gender;
        int ID;
        int age;
        Date hireDate;  // Date object used as a protected data member so 
                        // we can use the setDate function in order to 
                        // set the month, day, and year values to the objects
                        // that require a date (i.e. hire date.) 
                        
};

#endif 