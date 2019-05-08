// Exam 3 - Program 1

/***
	Write a C++ program to read 234 students grades. Each student is taking four courses. There are five exams per course. Find the average grade for each course for each student.
**/

# include <iostream>
# include <math.h>
# include <iomanip>
using namespace std;

float Read_Data(void), Compute_Average_Grade(float);;
void Display_Data(float);

int main(void) {

	int Size = 1;
	float Exam_Grade, Course_Grade;

	cout << "\n\t This program displays average course grade and GPA given three exams for each course \n";

	// Start loop to calculate for each student (total of Size)
	for (int LCV = 1; LCV <= Size; LCV++) {

		cout << "\n\t CALCULATING INFORMATION FOR STUDENT #" << LCV << "\n";

		
		for (int LCV = 0; LCV < 4; LCV++) {

			cout << "\n\t Course #" << LCV + 1 << "\n";

			int i = 0;
			Course_Grade = 0;
			Exam_Grade = 0;

			while (i < 5) {

				cout << "\t Enter grade for exam #" << i + 1 << ": ";
				Course_Grade = Read_Data();
				Exam_Grade += Course_Grade;
				i++;
			}

			Course_Grade = Compute_Average_Grade(Exam_Grade);

			// Display average course
			cout << "\n\t Average Course Grade = " << Course_Grade << "%" << endl;
		}
		
	}

	system("pause");
	return 0;
}

// Code written by: Othneil Drew

float Read_Data() {
	int data;
	cin >> data;
	return data;
}

void Display_Data(float data) {
	cout << data << endl;
}

float Compute_Average_Grade(float grade) {
	return grade / 5;
}
