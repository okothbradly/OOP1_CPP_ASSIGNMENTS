/*
*BCS-05-0044/2025
* Bradly Okoth
*
 * ============================================================
 * Week 10, Task 1
 * Payment System (Function Overloading – Compile-time Polymorphism)
 * ============================================================
 * Description:
 *   Demonstrates compile-time (static) polymorphism via
 *   function overloading. The class Payment provides three
 *   overloaded versions of processPayment():
 *
 *   1. processPayment(amount)               → Cash payment
 *   2. processPayment(amount, fee)          → Card payment
 *   3. processPayment(amount, fee, discount)→ Mobile payment
 * ============================================================
 */

#include <iostream>
#include <iomanip>
using namespace std;


class Payment {
public:
    // ── Overload 1: Cash Payment ────────────────────────────
    // Accepts a single integer amount.
    void processPayment(int amount) {
        cout << "--- CASH PAYMENT ---" << endl;
        cout << fixed << setprecision(2);
        cout << "Amount            : KES " << amount << ".00" << endl;
        cout << "Final Payment     : KES " << amount << ".00" << endl;
        cout << "--------------------" << endl;
    }

    // ── Overload 2: Card Payment ────────────────────────────
    // Accepts amount and a transaction fee.
    void processPayment(double amount, double transactionFee) {
        double finalAmount = amount + transactionFee;

        cout << "--- CARD PAYMENT ---" << endl;
        cout << fixed << setprecision(2);
        cout << "Amount            : KES " << amount         << endl;
        cout << "Transaction Fee   : KES " << transactionFee << endl;
        cout << "Final Payment     : KES " << finalAmount    << endl;
        cout << "--------------------" << endl;
    }

    // ── Overload 3: Mobile Payment ──────────────────────────
    // Accepts amount, fee and a discount.
    void processPayment(double amount, double fee, double discount) {
        double totalBeforeDiscount = amount + fee;
        double finalAmount         = totalBeforeDiscount - discount;

        cout << "--- MOBILE PAYMENT ---" << endl;
        cout << fixed << setprecision(2);
        cout << "Amount            : KES " << amount              << endl;
        cout << "Transaction Fee   : KES " << fee                 << endl;
        cout << "Discount          : KES " << discount            << endl;
        cout << "Final Payment     : KES " << finalAmount         << endl;
        cout << "----------------------" << endl;
    }
};


int main() {
    Payment payment; // Create a Payment object

    cout << "========================================" << endl;
    cout << "    MOBILE MONEY - PAYMENT SYSTEM      " << endl;
    cout << "========================================" << endl;
    cout << endl;

    // Demonstrate cash payment 
    payment.processPayment(5000);
    cout << endl;

    // Demonstrate card payment 
    payment.processPayment(5000.00, 75.00);
    cout << endl;

    // Demonstrate mobile payment 
    payment.processPayment(5000.00, 75.00, 200.00);

    cout << "========================================" << endl;

    return 0;
}