#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;
    void commonMethod() {
        cout << "This is a common method in Shape class." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override { 
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override { 
        cout << "Drawing a Rectangle." << endl;
    }
};

int main() {
    // Shape shape; // Error: Cannot instantiate an abstract class

    Circle circle;
    Rectangle rectangle;

    // Calling overridden functions
    circle.draw();     // Output: Drawing a Circle.
    rectangle.draw();  // Output: Drawing a Rectangle.

    // Calling common method from Shape
    circle.commonMethod();
    rectangle.commonMethod(); 

    return 0;
}

