#include<iostream>
using namespace std;

int main(){
	int n,sum=0,m;
	
	cout<<"Enter number"<<endl;
	cin>>n;
	
	while(n>0){
		m=n%10;
		sum=sum+m;
		n=n/10;
	}
	cout<<"Sum is="<<sum<<endl;
	
}
