/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : HW 07
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 9/28/2021
****************************************************************************************/
#include "ManageInventory.h"
using namespace Inventory;

/****************************************************************************************
* void ManageInventory::addItem:
* _______________________________________________________________________________________
* Uses new operator to dynamically create instances of type Item. Stores pointers to 
* invcentory items in the inventoryItems array. 
****************************************************************************************/
void ManageInventory::addItem(std::string name, int quantity, float cost)
{
    //Item* p;
    //p = new Item{name, quantity, cost};

    p_pInventoryItems[count] = new Item{name, quantity, cost};         // Next item on list is added 

    count++;
}

/****************************************************************************************
* (DESTRUCTOR) ManageInventory::~ManageInventory:
* _______________________________________________________________________________________
* Uses delete operator to remove/free the heap from allocated memory used for the 
* dynamically-allocated Item objects. 
****************************************************************************************/
ManageInventory::~ManageInventory()
{
    for (int i = 0; i < count; i++)
    {
        delete p_pInventoryItems[i];        // frees the allocated memory
    }
    delete[] p_pInventoryItems;             // frees the block of allocated memory by deleting the array 
}

ManageInventory::ManageInventory(const ManageInventory& sndInventory) : size{sndInventory.size},
                                                                      count{sndInventory.count},
                                                                      p_pInventoryItems{new Item*[sndInventory.size]}
        {
            for(int i = 0; i < count; i++)
            {
                p_pInventoryItems[i] = new Item{*sndInventory.p_pInventoryItems[i]};
            }
        }

/****************************************************************************************
* ManageInventory::printInventory:
* _______________________________________________________________________________________
* Prints the list of items within the Inventory. 
****************************************************************************************/
void ManageInventory::printInventory() const
{
    std::cout << std::left;
    std::cout << std::setw(30) << "NAME" << std::setw(10) << "COST" << std::setw(10) << "QUANTITY\n";
    std::cout << "==================================================\n";
    for (int i = 0; i < count; i++)
    {
        std::cout << std::left;
        std::cout << std::setw(30) << p_pInventoryItems[i]->name
             << std::setw(10) << p_pInventoryItems[i]->quantity << "$"
             << std::setw(7) << p_pInventoryItems[i]->cost << std::endl;
    }
}

void ManageInventory::purchase(Purchase input[], int num)
{
    int i{0};           // i counter
    int j{0};
    bool find;
    float total{0};        // total after purchase 
    float sum{0};

    for (j = 0; j < num; j++)
    {
        find = false;
        while (i < count && !find)
        {
            // === Finding item name to add to purchase ========
            if (p_pInventoryItems[i]->name == input[j].name)
            {
                find = true;
                sum = 0;
                    // current item's qty -= qty purchased
                p_pInventoryItems[i]->quantity -= input[j].quantity;
                    
                // total = quantity purchased * cost of item 
                total += float(input[j].quantity) * p_pInventoryItems[i]->cost;

                // sum of each item = quantity purchased * cost of item 
                sum += float(input[j].quantity) * p_pInventoryItems[i]->cost;
                    // ==============================
                    // Print reciept
                    // ==============================
                    std::cout << std::left;
                    std::cout << std::setw(30) << p_pInventoryItems[i]->name
                              << input[j].quantity << " @ ($"
                              << std::setw(6) << p_pInventoryItems[i]->cost << ")     $"
                              << std::setw(7) << sum << std::endl;
            }else{
                i++;
            }
        }
        if(!find)
            {
                std::cout << "Could not find "<< input[j].name << std::endl;
            }
    }
    std::cout << std::setw(57) << std::endl;
    std::cout << std::right;
    std::cout << std::setw(40) << "SUB-TOTAL:" << std::setw(8) << "$" << std::left << std::setw(7) << total << std::endl;
    std::cout << std::right;
    std::cout << std::setw(40) << "TOTAL:" << std::setw(8) << "$" << std::left << std::setw(7) << 1.0825 * total << std::endl;
    std::cout << std::right;
    std::cout << "------------------------------------------------------" << std::endl;
}


