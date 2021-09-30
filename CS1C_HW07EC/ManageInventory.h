#ifndef ManageInventory_H
#define ManageInventory_H
/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : HW 07 - EXTRA CREDIT
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 9/28/2021
****************************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
//using namespace std;

struct Item
{
    std::string name;
    int quantity;
    float cost;
};

const int MAX_SIZE = 50; 
const int purchase_size = 4;

    class ManageInventory
    {
    public:
        // === Constructors, uses MIL =======================
        ManageInventory() : count{0}, 
                            p_pInventoryItems{new Item*[size]}{}
        ManageInventory(int size) : size{size}, 
                                    count{0}, 
                                    p_pInventoryItems{new Item*[size]}{}


        // === Default destructor ===========================
        ~ManageInventory();

        /***************************************
         *  addItem: 
	         Adds new Item object. 
        ***************************************/
        void addItem(std::string name, int quantity, float cost); 

        /***************************************
         *  printInventory: 
	         Prints a list of the items in inventory. 
        ***************************************/
        void printInventory() const;

    private:
        int size{MAX_SIZE};             // max size of inventory available
        int count;                      // counting amount of items in inventory
        Item ** p_pInventoryItems;      // declaring a pointer to a pointer to p_pInventoryItems (why?) <- the * is not an operator
                                        // it's a declaration. Tells the compiler you want p_pInventoryItems to be a pointer for Item. (i think?) 

    };

#endif