#include<iostream>
using namespace std;

struct Car{
	string brand;
	string model;
	int year;
	float price;
	
};

int main(){
	Car* car=new Car;
	
	car->brand="Toyota";
	car->model="Camry";
	car->year=2020;
	car->price=240000.00;
	
	cout<<"Car Details"<<endl;
	cout<<"Brand:"<<car->brand<<endl;
	cout<<"Model:"<<car->model<<endl;
	cout<<"Year:"<<car->year<<endl;
	cout<<"Price:"<<car->price<<endl;
	
	delete car;
	return 0;
}
