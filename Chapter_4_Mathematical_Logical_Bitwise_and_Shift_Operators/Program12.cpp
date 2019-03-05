// Chapter 4: Program 12

/***
Write a C++ program to read an angle of a triangle. Use math.h library to find
sin(), cos(), and tan() of the angle and display them.
**/ 

# include <iostream>
# include <math.h>
# include <string>
using namespace std;

int main(void)
{
    double Angle, Sine, Cosine, Tangent;
    
    cout << "Please enter angle of triangle \n";
    cin >> Angle;
    
    // Get sine, cosine, and tangent
    Sine = sin(Angle);
    Cosine = cos(Angle);
    Tangent = tan(Angle);
    
    // Display sine, cosine, and tangent
    cout << "\t Sine of angle " << Angle << " is " << Sine << endl;
    cout << "\t Cosine of angle " << Angle << " is " << Cosine << endl;
    cout << "\t Tangent of angle " << Angle << " is " << Tangent << endl;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
