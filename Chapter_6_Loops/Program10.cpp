// Chapter 6: Program 10

/***
Write a C++ program to read a collection of integer numbers. Your program should terminate when a value 999 is read. Display all information
**/

# include <iostream>
# include <string>
using namespace std;

int main(void)
{
	int Number = 0;
	
	cout << "\n\t This program runs a loop until a value of 999 is read \n";
	
	while (Number  != 999)
	{
		cout << "\n\t Pleae enter an integer number \t";
		cin >> Number;

		cout << "\n Number enter was " << Number << endl;
	}
	
	system("pause");
	return 0;
}

// Code written by: Othneil Drew
