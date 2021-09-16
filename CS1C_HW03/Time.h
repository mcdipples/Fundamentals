#ifndef Time_H
#define Time_H

#include <iostream>
using namespace std; 

class Time
{
    public:
        Time(); // default constructor
        Time(int hrs, int min, int sec); // overloaded constructor
        ~Time(); // destructor

    private:
        int hours;
        int minutes; 
        int seconds;
        
      /* enum timeZone { 
            PACIFIC,
            MOUNTAIN, 
            CENTRAL, 
            EASTERN
        };*/

};

/*
Member initializers examples:

class Sally
{
    public:
        Sally(int a, int b);
        void print();

    private:
    int regVar;
    const int constVar;
}

// in .cpp

Sally::Sally(int a, int b)
: regVar(a), constVar(b)
{
}

void Sally::print(){
    cout << "regular var is: " << regVar << " const variable is : " << constVar << endl;
}

//in main
int main()
{
    Sally so(3, 87);
    so.print();
}
*/
#endif 