#include<iostream>
using namespace std;

struct Address{
	string street;
	string city;
	int zipcode;
	
};

struct Employee{
	string name;
	int id;
	Address address;
	
	void displayEmployeeDetails(){
		cout<<"Name:"<<name<<endl;
		cout<<"Employee Id:"<<id<<endl;
		cout<<"Address:"<<endl;
		cout<<"Street:"<<address.street<<endl;
		cout<<"City:"<<address.city<<endl;
		cout<<"Zip Code:"<<address.zipcode<<endl;
	}
};
int main(){
	Employee emp1;
	
	emp1.name="Mayuri";
	emp1.id=15;
	emp1.address.street="Ambad link road";
	emp1.address.city="Nashik";
	emp1.address.zipcode=422008;
	
	emp1.displayEmployeeDetails();
	return 0;
}
