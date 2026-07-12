/*
 * ============================================================
 * BCS-05-0044/2025
 * Bradly Okoth
 * 
 * Password Verification System (do-while loop)
 * ============================================================
 * Description:
 *   Stores predefined login credentials and uses a do-while
 *   loop to repeatedly prompt the user until the correct
 *   username and password are entered.
 *
 *   • Correct credentials → "Access Granted", loop exits.
 *   • Wrong credentials   → "Incorrect credentials, try again"
 * ============================================================
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    // ── Predefined credentials ─────────────────────────────
    const string CORRECT_USERNAME = "admin";
    const string CORRECT_PASSWORD = "pass123";

    // ── Variable declarations ──────────────────────────────
    string enteredUsername; // Username entered by the user
    string enteredPassword; // Password entered by the user
    bool   accessGranted = false; // Tracks login success

    cout << "========================================" << endl;
    cout << "       SECURE LOGIN SYSTEM              " << endl;
    cout << "========================================" << endl;

    // ── Login loop (always runs at least once) ─────────────
    do {
        cout << "\nUsername : ";
        cin  >> enteredUsername;

        cout << "Password : ";
        cin  >> enteredPassword;

        // Check entered credentials
        if (enteredUsername == CORRECT_USERNAME &&
            enteredPassword == CORRECT_PASSWORD) {
            accessGranted = true;
            cout << "\n>>> Access Granted. Welcome, "
                 << enteredUsername << "! <<<" << endl;
        } else {
            cout << "Incorrect credentials, try again." << endl;
        }

    } while (!accessGranted); // Loop until correct credentials

    cout << "========================================" << endl;

    return 0;
}