// Chapter 8 - Program 8

/***
	Write a program for a constant real number. Declare a pointer and assign the address of the constant identifier to it. Display its content by both the variable and the pointer to constant. (Use three-names type of string).
**/
# include <iostream>
# include <string>
using namespace std;
int main(void)
{
	string Name1, Name2, Name3, *Ptr1;
	Ptr1 = &Name1;

	const string *Ptr1_to_Const;
	Ptr1_to_Const = Ptr1;

	cout << "\n Please enter a name:" << endl;
	cin >> Name1;

	cout << "Const Name Displayed:" << Name1 << endl;

	system("pause");
	return 0;
}

// Code written by: Othneil Drew
// GitHub - https://github.com/othneildrew/CPP-Programming-Practices
