// Chapter 4: Program 16

/***
Write a C++ program to read two numbers. Perform AND operation and O
operations on two numbers. Perform NOT operation on first number. Declare AND,
OR, and NOT varables type of short int.
**/ 

# include <iostream>
# include <math.h>
# include <string>
using namespace std;

int main(void)
{
    short int First_Number, Second_Number;
    bool AND, OR, NOT;
    
    cout << "\n\t Please enter first number \n";
    cin >> First_Number;
    cout << "\n\t Please enter second number \n";
    cin >> Second_Number;
    
    // Perform AND, OR NOT operations
    (First_Number && Second_Number) ? AND = true : AND = false;
    (First_Number || Second_Number) ? OR = true : OR = false;
    (First_Number) ? NOT = false : NOT = true;
    
    cout << "\t AND operation of two numbers is " << AND << endl;
    cout << "\t OR operation of two numbers is " << OR << endl;
    cout << "\t NOT operation of first numbers is " << NOT << endl;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
