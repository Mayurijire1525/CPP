#include <iostream>
using namespace std;


struct Student {
    string name;
    int rollNumber;
    float marks;
};

int main() {
    
    Student students[3];

  
    students[0].name = "Mayuri";
    students[0].rollNumber = 1;
    students[0].marks = 85.5;

    students[1].name = "krish";
    students[1].rollNumber = 2;
    students[1].marks = 90.0;

    students[2].name = "om";
    students[2].rollNumber = 3;
    students[2].marks = 78.2;

    
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i+1 << " Details:" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].rollNumber << endl;
        cout << "Marks: " << students[i].marks << endl;
        cout << endl;
    }

    return 0;
}

