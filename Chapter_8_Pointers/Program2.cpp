// Chapter 8 - Program 2

/***
	Write a program to read a student's name and store it in a variable called MyName type of string. Declare a variable My_Friend type of pointer to string which points to MyName. Display the content of memory locations directly by MyName and indirectly by My_Friend.
**/

# include <iostream>
# include <string>
# include <math.h>
using namespace std;
int main(void)
{
	string MyName, *My_Friend;

	My_Friend = &MyName;

	cout << "\n Please enter student's name:" << endl;
	cin >> *My_Friend;

	cout << "\t The Student's Name Accessed Directly is: " << MyName << endl;
	cout << "\t The Student's Name Accessed Indirectly is: " << *My_Friend << endl;
	
	system("pause");
	return 0;
}

// Code written by: Othneil Drew
// GitHub - https://github.com/othneildrew/CPP-Programming-Practices
