/*
 * ============================================================
 * BCS-05-0044/2025
 * Bradly Okoth
 * Employee Bonus System (for loop)
 * ============================================================
 * Description:
 *   Uses a for loop to process 5 employees. For each employee,
 *   a 5% bonus is calculated and added to the basic salary to
 *   get the total salary. A summary report is displayed.
 *
 *   Formulas:
 *     Bonus        = 0.05 × Basic Salary
 *     Total Salary = Basic Salary + Bonus
 * ============================================================
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // ── Constants ──────────────────────────────────────────
    const int    NUM_EMPLOYEES = 5;
    const double BONUS_RATE    = 0.05; // 5% bonus

    // ── Variable declarations ──────────────────────────────
    string name;         // Employee name
    double basicSalary;  // Employee basic salary
    double bonus;        // Calculated bonus
    double totalSalary;  // Basic salary + bonus

    cout << "========================================" << endl;
    cout << "            BONUS CALCULATION         " << endl;
    cout << "========================================" << endl;

    // ── Process each employee using a for loop ────────────────────────────
    for (int i = 1; i <= NUM_EMPLOYEES; i++) {
        cout << "\n--- Employee " << i << " ---" << endl;

        cout << "Enter employee name      : ";
        cin.ignore(); // Clear leftover newline before getline
        getline(cin, name);

        cout << "Enter basic salary (KES) : ";
        cin  >> basicSalary;

        // Calculate bonus and total salary
        bonus       = BONUS_RATE * basicSalary;
        totalSalary = basicSalary + bonus;

        // Display report for this employee
        cout << endl;
        cout << "----------------------------------------" << endl;
        cout << fixed << setprecision(2);
        cout << left << setw(22) << "Employee Name"
             << ": " << name         << endl;
        cout << left << setw(22) << "Basic Salary"
             << ": KES " << basicSalary  << endl;
        cout << left << setw(22) << "Bonus (5%)"
             << ": KES " << bonus        << endl;
        cout << left << setw(22) << "Total Salary"
             << ": KES " << totalSalary  << endl;
        cout << "----------------------------------------" << endl;
    }

    cout << "\n========================================" << endl;
    cout << "       END OF BONUS REPORT              " << endl;
    cout << "========================================" << endl;

    return 0;
}