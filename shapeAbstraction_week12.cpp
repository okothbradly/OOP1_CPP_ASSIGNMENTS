/*
 * ============================================================
 * BCS-05-0044/2025
 * Bradly Okoth
 * 
 * Shape Area System (Abstraction)
 * ============================================================
 * Description:
 *   Uses an abstract class with a pure virtual function to
 *   enforce that each shape defines its own area formula.
 *
 *   Abstract class : Shape  (pure virtual calculateArea())
 *   Derived classes:
 *     • Circle     → Area = π × r²
 *     • Rectangle  → Area = Length × Width
 * ============================================================
 */

#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;


class Shape {
public:
    // Pure virtual function to calculate area
    virtual void calculateArea() = 0;

    // Virtual destructor
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius; 

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Implement calculateArea() for Circle
    void calculateArea() override {
        double area = M_PI * radius * radius;

        cout << "--- Circle ---" << endl;
        cout << fixed << setprecision(4);
        cout << "  Radius : " << radius << endl;
        cout << "  Area   : " << area   << " sq. units" << endl;
    }
};

class Rectangle : public Shape {
private:
    double length; 
    double width;  

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Implement calculateArea() for Rectangle
    void calculateArea() override {
        double area = length * width;

        cout << "--- Rectangle ---" << endl;
        cout << fixed << setprecision(4);
        cout << "  Length : " << length << endl;
        cout << "  Width  : " << width  << endl;
        cout << "  Area   : " << area   << " sq. units" << endl;
    }
};

int main() {
    cout << "========================================" << endl;
    cout << "      SHAPE AREA SYSTEM                " << endl;
    cout << "========================================" << endl;

    Shape* shapePtr; // Abstract base class pointer

    // Create Circle (radius = 7.0) and calculate area
    Circle circ(7.0);
    shapePtr = &circ;
    shapePtr->calculateArea();
    cout << endl;

    // Create Rectangle (12.0 × 4.5) and calculate area
    Rectangle rect(12.0, 4.5);
    shapePtr = &rect;
    shapePtr->calculateArea();

    cout << "========================================" << endl;

    return 0;
}