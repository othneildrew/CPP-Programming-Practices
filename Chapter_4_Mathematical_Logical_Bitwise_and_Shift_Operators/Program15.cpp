// Chapter 4: Program 15

/***
Write a C++ program to read an integer number. Shift its bit two to the right,
store it in a Shift_Right variable, and display it.
**/ 

# include <iostream>
# include <math.h>
# include <string>
using namespace std;

int main(void)
{
    short Number, Shift_Right;
    
    cout << "Please enter a number \n";
    cin >> Number;
    
    // Shift number 2 bits to the right
    Shift_Right = Number >> 2;
    cout << Number << " shifted 2 bits right = " << Shift_Right << endl;;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
