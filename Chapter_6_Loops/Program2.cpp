// Chapter 6: Program 2

/***
Write a C++ program to read ten real numbers. Find their sum and product.
**/

# include <iostream>
# include <string>
using namespace std;

int main(void)
{
	double Number, Sum = 0, Product = 1;
	int LCV, Size = 10;

	for (LCV = 0; LCV < Size; LCV++)
	{
		cout << "\n\t Please enter a number \n";
		cin >> Number;
		Sum += Number;
		Product *= Number;
	}

	cout << "\n\t Sum of " << Size << " numbers = " << Sum << endl;
	cout << "\n\t Product of " << Size << " numbers = " << Product << endl;
	system("pause");
	return 0;
}

// Code written by: Othneil Drew
