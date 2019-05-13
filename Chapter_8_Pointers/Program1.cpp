// Chapter 8 - Program 1

/***
Write a program to read two characters and store them in a memory location addressed by variables called Letter1 and Letter2 type of char. Declare pointer variables called Letter1Ptr and Letter2Ptr type of char. Assign the address of Letter1 variable to the Letter1Ptr and Letter2 variable to the Letter2Ptr. Display the content of memory locations directly by Letter1 and Letter2 variable and indirectly by Letter1Ptr and Letter2Ptr.
**/

# include <iostream>
# include <string>
using namespace std;
int main(void)
{
	char Letter1, Letter2, *Letter1Ptr, *Letter2Ptr;
	Letter1Ptr = &Letter1;
	Letter2Ptr = &Letter2;

	cout << "\n Please Enter a Character \n" << endl;
	cin >> *Letter1Ptr;
	cout << "\n Please Enter a second Character \n" << endl;
	cin >> *Letter2Ptr;
	cout << "The content of direct memory location is " << Letter1 << " and " << Letter2 << endl;
	cout << "The content of indirect memory location is " << *Letter1Ptr << " and " << *Letter2Ptr << endl;
	return 0;
}

// Code written by: Othneil Drew
// GitHub - https://github.com/othneildrew/CPP-Programming-Practices


