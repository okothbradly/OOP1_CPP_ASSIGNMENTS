/*
 * ============================================================
 * Admission Decision Program
 * BCS-05-0044/2025
 * Bradly Okoth
 * 
 * ============================================================
 * Description:
 *   Determines college admission eligibility using nested if
 *   statements based on age and exam score criteria.
 *
 *   Rules:
 *     Age >= 18 AND Score >= 50    "Admitted"
 *     Age >= 18 AND Score < 50     "Not Admitted: Low Score"
 *     Age < 18                     "Not Admitted: Underage"
 * ============================================================
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // ── Variable declarations ──────────────────────────────
    string studentName; // Student's name
    int    age;         // Student's age
    double examScore;   // Exam score (0.0 – 100.0)

    // ── Input section ──────────────────────────────────────
    cout << "============================================" << endl;
    cout << "    COLLEGE ADMISSION PROCESSING SYSTEM    " << endl;
    cout << "============================================" << endl;

    cout << "Enter student name  : ";
    getline(cin, studentName);

    cout << "Enter age           : ";
    cin  >> age;

    cout << "Enter exam score    : ";
    cin  >> examScore;

    // ── Nested if decision logic ───────────────────────────
    string decision; // Will hold the admission outcome

    if (age >= 18) {
        // First condition met: check academic requirement
        if (examScore >= 50) {
            decision = "Admitted";
        } else {
            decision = "Not Admitted: Low Score";
        }
    } else {
        // Age requirement not met
        decision = "Not Admitted: Underage";
    }

    // ── Display admission result ───────────────────────────
    cout << endl;
    cout << "============================================" << endl;
    cout << "          ADMISSION DECISION REPORT        " << endl;
    cout << "============================================" << endl;
    cout << left << setw(20) << "Student Name" << ": " << studentName << endl;
    cout << left << setw(20) << "Age"          << ": " << age         << endl;
    cout << fixed << setprecision(2);
    cout << left << setw(20) << "Exam Score"   << ": " << examScore   << endl;
    cout << "--------------------------------------------" << endl;
    cout << left << setw(20) << "Decision"     << ": " << decision    << endl;
    cout << "============================================" << endl;

    return 0;
}