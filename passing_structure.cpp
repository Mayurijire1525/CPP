#include <iostream>
using namespace std;


struct Rectangle {
    float length;
    float width;
};


float calculateArea(Rectangle rect) {
    return rect.length * rect.width;
}


float calculatePerimeter(Rectangle &rect) {
    return 2 * (rect.length + rect.width);
}

int main() {
   
    Rectangle rect1;
    rect1.length = 10.5;
    rect1.width = 5.0;

    
    float area = calculateArea(rect1);

    
    float perimeter = calculatePerimeter(rect1);

   
    cout << "Rectangle Dimensions:" << endl;
    cout << "Length: " << rect1.length << endl;
    cout << "Width: " << rect1.width << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}

