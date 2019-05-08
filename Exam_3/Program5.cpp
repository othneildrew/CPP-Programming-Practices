// Exam 3 - Program 5

/***
	Write a C++ program to read an integer number. Find factorial of the number.
**/

# include <iostream>
using namespace std;

int main(void) {

	int Number, Factorial = 0, Size = 1;

	cout << "\n\t This program finds the factorial of a number \n";
	cout << "\n\t To get started, please enter an integer number \n";
	cin >> Number;
	Factorial = Number;

	while (Size != Number) {
		Factorial *= Size;
		Size++;
	}

	cout << Number << "! = " << Factorial << endl;

	system("pause");
	return 0;
}

// Code written by: Othneil Drew
