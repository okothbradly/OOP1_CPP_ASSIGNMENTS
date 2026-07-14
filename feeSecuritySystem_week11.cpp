/* Student Fee Management System (Encapsulation)
* ============================================================
*BCS-05-0044/2025
* Bradly Okoth
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudentData(string name, string adminNo, double balance) {
        studentName = name;
        admissionNumber = adminNo;
        feeBalance = balance;
    }

    void makePayment(double amount) {
        if (amount <= feeBalance && amount > 0) {
            feeBalance -= amount;
            cout << "\nPayment of Ksh " << amount << " successful!" << endl;
        } else {
            cout << "\nInvalid payment amount!" << endl;
        }
    }

    void displayStatus() {
        cout << "Student: " << studentName <<  endl;
        cout << "Admin No: " << admissionNumber << endl;
        cout << "Fee Balance: Ksh " << feeBalance << endl;
    }
};

int main() {
    Student s;
    s.inputStudentData("Jane Wanjiku", "S1029", 25000.0);
    s.displayStatus();
    s.makePayment(10000.0);
    s.displayStatus();
    return 0;
}