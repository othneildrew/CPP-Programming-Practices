// Chapter 6: Program 6

/***
Write a C++ program to read inital pressure (P1), inital volume (V1), and final volume (V2) of a gas at a constant temperature. Compute final pressure, P2, of the gas.
**/

# include <iostream>
# include <math.h>
# include <iomanip>
# include <string>
using namespace std;

int main(void)
{
	double Pressure_Init, Pressure_Final, Volume_Init, Volume_Final;
	
	// Get and set initial pressure and volume
	cout << "\n\t Please enter the initial pressure of the gas: \t";
	cin >> Pressure_Init;
	cout << "\n\t Now enter the inital volume of the gas: \t";
	cin >> Volume_Init;
	cout << "\n\t Lastly, enter the final volume of the gas: \t";
	cin >> Volume_Final;
	
	// Calculate using Boyle's law
	Pressure_Final = (Pressure_Init * Volume_Init) / Volume_Final;
	cout << "\n Initial Pressure of gas = " << Pressure_Init << endl;
	cout << "\n Initial Volume of gas = " << Volume_Init << endl;
	cout << "\n Final Volume of gas = " << Volume_Final << endl;
	cout << "\n Final Pressure of gas = " << Pressure_Final << endl;

	system("pause");
	return 0;
}

// Code written by: Othneil Drew
