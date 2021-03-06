// Chapter 5: Program 5

/***
Write a C++ program to read read four resistors' value, in ohms, which are connected in series.
Compute total resistor, and display it.
**/ 

# include <iostream>
# include <iomanip>
# include <math.h>
# include <string>
using namespace std;

int main(void)
{
    double R_Total, R1, R2, R3, R4;
    
    // Read resistor values
    cout << "\n\t This program calculates total resistors connected in parallel \n";
    cout << "\n\t Please enter value of R1 \n";
    cin >> R1;
    cout << "\n\t Please enter value of R2 \n";
    cin >> R2;
    cout << "\n\t Please enter value of R3 \n";
    cin >> R3;
    cout << "\n\t Please enter value of R4 \n";
    cin >> R4;
    
    
    // Calculate total resistor output
    R_Total = R1 + R2 + R3 + R4;
    R_Total = pow(R_Total, 3);
    
    // Show total resistor value
    cout << "\n\t Total Resistor Output = " << R_Total;
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
