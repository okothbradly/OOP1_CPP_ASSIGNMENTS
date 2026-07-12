/*
 * ============================================================
 * BCS-05-0044/2025
 * Bradly Okoth
 * 
 * Hotel Management System (1D, 2D, and 3D Arrays)
 * ============================================================
 * Description:
 * This program simulates a hotel management system that tracks weekly revenue,
 * room occupancy for a single branch and room occupancy across multiple branches.
 * It utilizes 1D, 2D and 3D arrays to store and process the data.
 */


#include <iostream>
#include <cstdlib> // For random numbers
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed for random occupancy

    // --- 1D Array: Weekly Revenue Tracker ---
    double revenue[7], totalRevenue = 0, avgRevenue;
    cout << "--- Weekly Revenue Tracker ---" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Enter revenue for Day " << (i + 1) << ": Ksh ";
        cin >> revenue[i];
        totalRevenue += revenue[i];
    }
    avgRevenue = totalRevenue / 7.0;
    cout << "Total Weekly Revenue: Ksh " << totalRevenue << endl;
    cout << "Average Daily Revenue: Ksh " << avgRevenue << "\n\n";

    // --- 2D Array: Room Occupancy (One Branch) ---
    int occupancy[5][10];
    cout << "--- Room Occupancy (Single Branch) ---" << endl;
    for (int floor = 0; floor < 5; floor++) {
    int occupied = 0, vacant = 0;
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // Random 0 or 1
            if (occupancy[floor][room] == 1) occupied++;
            else vacant++;
        }
        cout << "Floor " << (floor + 1) << " -> Occupied: " << occupied << " | Vacant: " << vacant << endl;
    }

    // --- 3D Array: Multiple Branches ---
    int chain[3][5][10];
    int totalChainOccupied = 0;
    cout << "\n--- Room Occupancy (All Branches) ---" << endl;
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1) {
                    totalChainOccupied++;
                }
            }
        }
    }
    cout << "Total Occupied Rooms Across All Branches: " << totalChainOccupied << endl;

    return 0;
}