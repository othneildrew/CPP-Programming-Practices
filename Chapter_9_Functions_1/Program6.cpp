// Chapter 9: Program 6

/***
Write a C++ program to read the area code of twenty cities. Write a random function to accept the three digits area code and generate a number between 0 and 19.
**/

# include <iostream>;
# include <string>;
# include <math.h>;
using namespace std;

int getData(void);
int getRand(int);
int Size = 20;
void displayData(int);


int main(void) {

	int Number, RandomNum = 0, LCV;

	// Get Number from User
	cout << "\n\t This program reads the area code of twenty cities and generates a random number";

	for (LCV = 0; LCV < Size; LCV++) {
		cout << "\n\t Enter an area code ";
		Number = getData();
		RandomNum = getRand(Number);

		// Display Data
		cout << "Random Number -> ";
		displayData(RandomNum);
	}

	system("pause");
	return 0;
}

// FUNCTIONS

// Gets and sets the value given by the user
int getData(void) {
	int data;
	cin >> data;
	return data;
}

// Returns a random number between 0 - 19
int getRand(int num) {
	srand(num);
	return rand() % Size;
}

// Display data
void displayData(int data) {
	cout << data << endl;
}

// Code written by: Othneil Drew
