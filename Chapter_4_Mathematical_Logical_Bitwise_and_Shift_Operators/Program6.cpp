// Chapter 4: Program 6

/***
Write a C++ program to read three coefficients of quadratic equation.
**/ 

# include <iostream>
# include <iomanip>
# include <math.h>
# include <string>
using namespace std;

int main(void)
{
    double A, B, C, Root_1, Root_2;
    
    cout << "\n\t This finds roots of a quadratic equation";
    cout << "\n\t To get started, please enter the first number \n";
    cin >> A;
    cout << "\n\t Next, enter the second number of the triangle \n";
    cin >> B;
    cout << "\n\t Now enter the third number \n";
    cin >> C;
    
    // Calculate and display the roots
    Root_1 =  (-B + sqrt(pow(B, 2) - 4 * A * C)) / 2;
    Root_2 =  (-B - sqrt(pow(B, 2) - 4 * A * C)) / 2;
    
    cout << "\n The first root of the quadratic equation is: " << fixed << setprecision(2) << Root_1 << endl;
    cout << "The second root of the quadratic equation is: " << fixed << setprecision(2) << Root_2 << endl;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
