/* Student Grading System
*Using an if-else ladder to assign grades based on exam marks.
*Bradly Okoth
*BCS-05-0044/2025
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    double marks;
    char grade;

      // ── Input section ──────────────────────────────────────
    cout << "========================================" << endl;
    cout << "       STUDENT GRADING SYSTEM           " << endl;
    cout << "========================================" << endl;

    cout << "Enter Student Name: ";
    getline(cin, studentName);
    cout << "Enter Exam Marks: ";
    cin >> marks;

    // Validate marks are within the sensible range
    if (marks < 0 || marks > 100) {
        cout << "Error: Marks must range between 0 and 100." << endl;
        return 1;
    }

    // Assign grades using an if-else ladder
    if (marks >= 70 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 60 && marks < 70) {
        grade = 'B';
    } else if (marks >= 50 && marks < 60) {
        grade = 'C';
    } else if (marks >= 40 && marks < 50) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    // ── Display result ─────────────────────────────────────
    cout << endl;
    cout << "========================================" << endl;
    cout << "             GRADE REPORT               " << endl;
    cout << "========================================" << endl;

    cout << "\nStudent Name: " << studentName << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}