// Chapter 4: Program 8

/***
Find equation of a line passing a point A(X1,Y1) with a slope of M. You
program should read two values of A as X1 and Y1, and slope as M.
**/ 

# include <iostream>
# include <iomanip>
# include <math.h>
# include <string>
using namespace std;

int main(void)
{
    int X1, Y1, Slope, Line_Equation;
    
    cout << "\n\t This program find slope and equation of a line";
    cout << "\n\t To get started, please enter X of point \n";
    cin >> X1;
    cout << "\n\t and Y of point? \n";
    cin >> Y1;
    cout << "\n\t What is the slope? \n";
    cin >> Slope;
    
    // Calculate slope
    cout << "Equation of line Y = " << Slope << "x + " << Y1 - Slope * X1 << endl;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
