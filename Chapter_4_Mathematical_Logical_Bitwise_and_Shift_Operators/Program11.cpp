// Chapter 4: Program 11

/***
Write a C++ program to read a number as type of short integer. Shift the number
3 bits to the right, and display the output.
**/ 

# include <iostream>
# include <math.h>
# include <string>
using namespace std;

int main(void)
{
    short Number, Shifted;
    
    cout << "Please enter a number \n";
    cin >> Number;
    
    cout << "Number entered = " << Number << endl;
    
    // Shift number 3 bits to the right
    Shifted = Number >> 3;
    cout << "Number, shifted 3 bits right = " << Shifted << endl;;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
