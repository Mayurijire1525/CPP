#include <iostream>
using namespace std;

void printMinMax(int arr[5]) {
    int min = arr[0];  
    int max = arr[0];  

    for (int i = 1; i < 5; i++) { 
        if (arr[i] < min) { 
            min = arr[i];
        }
        if (arr[i] > max) { 
            max = arr[i];
        }
    }

    cout << "Minimum element is: " << min << "\n";
    cout << "Maximum element is: " << max << "\n";
}

int main() {
    int arr1[5] = {30, 10, 20, 40, 50};  
    int arr2[5] = {5, 15, 25, 35, 45};   

    printMinMax(arr1); 
    printMinMax(arr2);  

    return 0;
}

