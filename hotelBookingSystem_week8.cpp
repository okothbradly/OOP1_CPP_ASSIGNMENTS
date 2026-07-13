/*
 * ============================================================
 * BCS-05-0044/2025
 * Bradly Okoth
 * 
 * Hotel Room Booking System (Constructors and Destructors)
 * ============================================================
 * Description:
 *   Manages a room booking using constructor initialization
 *   and a destructor cleanup message.
 *
 *   Constructor message  : "Room booking confirmed"
 *   Destructor message   : "Booking ended, room released"
 * ============================================================
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// =============================================================
// Class: RoomBooking
// =============================================================
class RoomBooking {
private:
    string guestName;   // Name of the guest
    int    roomNumber;  // Room number assigned
    int    daysBooked;  // Number of nights booked

public:
    // ── Constructor ────────────────────────────────────────
    // Initializes booking attributes and confirms the booking.
    RoomBooking(string name, int room, int days) {
        guestName  = name;
        roomNumber = room;
        daysBooked = days;

        cout << ">>> Room booking confirmed <<<" << endl;
    }

    // ── displayBooking() ───────────────────────────────────
    // Shows full booking details.
    void displayBooking() {
        cout << "\n========================================" << endl;
        cout << "         ROOM BOOKING DETAILS          " << endl;
        cout << "========================================" << endl;
        cout << left << setw(22) << "Guest Name"
             << ": " << guestName  << endl;
        cout << left << setw(22) << "Room Number"
             << ": " << roomNumber << endl;
        cout << left << setw(22) << "Days Booked"
             << ": " << daysBooked << " night(s)" << endl;
        cout << "========================================" << endl;
    }

    // ── Destructor ─────────────────────────────────────────
    // Runs when the object is destroyed; releases the room.
    ~RoomBooking() {
        cout << "\n>>> Booking ended, room released <<<" << endl;
    }
};

// =============================================================
// main()
// Creates a RoomBooking object and displays its details.
// =============================================================
int main() {
    cout << "========================================" << endl;
    cout << "      HOTEL ROOM BOOKING SYSTEM        " << endl;
    cout << "========================================" << endl;

    // Create a RoomBooking object (constructor runs automatically)
    RoomBooking booking("John Kamau", 204, 3);

    // Display booking details
    booking.displayBooking();

    // Destructor runs automatically when main() exits

    return 0;
}