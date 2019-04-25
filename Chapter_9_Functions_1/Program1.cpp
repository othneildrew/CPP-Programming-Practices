// Chapter 9: Program 1

/***
Write a C++ program to read a collection of integer umbers. Find the smallest and the largest number in the collection. 
Your program should terminate when a sentinel value zero is read. Use functions.
**/

# include <iostream>;
# include <string>;
# include <math.h>;
using namespace std;

int getData();
int findSmallest(int);
int findLargest(int);
int LargestInt, SmallestInt;

int main(void) {

	int Number;
	
	// Get integer from user
	cout << "\n\t This program finds the smallest and largest number in a collection of integers";
	cout << "\n\t To get started, please enter an integer ";
	Number = getData();

	while (Number != 0) {

		cout << "\n\t Please enter another integer ";
		Number = getData();

		findSmallest(Number);
		findLargest(Number);

	}

	if (Number == 0)
		cout << "Smallest value entered was " << SmallestInt << endl;
		cout << "Largest value entered was " << LargestInt << endl;

	//cout << Number;

	system("pause");
	return 0;
}

// FUNCTIONS

/**
	* Reads an integer input value from user
*/
int getData(void) {
	int input;
	cin >> input;
	return input;
}

int findSmallest(int num) {
	if (num < SmallestInt) {
		SmallestInt = num;
	}
	return SmallestInt;
}

int findLargest(int num) {
	if (num > LargestInt) {
		LargestInt = num;
	}
	return LargestInt;
}


