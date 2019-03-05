// Chapter 5: Program 4

/***
Write a C++ program to read a real number. Use type casting to convert it to
integer. If this number is divisible by three and it is even, then display that
it is divisible by 6. If it is divisible by three and it is odd number, then
it is divisible by 3. Otherwise, display the number.
**/ 

# include <iostream>
# include <iomanip>
# include <string>
using namespace std;

int main(void)
{
    double Number;
    int Real_Number, Divided, Remainder;
    
    cout << "\n\t Please enter a real number \n";
    cin >> Number;
    
    // Convert to int
    Real_Number = int(Number);
    
    // Check if number divisible by 3
    Divided = Real_Number / 3;
    Remainder = Real_Number % 2;
    
    if (Remainder > 0)
        cout << "\n\t The number is divisible by 6 \n";
    else if (Remainder < 0)
        cout << "\n\t The number is divisible by 3 \n";
    else
        cout << Real_Number << endl;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
