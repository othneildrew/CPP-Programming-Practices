// Chapter 6: Program 3

/***
Write a C++ program to read an integer number. Determine if the number is a prime
number or not. (Use for loop)
**/

# include <iostream>
# include <string>
using namespace std;

int main(void)
{
	int Number, LCV, Size;
	bool isPrimeNumber = true;

	cout << "\n\t Please enter an integer \n";
	cin >> Number;

	// Set size using number given
	Size = Number / 2;

	// Check if divisible by 2 up to number
	for (LCV = 2; LCV < Size; LCV++)
	{
		if (Number % LCV == 0)
			isPrimeNumber = false;
			break;
	}

	if (isPrimeNumber)
		cout << "\n " << Number << " is a prime number \n";
	else
		cout << "\n " << Number << " is NOT prime number \n";

	system("pause");
	return 0;
}

// Code written by: Othneil Drew
