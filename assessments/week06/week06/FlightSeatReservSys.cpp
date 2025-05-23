//Create a class to manage flight seat reservations. Each flight has a seat count and a record of bookings.
#include<iostream>
#include<cstring>
using namespace std;
class Flight
{
private:
	char flightNo[20];
	int totalSeats;
	int bookedSeats;
public:
	Flight(const char fNo[], int totalS); // Constructor
	void bookSeats(int seats);
	void showAvailability();

};
Flight::Flight(const char fNo[], int totalS)
{
	strcpy(flightNo, fNo);
	totalSeats = totalS;
	bookedSeats = 0;
}
 void Flight::bookSeats(int seats)
	{
		if (bookedSeats + seats<=totalSeats)
		{
			bookedSeats += seats;
			//cout << "Successfully booked " << seats <<"seats"<<endl;
		}
		else
		{
			cout << "Booking Failed: Not enough seats." << endl;
		}
	}

void Flight::showAvailability()
	{
		cout << "Flight: " << flightNo <<" | "<< "Seats Available: " << (totalSeats - bookedSeats) << endl;
	}
	


int main()
{
	Flight f1("AI203", 100);
	f1.bookSeats(30);
	f1.showAvailability();
	f1.bookSeats(80);
}