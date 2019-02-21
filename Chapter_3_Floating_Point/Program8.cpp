// Chapter 3: Program 8
// Write a program to read three numbers and display them. Use double type. Use setw(15) and setprecision(3).
// Explain the effect of both setw(15) and setprecision(3) on output.

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

	// Display each number using setprecision(3) and setw(15)
	cout << "\n\t Output of first number using setprecision(3) and setw(15) = " << setprecision(3) << setw(15) << Number1 << endl;
	cout << "\n\t Output of second number using setprecision(3) and setw(15) = " << setprecision(3) << setw(15) << Number2 << endl;
	cout << "\n\t Output of third number using setprecision(3) and setw(15) = " << setprecision(3) << setw(15) << Number3 << endl;

	system("pause");
	return 0;

	// Code written by: Othneil Drew

	/***
	* Output Explanation:
	* The program displayed 3 digits for all outputs. If the output was less than the available spaces, it was unchanged.
	* If the output was greater, it rounded the number. For really large numbers it was also rounded and an showed an exponent.
	* Since setw(15) was used, the program also include leading zeros for each input.
	*/

}
