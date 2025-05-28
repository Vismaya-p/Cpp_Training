//Vehicle class Hierarchy
#include<iostream>
using namespace std;
class Vehicle
{
protected:
	string make;
	string model;
public:
	Vehicle()
	{
		make = "Generic";
		model = "Vehicle";
	}
	Vehicle(string mk, string md) :make(mk), model(md) {}
	void start()
	{
		cout << "Starting the " << make << " " << model << endl;
	}
	void stop()
	{
		cout << "Stopping the " << make << " " << model << endl;
	}
};
class Car :public Vehicle
{
protected:
	int noOfDoors;
public:
	Car(string mk, string md, int n) :Vehicle(mk, md), noOfDoors(n) {}
	void honk()
	{
		cout << "Honking the horn of the " << make << " " << model << endl;
	}

};
int main()
{
	Vehicle v;
	Car cObj("Toyota", "Camry", 4);
	v.start();
	v.stop();
	cObj.start();
	cObj.honk();
	cObj.stop();
}