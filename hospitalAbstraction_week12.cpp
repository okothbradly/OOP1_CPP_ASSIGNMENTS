/*
 * ============================================================
 * BCS-05-0044/2025
 * Bradly Okoth
 * 
 * Hospital Management System (Abstraction)
 * ============================================================
 * Description:
 *   Uses an abstract class with a pure virtual function to
 *   hide implementation details. Each staff type computes
 *   salary differently.
 *
 *   Abstract class : MedicalStaff  (pure virtual calculateSalary())
 *   Derived classes:
 *     • Doctor  → Basic Salary + Allowance
 *     • Nurse   → Basic Salary + Overtime Pay
 * ============================================================
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


class MedicalStaff {
protected:
    string staffName; // Protected: accessible in derived classes
    string staffID;

public:
    //  Pure virtual function (must be implemented by subclasses)
    virtual void calculateSalary() = 0;

    //  Non-virtual function (shared by all staff types) 
    void displayDetails() {
        cout << left << setw(22) << "Staff Name" << ": " << staffName << endl;
        cout << left << setw(22) << "Staff ID"   << ": " << staffID   << endl;
    }

    // Virtual destructor 
    virtual ~MedicalStaff() {}
};


class Doctor : public MedicalStaff {
private:
    double basicSalary; // Doctor's basic monthly salary
    double allowance;   // Doctor's additional allowance

public:
    // Constructor to initialise doctor details
    Doctor(string name, string id, double salary, double allw) {
        staffName   = name;
        staffID     = id;
        basicSalary = salary;
        allowance   = allw;
    }

    // Implementation of pure virtual function
    void calculateSalary() override {
        double netSalary = basicSalary + allowance;

        cout << "\n========================================" << endl;
        cout << "           DOCTOR PAYSLIP              " << endl;
        cout << "========================================" << endl;
        cout << fixed << setprecision(2);
        displayDetails();
        cout << left << setw(22) << "Basic Salary"
             << ": KES " << basicSalary << endl;
        cout << left << setw(22) << "Allowance"
             << ": KES " << allowance   << endl;
        cout << "----------------------------------------" << endl;
        cout << left << setw(22) << "Net Salary"
             << ": KES " << netSalary   << endl;
        cout << "========================================" << endl;
    }
};


class Nurse : public MedicalStaff {
private:
    double basicSalary;  // Nurse's basic monthly salary
    double overtimePay;  // Overtime pay earned

public:
    // Constructor to initialise nurse details
    Nurse(string name, string id, double salary, double overtime) {
        staffName   = name;
        staffID     = id;
        basicSalary = salary;
        overtimePay = overtime;
    }

    // Implementation of pure virtual function
    void calculateSalary() override {
        double netSalary = basicSalary + overtimePay;

        cout << "\n========================================" << endl;
        cout << "           NURSE PAYSLIP               " << endl;
        cout << "========================================" << endl;
        cout << fixed << setprecision(2);
        displayDetails();
        cout << left << setw(22) << "Basic Salary"
             << ": KES " << basicSalary << endl;
        cout << left << setw(22) << "Overtime Pay"
             << ": KES " << overtimePay << endl;
        cout << "----------------------------------------" << endl;
        cout << left << setw(22) << "Net Salary"
             << ": KES " << netSalary   << endl;
        cout << "========================================" << endl;
    }
};

int main() {
    cout << "========================================" << endl;
    cout << "   HOSPITAL MANAGEMENT SYSTEM          " << endl;
    cout << "========================================" << endl;

    MedicalStaff* staffPtr; // Abstract base class pointer

    // Create a Doctor object and calculate salary via pointer
    Doctor doc("Dr. Amina Osei", "DR-001", 120000.00, 30000.00);
    staffPtr = &doc;
    staffPtr->calculateSalary();

    // Create a Nurse object and calculate salary via pointer
    Nurse nurse("Mary Njoki", "NR-045", 55000.00, 8500.00);
    staffPtr = &nurse;
    staffPtr->calculateSalary();

    return 0;
}