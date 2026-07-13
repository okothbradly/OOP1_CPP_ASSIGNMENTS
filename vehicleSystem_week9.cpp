/*
 * ============================================================
 * BCS-05-0044/2025
 * Bradly Okoth
 * 
 * Vehicle Management System (Inheritance)
 * ============================================================
 * Description:
 * This program demonstrates the use of inheritance in C++.
 * It defines a base class `Vehicle` and a derived class `Car`.
 * The `Car` class inherits from the `Vehicle` class and adds
 * additional attributes specific to cars.
 */

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string brand;
    int yearOfManufacture;

    void displayVehicle() {
        cout << "Brand: " << brand << "\nYear of Manufacture: " << yearOfManufacture << endl;
    }
};

class Car : public Vehicle {
public:
    int numberOfDoors;
    double engineCapacity;

    void displayCar() {
        displayVehicle();
        cout << "Number of Doors: " << numberOfDoors << "\nEngine Capacity: " << engineCapacity << " cc" << endl;
    }
};

int main() {
    Car c1;
    cout << "Enter Brand: ";
    getline(cin, c1.brand);
    cout << "Enter Year of Manufacture: ";
    cin >> c1.yearOfManufacture;
    cout << "Enter Number of Doors: ";
    cin >> c1.numberOfDoors;
    cout << "Enter Engine Capacity (cc): ";
    cin >> c1.engineCapacity;

    cout << "\n--- Car Details ---" << endl;
    c1.displayCar();
    return 0;
}