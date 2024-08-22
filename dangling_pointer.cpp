#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(10);  // Allocate memory and initialize it to 10
    cout << "Value: " << *ptr << endl;  // Output the value: 10

    delete ptr;  // Free the allocated memory
    // Now, ptr is a dangling pointer, pointing to deallocated memory

    // Dereferencing the dangling pointer (dangerous and undefined behavior)
    cout << "Value after delete: " << *ptr << endl;  // This can cause a crash or undefined behavior

   

    return 0;
}

