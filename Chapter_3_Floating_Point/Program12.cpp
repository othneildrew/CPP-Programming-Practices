// Chapter 3: Program 12
// Write a C++ program to read weekly hours and rate per hour of an employee and display them. Use type float.
// Format the output using setw().

#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	// Declare variables
	float weekly_hours, hourly_rate, salary;

	// Show information about program
	cout << "\n\t This program estimates yearly salary. You will be asked for weekly hours and hourly rate. \n";
	system("pause");

	// Get and set weekly hours and hourly rate
	cout << "\n\t How many hours a week do you work? \n";
	cin >> weekly_hours;
	cout << "\n\t What is your hourly rate? \n";
	cin >> hourly_rate;

	// Calculate salary based on weekly hours and hourly rate
	salary = (weekly_hours * hourly_rate) * 52;
	
	// Display salary, weekly hours, and hourly rate
	cout << "\n Your estimated salary is $" << setw(5) << salary << endl;
	cout << "\n Estimated salary calculated based on " << setw(5) << weekly_hours << " weekly hours and an hourly rate of $" << hourly_rate << endl;

	system("pause");
	return 0;

	// Code written by: Othneil Drew

}
