//Manage bookings for rooms in a hotel.
#include<iostream>
#include<cstring>
using namespace std;
class HotelRoom
{
	int RoomNumber;
	char Type[20];
	bool isBooked;
public:
	HotelRoom(int,const char []);
	bool bookRoom();
	void showStatus();
	
};
HotelRoom::HotelRoom(int rNo, const char rType[])
{
	RoomNumber = rNo;
	strcpy(Type, rType);
	isBooked = false;
}
bool HotelRoom::bookRoom()
{
	isBooked = true;
	return true;
}
void HotelRoom::showStatus()
{
	if (!isBooked)
	{
		isBooked = true;
		cout << "Room " << RoomNumber << "( " << Type << ")" << "is now booked." << endl;
		
	}
	else
	{
		cout << "Room already booked." << endl;
	}
}	

int main()
{
	HotelRoom h1(201,"AC");
	h1.bookRoom();
	h1.showStatus();
}