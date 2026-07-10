/*
 * ============================================================
 * OOP 1 (C++) – Week 3, Task 2
 * Water Billing System Using Functions
 * ============================================================
 * Description:
 *   Calculates a customer's monthly water bill using modular
 *   functions. A 10% discount is applied when consumption
 *   exceeds 100 units.
 *
 *   Formulas:
 *     Water Bill = Units Consumed × Rate Per Unit
 *     Discount   = 10% of Water Bill  (if units > 100)
 * ============================================================
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// ── Constants ──────────────────────────────────────────────
const double RATE_PER_UNIT    = 150.00; // KES per unit
const double DISCOUNT_RATE    = 0.10;  // 10% discount
const int    DISCOUNT_THRESHOLD = 100; // Units above which discount applies

// ── Global variables ───────────────────────────────────────
string customerName;
double unitsConsumed;
double waterBill;
double discountAmount;
double finalAmount;

// ── Function prototypes ────────────────────────────────────
void getCustomerDetails();
void calculateBill();
void applyDiscount();
void displayBill();

// =============================================================
// getCustomerDetails()
// Prompts the user to enter customer name and units consumed.
// =============================================================
void getCustomerDetails() {
    cout << "========================================" << endl;
    cout << "    WATER SUPPLY CO. - BILL ENTRY       " << endl;
    cout << "========================================" << endl;

    cout << "Enter customer name       : ";
    getline(cin, customerName);

    cout << "Enter units consumed      : ";
    cin  >> unitsConsumed;
}

// =============================================================
// calculateBill()
// Computes the gross water bill:
//   Water Bill = Units Consumed × Rate Per Unit
// =============================================================
void calculateBill() {
    waterBill = unitsConsumed * RATE_PER_UNIT;
}

// =============================================================
// applyDiscount()
// Reduces bill by 10% if consumption exceeds 100 units.
// =============================================================
void applyDiscount() {
    if (unitsConsumed > DISCOUNT_THRESHOLD) {
        discountAmount = DISCOUNT_RATE * waterBill;
    } else {
        discountAmount = 0.0; // No discount
    }
    finalAmount = waterBill - discountAmount;
}

// =============================================================
// displayBill()
// Prints a complete, formatted water bill.
// =============================================================
void displayBill() {
    cout << endl;
    cout << "========================================" << endl;
    cout << "       MONTHLY WATER BILL STATEMENT     " << endl;
    cout << "========================================" << endl;
    cout << fixed << setprecision(2);
    cout << left << setw(26) << "Customer Name"
         << ": " << customerName  << endl;
    cout << left << setw(26) << "Units Consumed"
         << ": " << unitsConsumed << " units" << endl;
    cout << left << setw(26) << "Rate Per Unit"
         << ": KES " << RATE_PER_UNIT << endl;
    cout << left << setw(26) << "Bill Before Discount"
         << ": KES " << waterBill     << endl;

    if (discountAmount > 0) {
        cout << left << setw(26) << "Discount (10%)"
             << ": KES " << discountAmount << endl;
    } else {
        cout << left << setw(26) << "Discount"
             << ": None" << endl;
    }

    cout << "----------------------------------------" << endl;
    cout << left << setw(26) << "FINAL AMOUNT PAYABLE"
         << ": KES " << finalAmount << endl;
    cout << "========================================" << endl;
}


int main() {
    getCustomerDetails();
    calculateBill();
    applyDiscount();
    displayBill();

    return 0;
}