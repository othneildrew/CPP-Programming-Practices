// Chapter 3: Program 6
// Write program to read three numbers and display each outpout in a separate line. Use long double type.
// Use setw(15) to format the output. Explain the effect of setw(15) on output.

#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	// Declare variables
	long double Number1, Number2, Number3;

	// Get and numbers to variables
	cout << "\n\t What is the first number? \n";
	cin >> Number1;
	cout << "\n\t What is the second number? \n";
	cin >> Number2;
	cout << "\n\t What is the third number? \n";
	cin >> Number3;

	// Display each number using setw(15)
	cout << "\n\t Output of first number using setw(15) = " << setw(15) << Number1 << endl;
	cout << "\n\t Output of second number using setw(15) = " << setw(15) << Number2 << endl;
	cout << "\n\t Output of third number using setw(15) = " << setw(15) << Number3 << endl;

	system("pause");
	return 0;

	// Code written by: Othneil Drew

	/***
	* Output Explanation: 
	* The program filled the output with leading zeros/spaces if the output was less than the available spaces.
	* If the output was greater, it showed the number and an exponent.
	*/

}
