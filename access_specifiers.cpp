#include<iostream>
using namespace std;

class Base{
	public:
		int publicVar;
	private:
		int privateVar;
	protected:
		int protectedVar;
		
	public:
		Base(){
			publicVar=1;
			privateVar=2;
			protectedVar=3;
		}
		
		void displayBase(){
			cout<<"Public variable Base class:"<<publicVar<<endl;
			cout<<"Private variable Base class:"<<privateVar<<endl;
			cout<<"Protected varianle Base class:"<<protectedVar<<endl;
		}
};
class Derived:public Base{
	public:
		void displayderived(){
			cout<<"Public variable Derived class:"<<publicVar<<endl;
			
			cout<<"Protected varianle Derived class:"<<protectedVar<<endl;
		}
		
};
int main(){
	Base baseobj;
	Derived derivedobj;
	
	baseobj.publicVar=10;
	cout<<"Public Variable(main)"<<baseobj.publicVar<<endl;
	
	baseobj.displayBase();
	derivedobj.displayderived();
	
}
