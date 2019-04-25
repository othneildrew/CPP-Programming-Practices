// Chapter 9: Program 4

/***
Write a C++ program to read a real number. Write a function to accept the address of the variable holding this number, and find the square root of the number.
**/

# include <iostream>;
# include <string>;
# include <math.h>;
using namespace std;

double getData(void);
double findSqrRoot(double);
void displayData(double);

int main(void) {

	double Number, SquareRoot;
	double *NumberPtr;


	// Get number from user
	cout << "\n\t This program finds the square root of a real number";
	cout << "\n\t To get started, please enter a real number ";
	Number = getData();
	NumberPtr = & Number;

	SquareRoot = findSqrRoot(*NumberPtr);

	cout << "\n\n Square root of " << *NumberPtr << " is = " << SquareRoot << endl;

	system("pause");
	return 0;
}

// FUNCTIONS

// Gets and sets the value given by the user
double getData(void) {
	double data;
	cin >> data;
	return data;
}

// Finds the square root of a given number
double findSqrRoot(double num) {
	return sqrt(num);
}

// Display data
void displayData(double data) {
	cout << data;
}


// Code written by: Othneil Drew
