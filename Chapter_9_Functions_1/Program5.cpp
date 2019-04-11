// Chapter 9: Program 5

/***
Write a C++ program to ready today's temperature as Fahrenheit. Write a function to accept this number and convert it to Celsius.
**/

# include <iostream>;
# include <iomanip>;
using namespace std;

// Function prototype
double getData();
double convertToCelsius(double);

int main(void) {

	double Number;
	double Celsius;

	cout << "\n This program converts the current temperature to Celsius \n";
	cout << "\n Please enter the temperature \n";
	Number = getData();

	Celsius = convertToCelsius(Number);

	// Display information
	cout << Number << fixed << setprecision(2) <<" converted to Celsius = " << Celsius << endl;
	
	system("pause");
	return 0;
}

// FUNCTIONS

/* Reads an integer input value from user */
double getData(void) {
	double input;
	cin >> input;
	return input;
}

/* Converts fahrenheit to celsius */
double convertToCelsius(double fahrenheit) {
	return (5 * (fahrenheit - 32)) / 9;
}


// Code written by: Othneil Drew
