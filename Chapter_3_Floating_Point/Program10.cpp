// Chapter 3: Program 10
// Write a program to read three numbers as type double and display them. Use duble type. Use setw(15) and left manipulator objects.
// Explain the effect of both setw(15) and left on output.

#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	// Declare variables
	double Number1, Number2, Number3;

	// Get and numbers to variables
	cout << "\n\t What is the first number? \n";
	cin >> Number1;
	cout << "\n\t What is the second number? \n";
	cin >> Number2;
	cout << "\n\t What is the third number? \n";
	cin >> Number3;

	// Display each number using left and setw(15)
	cout << "\n\t Output of first number using left and setw(15) = " << left << setw(15) << Number1 << endl;
	cout << "\n\t Output of second number using left and setw(15) = " << left << setw(15) << Number2 << endl;
	cout << "\n\t Output of third number using left and setw(15) = " << left << setw(15) << Number3 << endl;

	system("pause");
	return 0;

	// Code written by: Othneil Drew

	/***
	* Output Explanation:
	* The program displayed 15 spaces all outputs. Since left manipulator was used,  the output shifted to the left
	* displaying no leading zeros.
	*/

}
