// Exam 3 - Program 1

/***
	Write a C++ program to read 234 students grades. Each student is taking four courses. There are five exams per course. Find the average grade for each course for each student.
**/

# include <iostream>
# include <math.h>
# include <iomanip>
using namespace std;

int main(void) {

	int LCV, Size = 234;
	float Exam_Grade = 0, Course_Grade, GPA = 0;

	cout << "\n\t This program displays average course grade and GPA given three exams for each course \n";

	// Start loop to calculate for each student (total of Size)
	for (LCV = 0; LCV < Size; LCV++) {

		cout << "\n\t CALCULATING INFORMATION FOR STUDENT #" << LCV + 1 << "\n";

		int i = 0;
		Course_Grade = 0;

		while (i < 5) {

			cout << "\t Enter grade for course #" << i + 1 << ": ";
			cin >> Course_Grade;
			Exam_Grade += Course_Grade;
			i++;
		}

		Course_Grade = Exam_Grade / 5;

		// Display average course grade and gpa for student
		cout << "\n\t Average Course Grade = " << Course_Grade << endl;
		cout << "\t GPA = " << fixed << setprecision(2) << GPA << endl;
	}

	system("pause");
	return 0;
}

// Code written by: Othneil Drew
