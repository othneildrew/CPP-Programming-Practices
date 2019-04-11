// Chapter 9: Program 2

/***
Write a C++ program to read a real number. Write a function to accept this number and return absolute value of the number.
**/

# include <iostream>;
# include <math.h>;
using namespace std;

int main(void) {

	int Number;
	int getData();
	int getAbsValue(int);
	void displayInfo(int);


	// Get integer from user
	cout << "\n Please enter an integer \n";
	Number = getData();

	// Get absolute value by calling function
	Number = getAbsValue(Number);

	// Display info
	displayInfo(Number);

	system("pause");
	return 0;
}

// FUNCTIONS

/***
	* Reads an integer input value from user
	**/
int getData(void) {
	int input;
	cin >> input;
	return input;
}


/***
	* Gets the absolute value of a real number
	**/
int getAbsValue(int input) {
	return abs(input);
}


/***
	* Displays information to user
	**/
void displayInfo(int info) {
	cout << info << endl;
}

// Code written by: Othneil Drew
