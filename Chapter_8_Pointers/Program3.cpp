// Chapter 8 - Program 3

/***
	Write a program to read three integer numbers and store them in variables Number1, Number2, Number3. Declare two pointers type of int called Ptr1 and Ptr2. Assign the address of Number1 to Ptr1 and display the number indirectly by Ptr1.
**/
# include <iostream>
# include <string>
# include <math.h>
using namespace std;
int main(void)
{
    int Number1, Number2, Number3, *Ptr1, *Ptr2;
    
    Ptr1 = &Number1;
    Ptr2 = &Number2;
    
    cout << "\n Please Enter an Interger Number" << endl;
    cin >> *Ptr1;
    
    cout << "\t The First Integer Number accessed directly is:" << Number1 << endl;    
    cout << "\t The First Integer Number accessed indirectly is:" << *Ptr1 << endl;
 
	system("pause");
    return 0;
}

// Code written by: Othneil Drew
// GitHub - https://github.com/othneildrew/CPP-Programming-Practices
