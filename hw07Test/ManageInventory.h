//
// Created by marti on 9/29/2021.
//

#ifndef HW07TEST_MANAGEINVENTORY_H
#define HW07TEST_MANAGEINVENTORY_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Item
        {
    string name;
    int quantity;
    float cost;
        };

const int MAX_SIZE = 50;

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
            void addItem(string name, int quantity, float cost);

            /***************************************
             *  printInventory:
                 Prints a list of the items in inventory.
            ***************************************/
            void printInventory() const;

            /***************************************
             *  purchase:
                 Carries out steps for a user purchase.
            ***************************************/
            void purchase();

        private:
            int size{MAX_SIZE};
            int count;
            Item ** p_pInventoryItems;      // declaring a pointer to a pointer to p_pInventoryItems (why?) <- the * is not an operator
            // it's a declaration. Tells the compiler you want p_pInventoryItems to be a pointer for Item. (i think?)
        };
#endif //HW07TEST_MANAGEINVENTORY_H
