#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() { // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void sound() override { // Overriding the base class function
        cout << "Dog barks" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void sound() override { // Overriding the base class function
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* animal1; // Base class pointer
    Dog dog;
    Cat cat;

    animal1 = &dog; // Pointing to Dog object
    animal1->sound(); // Output: Dog barks

    animal1 = &cat; // Pointing to Cat object
    animal1->sound(); // Output: Cat meows

    return 0;
}

