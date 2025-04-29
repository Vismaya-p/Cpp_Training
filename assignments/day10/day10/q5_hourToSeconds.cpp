#include<iostream>
using namespace std;
int hourToSeconds(int n);
int main()
{
	int n;
	cout << "enter the hour: ";
	cin >> n;
	hourToSeconds(n);
}
int hourToSeconds(int n)
{
	int second = 1;
	int minute = 1;
	if (n < 1)
		return 1;
	else
	{
		minute = (n * 60);
		second = (n * 60 * 60);
		
		cout << "minutes" << minute << endl;
		cout << "seconds" << second<<endl;
	}
}