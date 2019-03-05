// Chapter 4: Program 7

/***
Write a C++ program to find slope of a line containing two points A(X1,Y1)
 and B(X2,Y2). Find the equation of the line. Display the equation.
**/ 

# include <iostream>
# include <iomanip>
# include <math.h>
# include <string>
using namespace std;

int main(void)
{
    int X1, Y1, X2, Y2;
    double Slope, Line_Equation;
    
    cout << "\n\t This program find slope and equation of a line";
    cout << "\n\t To get started, please enter X of first point \n";
    cin >> X1;
    cout << "\n\t and Y of first point? \n";
    cin >> Y1;
    cout << "\n\t Now for the second point, please enter X \n";
    cin >> X2;
    cout << "\n\t and Y of second point? \n";
    cin >> Y2;
    
    // Calculate slope
    Slope = (Y2 - Y1) / (X2 - X1);
   
    cout << "\n The slope, also known as M is = " << Slope << endl;
    cout << "Equation of line Y = " << Slope << "x + " << Y1 - Slope * X1 << endl;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
