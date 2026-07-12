/*
*   BCS-05-0044/2025
*   Bradly Okoth
*   Fee Management System (Classes and Objects)
*   ============================================================
*/


#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string studentName;
    string admissionNumber;
    double feeBalance;

    void inputStudent() {
        cout << "Enter Student Name: ";
        getline(cin, studentName);
        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);
        cout << "Enter Fee Balance: Ksh ";
        cin >> feeBalance;
    }

    void makePayment() {
        double payment;
        cout << "\nEnter Payment Amount: Ksh ";
        cin >> payment;
        if (payment <= feeBalance) {
            feeBalance -= payment;
            cout << "Payment successful!" << endl;
        } else {
            cout << "Overpayment! Check balance." << endl;
        }
    }

    void displayStatus() {
        cout << "\n--- Fee Status ---" << endl;
        cout << "Name: " << studentName << "\nAdmin No: " << admissionNumber << "\nRemaining Balance: Ksh " << feeBalance << endl;
    }
};

int main() {
    Student s1;
    s1.inputStudent();
    s1.displayStatus();
    s1.makePayment();
    s1.displayStatus();
    return 0;
}