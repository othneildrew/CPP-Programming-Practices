// Chapter 8 - Program 6

/***
	Write a program to read a real number. Display its content by both the variable and pointer to constant. (Use two-letters type of char).
**/
# include <iostream>
# include <string>
using namespace std;
int main(void)
{
	char Letter1, Letter2, *Ptr1, *Ptr2;
	const char *Ptr_to_Const = &Letter1;
	Ptr1 = &Letter1;

	cout << "\n Please enter a letter:" << endl;
	cin >> *Ptr1;

	cout << "\t The Letter Entered Accessed by Variable: " << Letter1 << endl;
	cout << "\t The Letter Entered Accessed by Pointer: " << *Ptr1 << endl;
	cout << "\t The Letter Accessed by Pointer to Constant: " << *Ptr_to_Const << endl;

	system("pause");
	return 0;
}

// Code written by: Othneil Drew
// GitHub - https://github.com/othneildrew/CPP-Programming-Practices
