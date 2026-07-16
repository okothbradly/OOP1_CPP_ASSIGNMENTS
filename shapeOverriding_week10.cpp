/* Shape Overriding (Runtime Polymorphism)
 * ============================================================
 * BCS-05-0044/2025
 * Bradly Okoth
 * ============================================================
 */

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle" << endl;
    }
};

int main() {
    Shape* shapePtr;
    
    Circle c;
    Rectangle r;
    Triangle t;

    shapePtr = &c;
    shapePtr->draw();

    shapePtr = &r;
    shapePtr->draw();

    shapePtr = &t;
    shapePtr->draw();

    return 0;
}