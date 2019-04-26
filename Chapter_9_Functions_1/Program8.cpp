// Chapter 9: Program 8

/***
Write a C++ program to read N employees' weekly hours and rate per hour of type of double. Compute gross salary. If gross salary is greater than $1,000 and less than $2,000, then deduct 30% tax. If gross salary is less than or equal to $1,000, then deduct 15% tax; otherwise, deduct 35% tax. Display all information. Use function for each action. Your program should include the following functions: Main(), Read_Data(), Compute_Gross_Salary(), Compute_Tax(), Compute_Net_Salary, Display_Info().
**/

# include <iostream>;
# include <string>;
# include <math.h>;
using namespace std;

double Read_Data(void), Compute_Gross_Salary(double, double), Compute_Tax(double), Compute_Net_Salary(double, double);
void Display_Info(string, double);

int main(void) {

	double Weekly_Hours, Rate, Tax, Gross_Salary, Net_Salary;
	int Size;

	// Get number of employees to calculate info for
	cout << "\n\t This program calculates gross and net salary for a given number of employees.";
	cout << "\n\t To get started, please enter number of employees you're getting information for: ";
	cin >> Size;

	for (int LCV = 0; LCV < Size; LCV++) {
		
		// Get weekly hours and rate
		cout << "\n Enter weekly hours for employee #" << LCV + 1 << "\t";
		Weekly_Hours = Read_Data();

		cout << "Enter rate for employee #" << LCV + 1 << "\t";
		Rate = Read_Data();

		Gross_Salary = Compute_Gross_Salary(Weekly_Hours, Rate);
		Tax = Compute_Tax(Gross_Salary);
		Net_Salary = Compute_Net_Salary(Gross_Salary, Tax);
		
		cout << "\n Employee #" << LCV + 1 << endl;
		Display_Info("Weekly hours", Weekly_Hours);
		Display_Info("Rate", Rate);
		Display_Info("Gross salary", Gross_Salary);
		Display_Info("Tax", Tax);
		Display_Info("Net salary", Net_Salary);
	}
	
	system("pause");
	return 0;
}

// FUNCTIONS

// Gets and sets the value given by the user
double Read_Data(void) {
	double data;
	cin >> data;
	return data;
}

double Compute_Gross_Salary(double WH, double R) {
	return (WH * R) * 4;
}

double Compute_Tax(double GS) {
	double tax;
	
	if (GS > 1000 && GS < 2000)
		tax = 0.30;
	else if (GS <= 1000)
		tax = 0.15;
	else
		tax = 0.35;

	return GS * tax;
}

double Compute_Net_Salary(double GS, double T) {
	return GS - T;
}

void Display_Info(string text, double data) {
	cout << "\t " << text << " = " << data << endl;
}

// Code written by: Othneil Drew
// https://github.com/othneildrew/CPP-Programming-Practices
