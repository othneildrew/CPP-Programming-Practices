// Chapter 6: Program 11

/***
Write a C++ program to read weekly hours and rate per hour of an employee of ten employees. Compute and display gross salary. If gross salary exceed $2,2000.00, then deduct 28% tax; otherwise, deduct 21% tax. Compute tax and net salary. Display weekly hours, rate per hour, gross salary, tax, and net salary for all employees.
**/

# include <iostream>
# include <iomanip>
# include <math.h>
# include <string>
using namespace std;

int main(void) {

	int weekly_hours, LCV, Size = 10;
	double hourly_rate, salary, tax, net;

	cout << "\n\t This program calculates gross salary for an employee of ten employees \n";

	for (LCV = 0; LCV < Size; LCV++) {
		cout << "\n\t Please enter hours worked per week for employeee #" << LCV + 1 << ": ";
		cin >> weekly_hours;
		cout << "\t How much is employee #" << LCV + 1 << " paid per hour? ";
		cin >> hourly_rate;

		// Calculate tax, salary, and net
		salary = (weekly_hours * hourly_rate) * 52;

		if (salary > 2200) {
			tax = salary * 0.28;
		} else {
			tax = salary * 0.21;
		}

		net = salary - tax;

		// Display all information for each employee
		cout << "Employee #" << LCV + 1 << " Gross Salary = " << fixed << setprecision(2) << salary << endl;
		cout << "Net Salary = " << fixed << setprecision(2) << net << endl;
		cout << "Estimate based on " << weekly_hours << " weekly hours at $" << hourly_rate << " per hour" << endl;
	}

	system("pause");
	return 0;
}

// Code written by: Othneil Drew
