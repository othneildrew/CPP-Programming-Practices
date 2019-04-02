// Chapter 6: Program 15

/***
	Write a C++ program to find the GPA of eight students. Each student is taking four courses. There are three exams per course. Find the average of each course for each student. Display average grade for each course for each student and the GPA of each student.
**/

# include <iostream>
using namespace std;

int main(void)
{
	//long binary_num;
	int number, start_num = 0, decimal_num = 0, octal_num = 0, hexa_num = 0, LCV = 0, remainder;

	cout << "\n\t This program reads a binary number and convert it to decimal, octal, and hexadecimal \n";
	cout << "\n\t Please enter a binary number \n";
	cin >> number;
	start_num = number;

	// Convert binary to decimal (Base 10)
	while (number != 0)
	{
		remainder = number % 10;
		number /= 10;
		decimal_num += remainder * pow(2, LCV);
		LCV++;
	}

	// Convert binary to octal (Base 8)
	LCV = 0;
	number = start_num;

	while (number != 0)
	{
		remainder = number % 8;
		number /= 8;
		octal_num += remainder * pow(2, LCV);
		LCV++;
	}

	// Convert binary to hexa (Base 16)
	LCV = 0;
	number = start_num;

	while (number != 0)
	{
		remainder = number % 16;
		number /= 16;
		hexa_num += remainder * pow(2, LCV);
		LCV++;
	}

	cout << "Binary number entered was: " << start_num << endl;
	cout << "Converted to Decimal = " << decimal_num << endl;
	cout << "Converted to Octal = " << octal_num << endl;
	cout << "Converted to Hexadecimal = " << hexa_num << endl;

	system("pause");
	return 0;
}

// Code written by: Othneil Drew
