#include<iostream>
using namespace std;
//
//class Cal{
//	public:
//		static int add(int a,int b){
//			return a+b;
//		}
//		static int add(int a,int b,int c){
//			return a+b+c;
//		}
//		
//};
//int main(){
//	Cal c;
//	cout<<c.add(10,20)<<endl;
//	cout<<c.add(1,2,3)<<endl;
//}

int mul(int,int);  
float mul(float,int);  
   
int mul(int a,int b)  
{  
    return a*b;  
}  
float mul(double x, int y)  
{  
    return x*y;  
}  
int main()  
{  
    int r1 = mul(6,7);  
    float r2 = mul(0.2,3);   
    std::cout << "r1 is : " <<r1<< std::endl;  
    std::cout <<"r2 is : "  <<r2<< std::endl;  
    return 0;  
}  
