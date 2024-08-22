#include<iostream>  
using namespace std;    
void swap(int *x, int *y)  
{  

 int swap;  
 swap=*x;  
 *x=*y;  
 *y=swap;  
}  
void swap1(int x, int y)  
{  
 int swap;  
 swap=x;  
 x=y;  
 y=swap;  
} 
int main()   
{    
 int x=500, y=100;    
  swap1(x, y);  // passing value to function 
 cout<<"Pass by value"<<endl; 
 cout<<"Value of x is: "<<x<<endl;  
 cout<<"Value of y is: "<<y<<endl;  
 swap(&x, &y);  // passing value to function  
 cout<<"Pass by reference"<<endl; 
 cout<<"Value of x is: "<<x<<endl;  
 cout<<"Value of y is: "<<y<<endl;  
 return 0;  
}
