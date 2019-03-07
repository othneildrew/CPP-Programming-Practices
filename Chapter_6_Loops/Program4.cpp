// Chapter 6: Program 4

/***
Write a C++ program to read an inital capital (C) of a customer. The interest rate (R) is
6% per year. Compute the total money (M) after number of years (T). Your program should
read how manby years the capital was invested.
**/

# include <iostream>
# include <math.h>
# include <iomanip>
# include <string>
using namespace std;

int main(void)
{
	double Capital, Rate = 0.06, Money, Time;
	//int Number, LCV, Size;
	//bool isPrimeNumber = true;

	cout << "\n\t This program calculates total money after being invested at 6% for a number of years \n";
	cout << "\n\t To get started, please enter the starting capital \n";
	cin >> Capital;

	cout << "\n\t How many years will the money be invested? \n";
	cin >> Time;

	// SCalculate total money
	Money = Capital * pow(1 + Rate, Time);

	
	cout << "\n Starting Capital = $" << Capital << endl;
	cout << "\n Invested at 6% for " << Time << " years = $" << fixed << setprecision(2) << showpoint << Money << endl;

	system("pause");
	return 0;
}

// Code written by: Othneil Drew
