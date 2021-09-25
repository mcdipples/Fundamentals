/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : HW 06
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 9/23/2021
****************************************************************************************/
#include "Reverse.h"
int main()
{
    // Declaring our variables 
    int start;
    int end;
    string alphabet;

    alphabet = "abcdefghijklmnopqrstuvwxyz";

    // === Inputting the start and end point to reverse ====================
    cout << "Enter the beginning point and the end point:\n";
    cin >> start >> end;

    // === Calling the reverse function and outputting the result ==========
    cout << "String is reversed from " << start << " to " << end << endl;
    reverse(alphabet, start, end);
    cout << alphabet << endl;

    alphabet = "abcdefghijklmnopqrstuvwxyz";

    // === Inputting the start and end point to reverse ====================
    cout << "Enter the beginning point and the end point:\n";
    cin >> start >> end;

    // === Calling the reverse function and outputting the result ==========
    cout << "String is reversed from " << start << " to " << end << endl;
    reverse(alphabet, start, end);
    cout << alphabet << endl;
   
    alphabet = "abcdefghijklmnopqrstuvwxyz";

    // === Calling the reverse function and outputting the result ==========
    cout << "Reversing the alphabet...." << endl;
    start = 0;
    end = 25;
    cout << "Here is the reversed alphabet:\n\n";
    reverse(alphabet, start, end);
    cout << alphabet << endl;
   
   return 0;
}