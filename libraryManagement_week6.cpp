/*
 * ============================================================
 * OOP 1 (C++) – Week 6, Task 1
 * Library Book Management System (Classes and Objects)
 * ============================================================
 * Description:
 *   Models a library book using a class. Demonstrates input,
 *   borrowing (reduces available copies), and display of
 *   updated book information.
 * ============================================================
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// =============================================================
// Class: Book
// Represents a library book with title, author and copies.
// =============================================================
class Book {
private:
    string title;           // Title of the book
    string author;          // Author of the book
    int    copiesAvailable; // Number of copies currently available

public:
    // ── inputDetails() ─────────────────────────────────────
    // Prompts the user to enter book information.
    void inputDetails() {
        cout << "Enter book title             : ";
        cin.ignore();
        getline(cin, title);

        cout << "Enter author name            : ";
        getline(cin, author);

        cout << "Enter number of copies       : ";
        cin  >> copiesAvailable;
    }

    // ── borrowBook() ───────────────────────────────────────
    // Reduces available copies by 1 when a book is borrowed.
    // Prevents borrowing when no copies are available.
    void borrowBook() {
        if (copiesAvailable > 0) {
            copiesAvailable--;
            cout << "\nBook borrowed successfully." << endl;
        } else {
            cout << "\nSorry, no copies of \"" << title
                 << "\" are currently available." << endl;
        }
    }

    // ── displayDetails() ───────────────────────────────────
    // Displays current book information.
    void displayDetails() {
        cout << "\n========================================" << endl;
        cout << "           BOOK DETAILS                " << endl;
        cout << "========================================" << endl;
        cout << left << setw(24) << "Title"
             << ": " << title           << endl;
        cout << left << setw(24) << "Author"
             << ": " << author          << endl;
        cout << left << setw(24) << "Copies Available"
             << ": " << copiesAvailable << endl;
        cout << "========================================" << endl;
    }
};

// =============================================================
// main()
// Creates a Book object and demonstrates all member functions.
// =============================================================
int main() {
    Book myBook; // Create a Book object

    cout << "========================================" << endl;
    cout << "    LIBRARY BOOK MANAGEMENT SYSTEM     " << endl;
    cout << "========================================" << endl;

    // Step 1: Input book details
    myBook.inputDetails();

    // Step 2: Display details before borrowing
    cout << "\n--- Book details before borrowing ---";
    myBook.displayDetails();

    // Step 3: Borrow the book
    myBook.borrowBook();

    // Step 4: Display updated details after borrowing
    cout << "\n--- Book details after borrowing ---";
    myBook.displayDetails();

    return 0;
}