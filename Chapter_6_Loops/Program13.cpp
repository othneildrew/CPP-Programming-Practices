// Chapter 6: Program 13

/***
	Fibonacci number starts with a couple of male and female. The sum is initially two. In the next generation, the sum will be 3 which is the sum of the last two number. The following generation will be the sum of the last two generations, which is 3 + 5 = 5, and so on. Your program should find the result (answer) after the 15th generation. (Use while loop).
**/

# include <iostream>
using namespace std;

int main(void) {

	int Num1 = 0, Num2 = 1, Result = 0, Generation = 15;

	cout << "\n\t This program finds the fibonacci number after the 15th generation \n";

	while (Result <= Generation) {
		Num1 = Num2;
		Num2 = Result;
		Result = Num1 + Num2;
	}

	cout << "Fibonacci Number (15th generation) = " << Result << endl;

	system("pause");
	return 0;
}

// Code written by: Othneil Drew
