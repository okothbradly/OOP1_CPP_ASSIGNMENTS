/*
 * ============================================================
 * BCS-05-0044/2025
 * Bradly Okoth
 * 
 * Savings Withdrawal System (while loop)
 * ============================================================
 * Description:
 *   Allows a customer to repeatedly withdraw money from their
 *   account. The while loop continues as long as the balance
 *   is sufficient. It stops when:
 *     • The withdrawal amount exceeds the current balance, OR
 *     • The balance reaches zero.
 * ============================================================
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // ── Variable declarations ──────────────────────────────
    double balance;          // Current account balance
    double withdrawalAmount; // Amount the customer wants to withdraw

    // ── Input initial balance ──────────────────────────────
    cout << "========================================" << endl;
    cout << "     MOBILE MONEY WITHDRAWAL SYSTEM     " << endl;
    cout << "========================================" << endl;
    cout << fixed << setprecision(2);

    cout << "Enter your account balance (KES) : ";
    cin  >> balance;

    cout << "\nStarting balance: KES " << balance << endl;
    cout << "----------------------------------------" << endl;

    // ── Withdrawal loop ────────────────────────────────────
    // Continue only while the balance is positive
    while (balance > 0) {
        cout << "\nEnter withdrawal amount (KES) : ";
        cin  >> withdrawalAmount;

        // Check if requested amount is valid
        if (withdrawalAmount <= 0) {
            cout << "Invalid amount. Please enter a positive value." << endl;
            continue; // Ask again
        }

        if (withdrawalAmount > balance) {
            // Insufficient funds – stop loop
            cout << "Insufficient balance." << endl;
            cout << "Remaining balance : KES " << balance << endl;
            cout << "Transaction declined. Exiting." << endl;
            break;
        }

        // Deduct withdrawal amount from balance
        balance -= withdrawalAmount;

        cout << "Withdrawal successful!" << endl;
        cout << "Remaining balance : KES " << balance << endl;

        // Stop if balance is now zero
        if (balance == 0) {
            cout << "Your account balance is now zero. Exiting." << endl;
            break;
        }
    }

    cout << "========================================" << endl;
    cout << "      Thank you. Have a nice day!       " << endl;
    cout << "========================================" << endl;

    return 0;
}