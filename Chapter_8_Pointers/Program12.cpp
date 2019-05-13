// Chapter 8 - Program 12

/***
	Complete-
//Project 1: Pointers and References manipulation. Write a program to declare a variable MyNumber type of integer. Declare a pointer MyPtr type of pointer to integer. Assign the address of MyNumber to MyPtr. Your program should do the following: increment the address of MyPtr by 1 & 2, display; decrement the address of MyPtr by 1 & 3, display. Increment and Decrement the address of MyPtr by 5, display.
**/
# include <iostream>
# include <string>
using namespace std;
int main(void)
{
	int MyNumber, *NumPtr;
	NumPtr = &MyNumber;
	cout << "\n Please enter a number: " << endl;
	cin >> MyNumber;

	cout << "\t The Number you Entered is: " << *NumPtr << endl;

	cout << "\t The Number Provided with Increment of 1 is: " << *NumPtr + 1 << endl;
	cout << "\t The Number Provided with Increment of 2 is: " << *NumPtr + 2 << endl;

	cout << "\t The Number Provided with Decrement of 1 is: " << *NumPtr - 1 << endl;
	cout << "\t The Number Provided with Decrement of 3 is: " << *NumPtr - 3 << endl;

	cout << "\t The Number Provided with Increment of 5 is: " << *NumPtr + 5 << endl;
	cout << "\t The Number Provided with Decrement of 5 is: " << *NumPtr - 5 << endl;

	system("pause");
	return 0;
}

// Code written by: Othneil Drew
// GitHub - https://github.com/othneildrew/CPP-Programming-Practices
