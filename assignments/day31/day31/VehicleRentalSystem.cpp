#include<iostream>
using namespace std;
class Vehicle
{
	string vehicleId;
	string type;
	float ratePerKm;

public:
	Vehicle(string vehicleId, string type, float ratePerKm)
	{
		this->vehicleId = vehicleId;
		this->type = type;
		this->ratePerKm = ratePerKm;
	}
	float calculateFare(float distance)
	{
		return distance * ratePerKm;
	}
	float calculateFare(float distance, int days)
	{
		float fare = calculateFare(distance);
		if (days > 2)
		{
			fare -= fare * 0.10;
		}
		return fare;
	}
};
class Car :public Vehicle
{
public:
	Car(string id,float rate):Vehicle(id,"Car",rate){}
};
class Bike :public Vehicle
{
public:
	Bike(string id,float rate):Vehicle(id,"Bike",rate){}
};
int main()
{
	string vehicleId;
	float rate, distance;
	int days;
	cout << "Vehicle Type: Car\n";
	cout << "Vehicle ID: ";
	cin >> vehicleId;
	cout << "Rate: ";
	cin >> rate;
	cout << "Distance: ";
	cin >> distance;
	cout << "Days: ";
	cin >> days;
	Car c(vehicleId, rate);
	cout << "Fare without discount: ₹" << c.calculateFare(distance) << endl;
	cout << "Fare with long-term discount: ₹" << c.calculateFare(distance, days) << endl;
	return 0;


}