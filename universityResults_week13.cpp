/*
*BCS-05-0044/2025
*Bradly Okoth

* University Results Reader
* This program reads student results from a binary file named "results.dat".
* It displays the names and marks of students stored in the file.
*/

#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    char name[50];
    char regNum[20];
    int marks;
};

int main() {
    ifstream inFile("results.dat", ios::binary);
    Student s;

    if (inFile.is_open()) {
        cout << "--- Student Results ---" << endl;
        while (inFile.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
            cout << "Name: " << s.name << " | Marks: " << s.marks << endl;
        }
        inFile.close();
    } else {
        cout << "Error opening results.dat (Make sure the file exists first!)." << endl;
    }
    return 0;
}