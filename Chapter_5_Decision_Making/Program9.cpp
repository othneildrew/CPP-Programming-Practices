// Chapter 5: Program 9

/***
Write a C++ program to read any letter as a character. Find its ASCII code
as integer and display it. ASCII stands for American Standard Code for
Internation Interchange.
**/ 

# include <iostream>
# include <iomanip>
# include <math.h>
# include <string>
using namespace std;

int main(void)
{
    char Character;
    int ASCII;
    
    cout << "\n\t Please enter any letter as a character \n";
    cin >> Character;
    
    // Determine ASCII character code value
    ASCII = Character;
    
    cout << "\n\t The ASCII character code for " << Character << " is = " << ASCII << endl;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
