#include <iostream>
using namespace std;

int main() {
    int a = 10;     // Declare an integer variable
    int* p = &a;    // Declare a pointer and store the address of 'a'

    cout << "Value of a: " << a << endl;        // Output the value of 'a'
    cout << "Address of a: " << &a << endl;     // Output the address of 'a'
    cout << "Value of p (Address stored in p): " << p << endl; // Output the address stored in 'p'
    cout << "Value pointed to by p: " << *p << endl;  // Output the value stored at the address pointed to by 'p'

    return 0;
}

