// Chapter 6: Program 9

/***
	Write a C++ program to read a binary number and convert it to decimal and octal
**/

# include <iostream>
using namespace std;

int main(void)
{
	long binary_num;
	int start_num = 0, decimal_num = 0, octal_num = 0, LCV = 0, remainder;

	cout << "\n\t This program reads a binary number and convert it to decimal and octal \n";
	cout << "\n\t Please enter a binary number \n";
	cin >> binary_num;
	start_num = binary_num;

	// Convert binary to decimal (Base 10)
	while (binary_num != 0)
	{
		remainder = binary_num % 10;
		binary_num /= 10;
		decimal_num += remainder * pow(2, LCV);
		LCV++;
	}

	// Convert binary to octal (Base 8)
	LCV = 0;
	binary_num = start_num;

	while (binary_num != 0)
	{
		remainder = binary_num % 8;
		binary_num /= 8;
		octal_num += remainder * pow(2, LCV);
		LCV++;
	}

	cout << "Binary number entered was: " << start_num << endl;
	cout << "Converted to Decimal = " << decimal_num << endl;
	cout << "Converted to Octal = " << octal_num << endl;
	
	system("pause");
	return 0;
}

// Code written by: Othneil Drew
// Binary to decimal conversion adopted from: https://www.programiz.com/cpp-programming/examples/binary-decimal-convert
