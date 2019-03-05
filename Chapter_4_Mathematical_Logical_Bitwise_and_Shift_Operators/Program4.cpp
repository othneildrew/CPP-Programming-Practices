// Chapter 4: Program 4

/***
Write a C++ program to read length, width, and height of a cube and find
its volume. Display the volume.
**/ 

#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main(void)
{
    double Length, Width, Height, Volume;
    
    cout << "\n\t This program finds a volume of a shape";
    cout << "\n\t To get started, please enter the Length of the shape \n";
    cin >> Length;
    cout << "\n\t Next, enter the Width of the shape \n";
    cin >> Width;
    cout << "\n\t Lastly, enter the Height of the shape \n";
    cin >> Height;
    
    // Calculate volume given length, width, and height
    Volume = Length * Width * Height;
    
    // Display volume
    cout << "The Volume is = " << fixed << setprecision(2) << Volume << endl;
    cout << "Length used: " << Length << endl;
    cout << "Width used: " << Width << endl;
    cout << "Height used: " << Height << endl;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
