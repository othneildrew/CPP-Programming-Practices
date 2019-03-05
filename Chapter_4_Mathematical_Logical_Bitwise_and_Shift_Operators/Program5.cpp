// Chapter 4: Program 5

/***
Write a C++ program to read three sides of a triangle. Display three sides.
Use Pythagorean theory to find if the triangle is a right triangle. Display
true if it is a right traingle; otherwise display false.
**/ 

#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main(void)
{
    double A, B, C, Result;
    
    cout << "\n\t This program determines if a triangle is a right triangle";
    cout << "\n\t To get started, please enter the first side of triangle \n";
    cin >> A;
    cout << "\n\t Next, enter the second side of the triangle \n";
    cin >> B;
    cout << "\n\t Lastly, enter the third side of the triangle \n";
    cin >> C;
    
    // Use pythagorean theory to determine if right triangle
    Result = pow(B, 2) + pow(C, 2);
    
    if(pow(A, 2) == Result) {
        cout << "\n Is right triangle? - True";
    } else {
        cout << "\n Is right triangle? - False";   
    }
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
