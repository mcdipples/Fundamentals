/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : HW 05
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 9/23/2021
****************************************************************************************/

/****************************************************************************************
Homework Questions:
_________________________________________________________________________________________
1.) What is the STL? What is a vector?
    - The STL is the "Standard Template Library" which essentially is a set of template
      classes that provide common programming data structures and functions. This can
      include stacks, arrays, etc. 
    - A vector is a container/container class. A vector specifically is a sequence container, 
      which implements data structures that can be accessed in a sequential manner. A vector
      works like a dynamic array, and includes certain functions that can be used to manupulate
      and work with a vector. 
2.)  Which vector operations change the size of a vector after its construction?
    - resize(n) – Resizes the container so that it contains ‘n’ elements.
    - shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys 
      all elements beyond the capacity.
    - emplace()- Extends the container by inserting new element at position
3.)  What is the STL array container and how does it differ from the built-in array and from a vector?
    - The STL array container is similar to a vector, it needs its header included in the program
      and has its own functions we can use to manipulate or use the array. The built-in arrays
      are simply just a collection of like data items stored in indices. 
4.) How does the vector member function resize() differ from reserve()?
    - reserve() requests that the vector capacity be at LEAST n elements, meaning it can allocate
      more capacoty, but cannot deallocate capacity. While resize() can grow AND shrink the capacity. 
5.) What should begin() and end() do for a container?
    - begin() – returns a bidirectional iterator pointing to the first element.
    - end() – returns a bidirectional iterator pointing to next to last element.
6.) Give an example of using the vector push_back() modifier.
    - Input: vector = {1, 2, 3, 4)};
                    vector.push_back(5);
      Output: 1, 2, 3, 4, 5. 
****************************************************************************************/
#include "Lotto.h"

int main()
{
    // Winners - vector that holds 6 winning cards randomly chosen 
    vector<int> winners;

    // 6 cards from a deck of 51 will be randomly selected and assigned
    // to 'winners' 
    winners = Lotto(51,6); 

    // Outputting the contents of winners to the console
    cout << "Winning numbers are: \n";

    for (int i = 0; i < 6; i++)
    cout << winners[i] << endl; 

return 0;
}
