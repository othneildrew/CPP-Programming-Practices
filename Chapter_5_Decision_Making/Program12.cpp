// Chapter 5: Program 12

/***
Complete code from Program 11:
**/ 

# include <iostream>
# include <math.h>
# include <string>
using namespace std;

int main(void)
{
    short int Input1_1, Input2;
    
    // Read values from user
    cout << "\n\t Please enter first number \n";
    cin >> Input1_1;
    cout << "\n\t Please enter second number \n";
    cin >> Input2;

    // Determine TRUE/FALSE with AND operator
    if (Input1_1 && Input2)
        cout << " output is TRUE";
    else
        cout << " output is FALSE";
    
    system("pause");
    return 0;
}

// Code written by: Othneil Drew
