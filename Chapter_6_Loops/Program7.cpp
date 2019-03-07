// Chapter 6: Program 7

/***
Write a C++ program to read inital temperature (T1), inital volume (V1), and final volume (V2) of a gas at a constant pressure. Compute final temperature, T2, of the gas.
**/

# include <iostream>
# include <math.h>
# include <iomanip>
# include <string>
using namespace std;

int main(void)
{
	double T1, T2, V1, V2;
	int LCV = 0, Size = 5;

	while (LCV < Size)
	{
		// Get initial temp, volume, and final volume
		cout << "\n\t Please enter the initial temperature of the gas: \t";
		cin >> T1;
		cout << "\n\t Now enter the inital volume of the gas: \t";
		cin >> V1;
		cout << "\n\t Lastly, enter the final volume of the gas: \t";
		cin >> V2;

		// Calculate using Boyle's law and show values
		T2 = (T1 * V2) / V1;

		cout << "\n Final Temperature of gas = " << T2 << endl;
		LCV++;
	}

	system("pause");
	return 0;
}

// Code written by: Othneil Drew
