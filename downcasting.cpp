#include<iostream>
using namespace std;
//Downcasting

class Parent{
	public:
		void Base(){
			cout<<"n parent class"<<endl;
		}
};
class Child:public Parent{
	public:
		void derive(){
			cout<<"In child class"<<endl;
		}
};
int main(){
	Parent pobj;
	Child *cobj;
	
	cobj=(Child*)&pobj;
	cobj->derive();
}
