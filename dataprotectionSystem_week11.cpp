/*
 * ============================================================
 * BCS-05-0044/2025
 * Bradly Okoth
 * 
 * Employee Salary Management System (Encapsulation and Data Protection)
 * ============================================================
 * Description:
 * This program defines an Employee class that encapsulates employee details and provides methods to set and retrieve those details.
 * It calculates the net salary by applying a 10% tax deduction on the basic salary.
 * The program demonstrates data protection by keeping employee details private and providing public methods for interaction.
 */


#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
    string employeeName;
    string employeeID;
    double basicSalary;

    public:
    void setEmployeeDetails(string name, string id, double salary) {
        employeeName = name;
        employeeID = id;
        basicSalary = salary;
    }

    double calculateNetSalary () {
        return basicSalary + (basicSalary * 0.1); // 10% tax
    }

    void displayEmployeeDetails() {
        cout << "\n========================================" << endl;
        cout << "         EMPLOYEE DETAILS               " << endl;
        cout << "========================================" << endl;
        cout << "Name       : " << employeeName << endl;
        cout << "ID         : " << employeeID   << endl;
        cout << "Basic Salary: KES " << basicSalary << endl;
        cout << "Net Salary  : KES " << calculateNetSalary() << endl;
        cout << "========================================" << endl;
    }

    };

    int main() {
    Employee emp;
    emp.setEmployeeDetails("David Ochieng", "EMP1738", 60000.0);
    emp.displayEmployeeDetails();
    return 0;
}

    