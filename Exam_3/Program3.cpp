// Exam 3 - Program 3

/***
Write a C++ program to read an integer number. Find sum of its digits.
**/

# include <iostream>
# include <math.h>
# include <iomanip>
# include <string>
using namespace std;

int Read_Data(void);
void Display_Data(int);

int main()
{
	int Number, Sum = 0;

	cout << "\n\t Please enter an integer number: ";
	Number = Read_Data();

	while (Number != 0)
	{
		Sum += Number % 10;
		Number /= 10;
	}

	cout << "\n\t The sum is ";
	Display_Data(Sum);

	system("pause");
	return 0;
}

// Code written by: Othneil Drew

int Read_Data() {
	int data;
	cin >> data;
	return data;
}

void Display_Data(int data) {
	cout << data << endl;
}
