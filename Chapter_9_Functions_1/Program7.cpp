// Chapter 9: Program 7

/***
Write a C++ program to have the following functions: main function, a function to read data, a boolean function to accept this data and return true if the number is positive, a function to accept this number and return absolute value of the number, another boolean function to accept this number and return true if the number is even; otherwise, return false, a display function to display the input.
**/

# include <iostream>;
# include <string>;
# include <math.h>;
using namespace std;

int getData(void);
int findAbs(int);
bool isPositive(int);
bool isEven(int);
void displayData(int);

int main(void) {

	int Number, AbsVal;

	// Get Number from User
	cout << "\n\t This program accepts an integer number, checks if it is positive and even, and returns absolute value";
	cout << "\n\t To get started, please enter an integer number: ";
	Number = getData();

	// Display the data
	cout << "\n\t You entered ";
	displayData(Number);

	if (isPositive(Number))
		cout << "\n\t Positive number \t YES";
	else
		cout << "\n\t Positive number \t NO";

	if (isEven(Number))
		cout << "\n\t Even number \t YES";
	else
		cout << "\n\t Even number \t NO";

	// Get and show absolute value
	AbsVal = findAbs(Number);
	cout << "\n\t Absolute value is ";
	displayData(AbsVal);
	
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

// Returns the absolute value of a given number
int findAbs(int num) {
	return abs(num);
}

// Returns true if a given number is positive
bool isPositive(int num) {
	if (num > 0) {
		return true;
	}
	return false;
}

// Returns true if a given number is even
bool isEven(int num) {
	if (num % 2 == 0) {
		return true;
	}
	return false;
}

// Display data
void displayData(int data) {
	cout << data << endl;
}

// Code written by: Othneil Drew
