// Chapter 8 - Program 10

/***
	Write a program to read and integer number, a real number, a name, and a character. Use void pointer to access the content of each of the four memory locations. 
**/
# include <iostream>
# include <string>
using namespace std;
int main(void)
{
	void *Pointer;
	int Num1;
	float Num2;
	string Nam1;
	char Letter;

	// Integer number
	Pointer = &Num1;

	cout << "\n Please enter an integer number:" << endl;
	cin >> Num1;
	cout << "\t The Address of memory location addressed by variable Num1" << endl;
	cout << &Num1;
	cout << "\t The Address of same memory location addressed by Pointer" << endl;
	cout << Pointer << endl;
	cout << *static_cast<int*>(Pointer) << endl;
	cout << "\t The Number referenced by variable Num1 is: ";
	cout << Num1 << endl;

	// Real number
	Pointer = &Num2;

	cout << "\n Please enter a real number:" << endl;
	cin >> Num2;
	cout << "\t The Address of memory location addressed by variable Num2" << endl;
	cout << &Num2 << endl;
	cout << "\t The Address of memory location adressed by Pointer" << endl;
	cout << Pointer << endl;
	cout << "\t The output referenced by Pointer to Num2 is:" << endl;
	cout << *static_cast<float*>(Pointer) << endl;
	cout << "\t The Number referenced by variable Num2 is:" << endl;
	cout << Num2 << endl;

	// Name
	Pointer = &Nam1;

	cout << "\n Please enter a Name:" << endl;
	cin >> Nam1;
	cout << "\t The Address of memory location addressed by variable Nam1" << endl;
	cout << &Nam1;
	cout << "\t The Address of memory location addressed by Pointer:" << endl;
	cout << Pointer << endl;
	cout << "\t The output referenced by Pointer to Nam1 is:" << endl;
	cout << *static_cast<string*>(Pointer) << endl;
	cout << "\t The Name referenced by variable Nam1 is:" << endl;
	cout << Nam1 << endl;

	// Character
	Pointer = &Letter;

	cout << "\n Please enter a Letter:" << endl;
	cin >> Letter;
	cout << "\t The Address of memory location addressed by variable Lett" << endl;
	cout << &Letter;
	cout << "\t The Address of memory location addressed by Pointer:" << endl;
	cout << Pointer << endl;
	cout << "\t The output referenced by Pointer to Lett is:" << endl;
	cout << *static_cast<char*>(Pointer) << endl;
	cout << "\t The Letter referenced by variable Lett is:" << endl;
	cout << Letter << endl;

	system("pause");
	return 0;
}

// Code written by: Othneil Drew
// GitHub - https://github.com/othneildrew/CPP-Programming-Practices
