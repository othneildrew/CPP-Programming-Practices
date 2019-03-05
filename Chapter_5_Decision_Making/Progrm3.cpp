// Chapter 5: Program 2

/***
Write a C++ program to read an integer number. Display if the number is
ODD or EVEN.
**/ 

# include <iostream>
# include <string>
using namespace std;

int main(void)
{
    int Number;
    
    cout << "\n\t Please enter a number \n";
    cin >> Number;
    
    Number = Number % 2;
    
    if (Number > 0)
        cout << "\n\t The number is ODD \n";
    else
        cout << "\n\t The number is EVEN \n";
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
