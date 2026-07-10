/*
 * Payroll System for Week 3 Task 2
 * ============================================================
 * Description:
 *   Calculates the payroll for an employee based on their basic salary and overtime hours.
 *
 *   The program prompts the user to enter employee details, calculates the overtime pay,
 *   and displays the complete payslip.
 *
 *  BCS-05-0044/2025
 *  Bradly Okoth
 *
 */

#include <iostream>
#include <string>
using namespace std;

string empName;
double basicSalary, overtimeHours, overtimePay, netSalary;

void getEmployeeDetails() {
    cout << "========================================" << endl;
    cout << "     EMPLOYEE PAYROLL - DATA ENTRY      " << endl;
    cout << "========================================" << endl;

    cout << "Enter Employee Name: ";
    getline(cin, empName);
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;
    cout << "Enter Overtime Hours: ";
    cin >> overtimeHours;
}

void calculateOvertimePay() {
    double ratePerHour = 500; // Assuming a standard rate for overtime pay
    overtimePay = overtimeHours * ratePerHour;
}

void calculateNetSalary() {
    netSalary = basicSalary + overtimePay;
}

void displayPayslip() {
      cout << endl;
    cout << "========================================" << endl;
    cout << "              EMPLOYEE PAYSLIP          " << endl;
    cout << "========================================" << endl;
    
    cout << "Name: " << empName << endl;
    cout << "Basic Salary: Ksh " << basicSalary << endl;
    cout << "Overtime Pay: Ksh " << overtimePay << endl;
    cout << "Net Salary: Ksh " << netSalary << endl;
}

int main() {
    getEmployeeDetails();
    calculateOvertimePay();
    calculateNetSalary();
    displayPayslip();
    return 0;
}