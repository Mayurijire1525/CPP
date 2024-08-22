#include <iostream>
using namespace std;

int main() {
    int a = 10;       // Original variable
    int &ref = a;     // ref is a reference to a

    cout << "a = " << a << endl;       // Outputs 10
    cout << "ref = " << ref << endl;   // Outputs 10

    ref = 20;         // Modifies the value of a through ref

    cout << "a = " << a << endl;       // Outputs 20
    cout << "ref = " << ref << endl;   // Outputs 20

    return 0;
}

