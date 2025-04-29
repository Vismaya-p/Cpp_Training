#include<iostream>
using namespace std;
int leapYear(int n);
int main()
{
	int n;
	cout << "enter the year";
	cin >> n;
	leapYear(n);

}
int leapYear(int n)
{
	if (n < 0)
		return 0;
	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
		cout << "Leap year" << endl;
	else
		cout << "not a leap year" << endl;
}