// Chapter 3: Program 11
// Write a C++ program to read three numbers and display them. Use double type. Use setw(15) and right manipulator object: 
// Explain the effect of using both setw(15) and right manipulator object on output.

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

	// Display each number using right and setw(15)
	cout << "\n\t Output of first number using right and setw(15) = " << right << setw(15) << Number1 << endl;
	cout << "\n\t Output of second number using right and setw(15) = " << right << setw(15) << Number2 << endl;
	cout << "\n\t Output of third number using right and setw(15) = " << right << setw(15) << Number3 << endl;

	system("pause");
	return 0;

	// Code written by: Othneil Drew

	/***
	* Output Explanation:
	* The program displayed 15 spaces for all outputs. Since right manipulator was used,
	* the output was shifted or justified to the right, leaving any available spaces to be showed at the beginning
	* of the output.
	*/

}
