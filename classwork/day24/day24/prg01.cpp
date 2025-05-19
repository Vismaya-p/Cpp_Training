#include<iostream>
using namespace std;

typedef struct Address {
	int hNo;
	int pinCode;
	string addrLine1;//mand
	string addrLine2;//optional
	string city;
	string state;

}ADDRESS;
struct Employee
{
	int id;
	string name;
	struct DATE {
		int day, month, year;  //structure within a structure
	}D;
	ADDRESS addr;
};

int main()
{
	struct Employee e;
	e.id = 101;
	e.name = "Vismaya";
	e.D.day = 19;
	e.D.month= 5;
	e.D.year = 2025;
	cout << e.id << "\t" << e.name << "\t" << e.D.day << "/" << e.D.month << "/" << e.D.year;
	e.addr.hNo = 2000;
	e.addr.pinCode = 670694;
}