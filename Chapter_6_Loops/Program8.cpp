// Chapter 6: Program 8

/***
Write a C++ program to read an integer number. Find sum of its digits. For example, the sum of the digits of number 359 = (3 + 5 + 9) = 17, and the sum of the digits of number 246891 = 30.
**/

# include <iostream>
# include <math.h>
# include <iomanip>
# include <string>
using namespace std;

int main(void)
{
	double Sum = 0, Total = 0;
	string Number;
	int LCV, Size;

	cout << "\n\t Please enter an integer number \n";
	cin >> Number;

	// Get size of number entered
	Size = Number.length();

	// Calculate sum using loop and convert to real number
	for (LCV = 0; LCV < Size; LCV++)
	{	
		Total = int(Number[LCV]);
		

		//cout << Total << endl;
		//Number += Number[LCV];
		//cout << "total = " << Total << endl;
		
		//Sum += Total;


		//cout << "Total " << Total << endl;
	}

	cout << "Sum of " << Number << " = " << Sum << endl;

	


	system("pause");
	return 0;
}

// Code written by: Othneil Drew
