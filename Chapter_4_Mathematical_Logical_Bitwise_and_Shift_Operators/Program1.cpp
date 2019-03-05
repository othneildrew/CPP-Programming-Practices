// Chapter 4: Program 1
// Write a C++ program to read two negative numbers. Display two numbers
// Find absolute value of each number using abs(input) function of math.h
// library

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(void)
{
    // Get values from user
    int FirstNumber, SecondNumber;
    cout << "\n\t Please enter first number \n";
    cin >> FirstNumber;
    cout << "\n\t Please enter second number \n";
    cin >> SecondNumber;
    
    // Display negative numbers
    cout << "\n\t FirstNumber as a negative number = " << FirstNumber << endl;
    cout << "\n\t SecondNumber as a negative number = " << SecondNumber << endl;
    
    // Display absolute vaues
    cout << "\n\t abs(FirstNumber) = " << abs(FirstNumber) << endl;
    cout << "\n\t abs(SecondNumber) = " << abs(SecondNumber) << endl;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
