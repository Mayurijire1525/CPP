#include <iostream>  
using namespace std;  

void printArr(int arr[5]){
	cout<<"Printing array elements"<<endl;
	for(int i=0; i<5; i++){
		cout<<arr[i]<<endl;
	}
}
int main(){
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={6,7,8,9,10};
	
	printArr(arr1);
	printArr(arr2);
}
