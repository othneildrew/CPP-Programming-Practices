// Chapter 4: Program 9

/***
Write a C++ program to read coordinate of two points on a line.
Find the equation of the line.
**/ 

# include <iostream>
# include <math.h>
# include <string>
using namespace std;

int main(void)
{
    int X1, Y1, X2, Y2, Slope;
    
    cout << "\n\t This program find slope and equation of a line";
    cout << "\n\t To get started, please enter X of point 1 \n";
    cin >> X1;
    cout << "\n\t and Y of point 1? \n";
    cin >> Y1;
    cout << "\n\t Now for the point 2, please enter X \n";
    cin >> X2;
    cout << "\n\t and Y of point 2? \n";
    cin >> Y2;
    
    // Calculate slope
    Slope = (Y2 - Y1) / (X2 - X1);
   
    cout << "\n The slope, also known as M is = " << Slope << endl;
    cout << "Equation of line Y = " << Slope << "x + " << Y1 - Slope * X1 << endl;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
