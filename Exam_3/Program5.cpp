// Exam 3 - Program 5

/***
	Write a C++ program to read an integer number. Find factorial of the number.
**/

# include <iostream>
using namespace std;

int Read_Data(void), Compute_Factorial(int);
void Display_Data(int);

int Factorial = 0;

int main(void) {

	int Number;

	cout << "\n\t This program finds the factorial of a number \n";
	cout << "\n\t To get started, please enter an integer number \n";
	Number = Read_Data();
	Factorial = Number;
	
	Factorial = Compute_Factorial(Number);

	cout << Number << "! = ";
	Display_Data(Factorial);

	system("pause");
	return 0;
}

// Code written by: Othneil Drew

int Read_Data() {
	int data;
	cin >> data;
	return data;
}

void Display_Data(int data) {
	cout << data << endl;
}

int Compute_Factorial(int number) {
	int Size = 1;

	while (Size != number) {
		Factorial *= Size;
		Size++;
	}
	return Factorial;
}
