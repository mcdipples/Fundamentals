#ifndef Programmer_H
#define Programmer_H

#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

class Programmer : public Employee
{
    public: 
        Programmer(); // default constructor
        Programmer(int depNum, string supervisor, string name, int ID, string phone, int age, char gender, string title, string salary, int month, int day, int year, double percentSal, string cpp, string java); // overload constructor
        ~Programmer(); // destructor

        //--------------------------------
        // === Mutator Functions ====================================
        // sets values passed as arguments from main as object's data values
        //--------------------------------
        void setProgrammer(int depNum, string supervisor, double percentSal, string cpp, string java);
        void setTotal(string name, int ID, string phone, int age, char gender, string title, string salary, int month, int day, int year);
        void setDepNum(int depNum);
        void setSupervisor(string supervisor);
        void setRaise(double percentSal);
        void setCpp(string cpp);
        void setJava(string java);

        void print();
        // *** need to make print function ***

    private:
        int depNum;
        string supervisor;
        double percentSal;
        string cpp;
        string java;
        Employee ob;
};

#endif