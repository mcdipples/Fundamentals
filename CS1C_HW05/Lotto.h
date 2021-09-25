#ifndef Lotto_h
#define Lotto_h

#include <vector>
#include <algorithm>
#include <iostream>
#include <random>
#include <chrono>
using namespace std;


/****************************************************************************************
 * Lotto
 * _______________________________________________________________________________________
 * This function takes two arguments. 'i' being the numbers we can draw from, 'j' being
 * the amount of cards we will draw to become winners. Creates a vector that holds all 
 * possible values, then shuffles, then uses the beginning of the shuffled vector to 
 * obtain 6 values.
 * _______________________________________________________________________________________
 * Returns 6 values within a vector. 
 ****************************************************************************************/
vector<int> Lotto(int i, int j);

#endif

