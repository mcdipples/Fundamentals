// Sierra Martin // CS1C Fall 2021 // HW01 //


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std; 

// SUM=0, TRIPLE=1, REVERSE=2
enum choices { SUM, TRIPLE, REVERSE };
typedef string str;

int main() {
	int n; // number we'll be outputting and using in our arrays
	int m; // remainder, mostly 
	int prod = 0;
	int sum = 0;
	int rev = 0;
	str input; 
	choices result;

	// generate random 3-digit int. 
	cout << "Random Number:\n\n";
	srand(time(NULL));
	n = rand() % 900 + 100;
	cout << endl << n;

// === Part a ===
//=====================================================================
	cout << "\n\nWould you like to:\n(0) SUM - Sum the digits\n(1) TRIPLE - Triple the digits\n(2) REVERSE - Reverse this number?\n\n";
	cin >> input;

	if (input == "SUM" || input == "sum") {
		result = SUM;
	}
	else if (input == "TRIPLE" || input == "triple") {
		result = TRIPLE;
	}
	else if (input == "REVERSE" ||input == "reverse") {
		result = REVERSE;
	}
//_______________________________________________
	switch (result)
	{
	case 0:
		while (n > 0)
		{
			m = n % 10;
			sum = sum + m;
			n = n / 10;
		}
		cout << "The sum of the three digits is: " << sum << endl;
		break;
	case 1:
		prod = n * 3; 
		cout << "The number tripled is: " << prod << endl;
		break;
	case 2:
		while (n != 0)
		{
			m = n % 10;
			rev = rev * 10 + m;
			n /= 10;
		}
		cout << "Reversed Number: " << rev << endl;
		break;
	}

// === Write 10 different numbers to an array ===
//======================================================================
	cout << "\n\nWriting...\n";
	int arr [10]; 
	n = 0; 
	
	// Opening file in mode that allows it to be written to: ios::out
	fstream dataFile("Numbers.txt", ios::out);
	if (!dataFile)
		cout << "\nError opening file.\n";

	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 900 + 100;
		dataFile << arr[i] << endl;
	}
	cout << "File has been written.\n";
	cout << "\nSorting...\n";

// === sorting - ASCENDING ORDER ===
	int x = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + x);

	dataFile << endl;
	for (int i = 0; i < x; ++i) {
		dataFile << arr[i] << endl;
	}
	dataFile.close();

//======================================================================
	cout << "Finished sorting:\n\n" << "Here are the contents of the file:\n\n";

	dataFile.open("Numbers.txt");
	while (!dataFile.fail() && !dataFile.eof())
	{
		dataFile >> n;
		cout << n << endl;
	}

	return 0;
}
