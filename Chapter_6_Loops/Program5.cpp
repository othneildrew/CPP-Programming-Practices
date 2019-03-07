// Chapter 6: Program 5

/***
Redo the program in practice #4 for the same data by computing the interest for each year
using M = C (1 + R). Repeat it for the number of years. For the second year, the inital capital
(C) is the total money (M) of first year. For the third year, C is equal to M of second year, and so on.
**/

# include <iostream>
# include <math.h>
# include <iomanip>
# include <string>
using namespace std;

int main(void)
{
	double Capital, Rate = 0.06, TotalInvested;
	int LCV, Time;

	cout << "\n\t This program calculates total money after being invested at 6% for a number of years \n";

	// Get and initialize capital and time variables
	cout << "\n\t Please enter the capital for year 1 \n";
	cin >> Capital;
	cout << "\n\t Please enter the total number of years you expect to invest \n";
	cin >> Time;

	for (LCV = 0; LCV < Time; LCV++)
	{
		// Calculate and show money earned so far
		Capital = Capital * (1 + Rate);

		cout << "Total Capital (Year " << LCV + 1 << ") = $" << fixed << setprecision(2) << showpoint << Capital << endl;
	}

	system("pause");
	return 0;
}

// Code written by: Othneil Drew
