// Chapter 3: Program 2
// Write a program to read three student's first name and last name
// And display them in two different lines. Use string type.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(void)
{
	// Declare variables
	string student1_Fname, student1_Lname, 
		student2_Fname, student2_Lname,
		student3_Fname, student3_Lname;

	// Get and assign names for each student
	cout << "\n\t What is the first name of the first student?";
	cin >> student1_Fname;
	cout << "\n\t What is the last name of the first student?";
	cin >> student1_Lname;

	cout << "\n\t What is the first name of the second student?";
	cin >> student2_Fname;
	cout << "\n\t What is the last name of the second student?";
	cin >> student2_Lname;

	cout << "\n\t What is the first name of the third student?";
	cin >> student3_Fname;
	cout << "\n\t What is the last name of the third student?";
	cin >> student3_Lname;

	// Display each student's first and last name
	cout << "\n\t The first student's name is " << student1_Fname << " " << student1_Lname << " while the second student is " 
		<< student2_Fname << " " << student2_Lname << endl;
	cout << "\n\t The last student's name is " << student3_Fname << " " << student3_Lname << endl;

	system("pause");
	return 0;

	// Code written by: Othneil Drew

}
