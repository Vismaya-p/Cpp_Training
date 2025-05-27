#include<iostream>
using namespace std;
class Vehicle
{
protected:
	int wheels;
	int seat_capacity;
	string brand;
public:
	Vehicle(int wheels,int seat_capacity,string brand)
	{
		this->wheels = wheels;
		this->seat_capacity = seat_capacity;
		this->brand = brand;
	}
};
class Car :public Vehicle
{
private:
	string colour;
	int price;
	string fuelType;
	int doors;
public:
	
	void set_specifications()
	{
		cout << "no of wheels: "<<endl;
		cin >> wheels;
		cout << "seat capacity: " << endl;
		cin >> seat_capacity;
		cout << "car Brand:" << endl;
		cin >> brand;
	}
	void display()
	{
		cout << "wheels:"<<wheels;
		cout <<"seats:"<< seat_capacity;
		cout << "brand:"<<brand;
	}

};
int main()
{


}