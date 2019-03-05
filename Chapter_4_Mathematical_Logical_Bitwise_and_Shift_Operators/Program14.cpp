// Chapter 4: Program 14

/***
Write a C++ program to read an integer number. Shift its bit two to the left,
store it in a Shift_Left variable, and display it.
**/ 

# include <iostream>
# include <math.h>
# include <string>
using namespace std;

int main(void)
{
    short Number, Shift_Left;
    
    cout << "Please enter a number \n";
    cin >> Number;
    
    // Shift number 2 bits to the left
    Shift_Left = Number << 2;
    cout << Number << " shifted 2 bits left = " << Shift_Left << endl;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
