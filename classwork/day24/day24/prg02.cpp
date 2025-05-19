#include<iostream>
using namespace std;
struct Date {
	int day, month, year;
};
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
	Date joiningDate;
	ADDRESS addr;
};
int main()
{
	struct Employee e;
	e.id = 101;
	e.name = "Vismaya";
	e.joiningDate.day = 19;
	e.joiningDate.month = 5;
	e.joiningDate.year = 2025;
	cout << e.id << "\t" << e.name << "\t" << e.joiningDate.day << "/" << e.joiningDate.month << "/" << e.joiningDate.year;
	e.addr.hNo = 2000;
	e.addr.pinCode = 670694;
}