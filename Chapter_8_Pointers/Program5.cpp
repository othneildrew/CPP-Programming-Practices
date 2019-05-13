// Chapter 8 - Program 5

/***
	Write a program to illustrate the concept in which the address of memory location is displayed directly by variable Real and indirectly by RealPtr. (Use two-name type of string).
**/
# include <iostream>
# include <string>
using namespace std;
int main(void)
{
	string Real1, Real2, *RealPtr1, *RealPtr2;
	RealPtr1 = &Real1;

	cout << "\n Please enter a name:" << endl;
	cin >> *RealPtr1;

	cout << "\t The content of memory location is:" << Real1 << endl;

	cout << "\t Accessing Memory location directly is:" << Real1 << endl;
	cout << "\t Accessing Memory location indirectly is:" << *RealPtr1 << endl;

	system("pause");
	return 0;
}

// Code written by: Othneil Drew
// GitHub - https://github.com/othneildrew/CPP-Programming-Practices
