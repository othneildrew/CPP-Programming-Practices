// Chapter 4: Program 17

/***
Write a C++ program to read weekly hours and rate per hour of an employee.
Compute and display gross salary.
**/ 

# include <iostream>
# include <iomanip>
# include <math.h>
# include <string>
using namespace std;

int main(void)
{
    const int weeks_in_year = 52;
    int weekly_hours;
    double hourly_rate, salary;
    
    cout << "\n\t This program calculates gross salary for an employee \n";
    cout << "\n\t To get started, how many hours do you work a week? \n";
    cin >> weekly_hours;
    cout << "\n\t How much are you paid per hour? \n";
    cin >> hourly_rate;
    
    salary = (weekly_hours * hourly_rate) * 52;
    cout << "Your estimated gross salary is " << fixed << setprecision(2) << salary << endl;
    cout << "Estimate based on " << weekly_hours << " weekly hours at $" << hourly_rate << " per hour" << endl;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
