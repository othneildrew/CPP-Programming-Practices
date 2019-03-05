// Chapter 4: Program 3

/***
Write a C++ program to read diameter of a circle. Find perimeter and area
of the circle.
**/ 

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(void)
{
    const double PI = 3.141592;
    double Diameter, Radius, Perimeter, Area;
    cout << "\n\t This program finds the perimeter and area of a circle";
    cout << "\n\t To get started, please enter the diameter of the circle \n";
    cin >> Diameter;
    
    // Calculate perimeter and area using diameter and radius
    Perimeter = Diameter * PI;
    Radius = Diameter / 2;
    Area = pow(Diameter, 2) * PI;
    
    // Display correct values
    cout << "Using a diameter of " << Diameter << endl;
    cout << "The Perimeter is = " << Perimeter << endl;
    cout << "The Area is = " << Area << endl;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
