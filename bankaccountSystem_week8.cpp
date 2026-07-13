/*
 * ============================================================
 * BCS-05-0044/2025
 * Bradly Okoth
 * 
 * Bank Account System (Constructors and Destructors)
 * ============================================================
 * Description:
 *   Manages a bank account using a class with a constructor
 *   (prints "Account successfully created") and a destructor
 *   (prints "Account closed successfully").
 * ============================================================
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// =============================================================
// Class: BankAccount
// =============================================================
class BankAccount {
private:
    string accountHolderName; // Name of the account holder
    string accountNumber;     // Unique account number
    double accountBalance;    // Current balance in KES

public:
    // ── Constructor ────────────────────────────────────────
    // Initializes all data members and confirms account creation.
    BankAccount(string name, string accNumber, double balance) {
        accountHolderName = name;
        accountNumber     = accNumber;
        accountBalance    = balance;

        cout << ">>> Account successfully created <<<" << endl;
    }

    // ── displayAccount() ───────────────────────────────────
    // Displays the full account details.
    void displayAccount() {
        cout << "\n========================================" << endl;
        cout << "         BANK ACCOUNT DETAILS          " << endl;
        cout << "========================================" << endl;
        cout << fixed << setprecision(2);
        cout << left << setw(24) << "Account Holder"
             << ": " << accountHolderName << endl;
        cout << left << setw(24) << "Account Number"
             << ": " << accountNumber      << endl;
        cout << left << setw(24) << "Account Balance"
             << ": KES " << accountBalance << endl;
        cout << "========================================" << endl;
    }

    // ── Destructor ─────────────────────────────────────────
    // Automatically called when the object goes out of scope.
    ~BankAccount() {
        cout << "\n>>> Account closed successfully <<<" << endl;
    }
};

// =============================================================
// main()
// Creates a BankAccount object and displays its details.
// =============================================================
int main() {
    cout << "========================================" << endl;
    cout << "        BANK ACCOUNT SYSTEM            " << endl;
    cout << "========================================" << endl;

    // Create a BankAccount object (constructor runs automatically)
    BankAccount account("Jane Wanjiku", "KCB-20241001", 75000.00);

    // Display the account details
    account.displayAccount();

    // When main() exits, the destructor runs automatically

    return 0;
}