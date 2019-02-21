// Chapter 3: Program 5
// Write a C++ program to read three numbers and display them. Use long double type

#include <iostream>
using namespace std;
int main(void)
{
	// Declare variables
	long double Number1, Number2, Number3;

	// Get and assign numbers for each variable
	cout << "\n\t Please enter the first number \n";
	cin >> Number1;
	cout << "\n\t What the second number? \n";
	cin >> Number2;
	cout << "\n\t And the third number? \n";
	cin >> Number3;

	// Display each number the user entered
	cout << "\n\t The first number was " << Number1 << ", the second number was " << Number2 << ", and the third number was " << Number3 << endl;

	system("pause");
	return 0;

	// Code written by: Othneil Drew

}
