/*
*BCS-05-0044/2025
*Bradly Okoth

*Borrowed Books Storage Program
*This program allows users to store the titles of borrowed books in a text file named "borrowed_books.txt". 
*Each time the program is run, it appends a new book title to the file. The program prompts the user to enter a book title and saves it to the file. If the file cannot be opened, an error message is displayed.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("borrowed_books.txt", ios::app); // Append mode
    string bookTitle;
    
    if (outFile.is_open()) {
        cout << "Enter Book Title to store: ";
        getline(cin, bookTitle);
        outFile << bookTitle << endl;
        cout << "Book title successfully stored!" << endl;
        outFile.close();
    } else {
        cout << "Error opening file!" << endl;
    }
    return 0;
}