// Chapter 6: Program 12

/***
	Wriate a C++ program to read a positive integer number which is greater than zero and less than 2-. Find factorial of the number. The symbol for factorial is "!".
**/

# include <iostream>
using namespace std;

int main(void) {

	int Number, Factorial = 0, Size = 1;
	
	cout << "\n\t This program finds the factorial of a number \n";
	cout << "\n\t To get started, please enter a number greater than 0 and less than 20 \n";
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
