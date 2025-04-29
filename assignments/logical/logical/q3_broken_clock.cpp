#include<iostream>
using namespace std;
int divisor(int h)
{
	for (int i = 1;i <= 60;i++)
	{
		if (i % h == 0)
		{
			cout << "the clock will ring at: " << i << endl;
		}
	}
	return 0;
}
int main()
{
	int h;
	cout << "enter the hour value: ";
	cin >> h;
	divisor(h);
}