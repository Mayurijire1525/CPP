#include <iostream>
using namespace std;

class Box {
private:
    double width;

public:
    // Constructor to initialize width
    Box(double w) : width(w) {}

    // Friend function declaration
    friend void printWidth(Box b);  // 'printWidth' is a friend of 'Box'
};

// Definition of friend function
void printWidth(Box b) {
    // Accessing private member 'width' directly
    cout << "Width of box: " << b.width << endl;
}

int main() {
    Box box(10.5);  // Creating an object of class Box
    printWidth(box); // Calling friend function

    return 0;
}

