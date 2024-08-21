#include<iostream>
using namespace std;

struct Person{
	string name;
	int age;
	float height;
	
	void printdetails(){
		cout<<"Name:"<<name<<endl;
		cout<<"Age:"<<age<<endl;
		cout<<"Height:"<<height<<endl;
	}
};

int main(){
	Person person1;
	
	person1.name="Mayuri";
	person1.age=25;
	person1.height=153;
	
	person1.printdetails();
	
	return 0;
}
