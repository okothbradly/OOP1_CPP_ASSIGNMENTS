/*
 * ============================================================
 * BCS-05-0044/2025
 * Bradly Okoth
 * 
 * School Management System (Inheritance)
 * ============================================================
 * Description:
 * This program demonstrates the use of inheritance in C++.
 * It defines a base class `Person` and a derived class `Student`.
 * The `Student` class inherits from the `Person` class and adds
 * additional attributes specific to students.
 */


#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    void displayPerson() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Student : public Person {
public:
    string admissionNumber;
    string studentClass;

    void displayStudent() {
        displayPerson();
        cout << "Admission Number: " << admissionNumber << "\nClass: " << studentClass << endl;
    }
};

int main() {
    Student s1;
    cout << "Enter Name: ";
    getline(cin, s1.name);
    cout << "Enter Age: ";
    cin >> s1.age;
    cin.ignore();
    cout << "Enter Admission Number: ";
    getline(cin, s1.admissionNumber);
    cout << "Enter Class: ";
    getline(cin, s1.studentClass);

    cout << "\n--- Student Details ---" << endl;
    s1.displayStudent();
    return 0;
}