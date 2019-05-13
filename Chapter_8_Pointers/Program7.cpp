// Chapter 8 - Program 7

/***
	Write a program to read a real number. Display its content by both the variable and pointer to constant. (Use two-numbers type of int).
**/
# include <iostream>
# include <string>
using namespace std;
int main(void)
{
	int Number1, Number2, *Ptr1, *Ptr2;
	const int *Ptr1_to_Const = &Number1;
	Ptr1 = &Number1;

	cout << "\n Please Enter an Integer Number:" << endl;
	cin >> *Ptr1;

	cout << "\t Integer displayed via variable:" << Number1 << endl;

	cout << "\t Integer displayed via Pointer to Constant:" << *Ptr1_to_Const << endl;

	system("pause");
	return 0;
}

// Code written by: Othneil Drew
// GitHub - https://github.com/othneildrew/CPP-Programming-Practices
