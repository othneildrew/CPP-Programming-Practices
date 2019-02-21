// Chapter 3: Program 1
// Write a program to read three characters and display them

#include <iostream>
using namespace std;
int main(void)
{
	// Declare variables
	char letter_1, letter_2, letter_3;

	// Get and assign characters to variables
	cout << "\n\t Please enter first character \n";
	cin >> letter_1;
	cout << "\n\t Please enter second character \n";
	cin >> letter_2;
	cout << "\n\t Please enter third character \n";
	cin >> letter_3;

	// Display characters
	cout << "\n\t Character 1 = " << letter_1 << endl;
	cout << "\n\t Character 2 = " << letter_2 << endl;
	cout << "\n\t Character 3 = " << letter_3 << endl;

	system("pause");
	return 0;

	// Code written by: Othneil Drew
	
}
