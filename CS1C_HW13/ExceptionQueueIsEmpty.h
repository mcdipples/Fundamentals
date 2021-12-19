/****************************************************************************************
 * AUTHOR	  : Sierra Martin
 * STUDENT ID : 1130942
 * HW NAME    : Exceptions
 * CLASS      : CS1C
 * SECTION    : T-TH 12:30p - 2:50p
 * DUE DATE   : 11/23
 * DESCRIPTION: Associated file.
****************************************************************************************/
#ifndef CS1C_HW13_EXCEPTIONQUEUEISEMPTY_H
#define CS1C_HW13_EXCEPTIONQUEUEISEMPTY_H
#include <exception>
#include <string>


class ExceptionQueueIsEmpty : public std::exception{
public:
    ExceptionQueueIsEmpty()
    {
        errmsg = "Queue is empty. Cannot remove from queue!\n";
    }

   explicit ExceptionQueueIsEmpty(const std::string& msg) : errmsg(msg) {}

   const std::string what() noexcept
   {
        return errmsg;
   }

private:
    std::string errmsg;
};


#endif //CS1C_HW13_EXCEPTIONQUEUEISEMPTY_H
