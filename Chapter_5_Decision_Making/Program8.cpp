// Chapter 5: Program 8

/***
Write a C++ read Energy (E in joules) and time (T in seconds). Compute power
in watts. "Power (P) = E / T^4"
**/ 

# include <iostream>
# include <iomanip>
# include <math.h>
# include <string>
using namespace std;

int main(void)
{
    double P, E, T;
    
    cout << "\n\t This program calculates Power in watts \n";
    cout << "\n\t To get started, enter energy in joules \n";
    cin >> E;
    cout << "\n\t Next, enter time in seconds \n";
    cin >> T;
   
    // Calculate power in watts and display it
    P = E / pow(T, 4);
    
    cout << "\n\t Power (watts) = " << P << endl;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
