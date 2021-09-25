#include "Lotto.h"


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
vector<int> Lotto(int i, int j)
{
    vector<int> list;       // Vector to produce a list from 1 to 51 to choose from 
    vector<int> random;     // Vector to choose 6 random numbers from list. 
    random.reserve(j);      // Reserves a space of 6 elements to contain ints

    // Inputting values into 1-51 'list'
    for (int x = 0; x < i; x++)
    {
        list.push_back(x);
    }

    // Randomizing the 'list' vector
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    shuffle(list.begin(), list.end(), default_random_engine(seed));

    // Inputting the first 6 values that were randomized from the list vector. 
    // Inserts values from the first value at [0] to [5]
    for (int y = 0; y < j; y++)
    {
      random.push_back(list[y]);
    }

    // Sort in ascending order and return
    sort(random.begin(), random.end());
    return random; 
    }


