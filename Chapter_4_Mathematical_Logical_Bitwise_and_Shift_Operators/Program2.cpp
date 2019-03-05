// Chapter 4: Program 2

/***
Write a C++ program to read an integer number and its exponent. Store the
result of the number to the power of its exponent and display it. Use
pow(input) function of math.h library.
**/ 

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(void)
{
    // Get values from user
    int Number, Exponent, Result;
    cout << "\n\t Please enter an integer number \n";
    cin >> Number;
    cout << "\n\t Please enter the integer's exponent \n";
    cin >> Exponent;
    
    // Calculate result using pow(input) function and display
    Result = pow(Number, Exponent);
    cout << "Result using pow(input) function = " << Result << endl;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
