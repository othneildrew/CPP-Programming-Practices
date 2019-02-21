// Chapter 3: Program 9
// Write a program to read three numbers and display them. Use double type. Use setw(15) and setprecision(3).
// Explain the effect of both setprecision(15) and showpoint on output.

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

	// Display each number using setprecision(15) and showpoint
	cout << "\n\t Output of first number using setprecision(15) and showpoint = " << setprecision(15) << showpoint << Number1 << endl;
	cout << "\n\t Output of second number using setprecision(15) and showpoint = " << setprecision(15) << showpoint << Number2 << endl;
	cout << "\n\t Output of third number using setprecision(15) and showpoint = " << setprecision(15) << showpoint << Number3 << endl;

	system("pause");
	return 0;

	// Code written by: Othneil Drew

	/***
	* Output Explanation:
	* The program displayed 15 digits for all outputs. Since showpoint was used, any aviable spaces was filled with zeros
	* and displayed with the output.
	*/

}
