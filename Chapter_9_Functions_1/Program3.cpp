// Chapter 9: Program 3

/***
Write a C++ program to read a real number. Write a Boolean function to accept this number. The function should return true if the number is postive and return false if the number is negative.
**/

# include <iostream>;
using namespace std;

// Function prototype
int getData();
bool checkPositive(int);

int main(void) {

	int Number;
	
	cout << "\n This program checks if a number is positive and returns true \n";
	cout << "\n To get started, please enter a real number \n";
	Number = getData();
	
	if (checkPositive(Number)) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
	
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
	* Checks if a number is positive (true) or negative (false)
	**/
bool checkPositive(int input) {
	if (input >= 0) {
		return true;
	}
	else {
		return false;
	}
}


// Code written by: Othneil Drew
