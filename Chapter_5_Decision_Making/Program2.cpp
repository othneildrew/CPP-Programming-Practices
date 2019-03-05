// Chapter 5: Program 2

/***
Employee: Write a C++ program to read weekly hours and rate per hour of an
employee as type of double. Compute gross salaray. If gross salary is greater
than $500.00 and less than or equal to $2000, then deduct 25% tax; and if gross
salary is greater than $2000, then deduct 35% tax. Otherwise, deduct 15%.
Compute net salary. Display weekly hours, rate, gross salary, tax, and net
salary.
**/ 

# include <iostream>
# include <iomanip>
# include <math.h>
# include <string>
using namespace std;

int main(void)
{
    double weekly_hours, hourly_rate, gross_salary, net_salary, tax_rate, tax;
    
    cout << "\n\t This program calculates gross and net salary for an employee \n";
    cout << "\n\t To get started, how many hours do you work a week? \n";
    cin >> weekly_hours;
    cout << "\n\t How much are you paid per hour? \n";
    cin >> hourly_rate;
    
    // Calculate gross salary and net salary
    gross_salary = weekly_hours * hourly_rate;
    
    if (gross_salary > 2000)
        tax_rate = 0.35;
    else if (gross_salary > 500)
        tax_rate = 0.25;
    else
        tax_rate = 0.15;
    
    tax = (gross_salary * tax_rate) - net_salary;
    net_salary = gross_salary - tax;
    
    cout << "Weekly hours = " << fixed << setprecision(2) << weekly_hours << endl;
    cout << "Rate = " << fixed << setprecision(2) << hourly_rate << endl;
    cout << "Gross salary = " << fixed << setprecision(2) << gross_salary << endl;
    cout << "Tax = " << fixed << setprecision(2) << tax << endl;
    cout << "Net Salary = " << fixed << setprecision(2) << net_salary << endl;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
