// Chapter 6 - Program 14

/***
	Write a C++ program to find the GPA of eight students. Each student is taking four courses. There are three exams per course. Find the average of each course for each student. Display average grade for each course for each student and the GPA of each student.
**/

# include <iostream>
# include <math.h>
# include <iomanip>
using namespace std;

int main(void) {

	int LCV, Size = 8;
	float Exam_Grade = 0, Course_Grade, GPA = 0;

	cout << "\n\t This program displays average course grade and GPA given three exams for each course \n";

	// Start loop to calculate for each student (total of Size)
	for (LCV = 0; LCV < Size; LCV++) {
		
		cout << "\n\t CALCULATING INFORMATION FOR STUDENT #" << LCV + 1 << "\n";

		int i = 0;
		Course_Grade = 0;

		while (i < 3) {

			cout << "\t Enter grade for course #" << i + 1 << ": ";
			cin >> Course_Grade;
			Exam_Grade += Course_Grade;
			i++;
		}

		Course_Grade = Exam_Grade / 3;
		GPA = (Course_Grade / 20) - 1;
		
		// Display average course grade and gpa for student
		cout << "\n\t Average Course Grade = " << Course_Grade << endl;
		cout << "\t GPA = " << fixed << setprecision(2) << GPA << endl;
	}

	system("pause");
	return 0;
}

// Code written by: Othneil Drew
