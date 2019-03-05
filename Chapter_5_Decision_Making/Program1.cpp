// Chapter 5: Program 1

/***
Write a C++ program to read an integer number. If the number is greater than
zero, then display it as positive; otherwise display it as negative.
**/ 

# include <iostream>
# include <string>
using namespace std;

int main(void)
{
    int Number;
    
    cout << "\n\t Please enter a number \n";
    cin >> Number;
    
    if (Number > 0)
        cout << "\n\t You entered a positive number \n";
    else
        cout << "\n\t You entered a negative number \n";
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
