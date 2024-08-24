#include<iostream>
using namespace std;
//Upcasting
class Base{
	public:
	 void display(){
		cout<<"In Base class"<<endl;
	}
};
class derive:public Base{
	public:
	void display()
	{
		cout<<"In derive class"<<endl;	
	}	
};
int main(){
	Base *ptr;
	derive obj;
	ptr=&obj;
	ptr->display();
}
