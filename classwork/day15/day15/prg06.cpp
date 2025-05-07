#include<iostream>
using namespace std;
void checkLeapYear(int year)
{
	if ((year % 4 == 0)&&(year % 100 != 0)||(year % 400 == 0))
	{
		cout<<year<<"is leap year";
	}
	else
	{
		cout << year << "is not leap year";
	}
}
int main()
{
	int year;
	cin >> year;
    checkLeapYear(year);
}