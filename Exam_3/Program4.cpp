// Exam 3 - Program 4

/***
	Write a C++ Program to find the 15 sequences of Fibonacci number.
**/

# include <iostream>
using namespace std;

int main(void) {

	int Num1 = 0, Num2 = 1, Result = 0, Generation = 15;

	cout << "\n\t This program finds the fibonacci number after the 15th generation \n";

	while (Result <= Generation) {
		Num1 = Num2;
		Num2 = Result;
		Result = Num1 + Num2;
	}

	cout << "Fibonacci Number (15th generation) = " << Result << endl;

	system("pause");
	return 0;
}

// Code written by: Othneil Drew
