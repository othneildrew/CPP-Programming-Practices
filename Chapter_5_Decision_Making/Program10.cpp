// Chapter 5: Program 10

/***
Write a C++ program to read values of three resistor (R) of an electric
circuit which are connected in series and it's current (I in amperes).
compute voltage (V in volts) and power (P in watts).
**/ 

# include <iostream>
# include <iomanip>
# include <math.h>
# include <string>
using namespace std;

int main(void)
{
    int R, I, V, P;
    
    cout << "\n\t Please enter value of three resistors (R) ";
    cin >> R;
    cout << "\n\t Please enter value of amperes (I) ";
    cin >> I;
    
    // Calculate voltage (volts) and power (watts)
    V = I * R;
    P = V * I;
    
    cout << "\n\t Voltage (volts)  = " << V << endl;
    cout << "\n\t Power (watts)  = " << P << endl;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
