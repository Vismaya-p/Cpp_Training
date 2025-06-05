#include<iostream>
#include<set>
#include<string>
using namespace std;
int main()
{
	set<int> bookedTime;
	string booking = "";
	while (booking != "exit")
	{
		getline(cin, booking);
		if (booking.find("BOOK ") != string::npos)
		{
			if (bookedTime.count(stoi(booking.substr(6))) == 0)
			{
				bookedTime.insert(stoi(booking.substr(6)));
			}
			else
			{

				cout << "Already Booked" << endl;
			}
		
		}
		else if (booking.find("CHECK ")!=string::npos)
		{
			if (bookedTime.count(stoi(booking.substr(6)) == 0))
			{
				cout << "Free";
				bookedTime.insert(stoi(booking.substr(6)));
			}
			else
			{
				cout << "Already Booked" << endl;
			}

		}
	}
	return 0;
}