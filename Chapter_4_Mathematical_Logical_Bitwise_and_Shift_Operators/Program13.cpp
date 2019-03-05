// Chapter 4: Program 13

/***
Write a C++ program to read an integer number and store it in a variable
called Num. Use exp(Num) function of math library. Display the output which
will be (e = 2.71828) to the power of Num.
**/ 

# include <iostream>
# include <math.h>
# include <string>
using namespace std;

int main(void)
{
    int Num;
    
    cout << "Please enter a number \n";
    cin >> Num;
    
    // Display Num using exp(Num)
    cout << "\t e = 2.71828 to the power of " << Num << " = " << exp(Num) << endl;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
