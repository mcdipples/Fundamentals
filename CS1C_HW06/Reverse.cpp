/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : HW 06
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 9/23/2021
****************************************************************************************/
#include "Reverse.h"

/****************************************************************************************
 * reverse
 * _______________________________________________________________________________________
 * This function takes in a starting point and an end point, and reverses the
 * portion in between the endpoints. The process uses recursion of the reverse function.
 * _______________________________________________________________________________________
 * Returns a reversed string
 ****************************************************************************************/
void reverse(string &string, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    else
    {
        char temp;
        temp = string.at(start);
        string.at(start) = string.at(end);
        string.at(end) = temp;
        start++;
        end--;
        reverse(string, start, end);
        return;
    }
}