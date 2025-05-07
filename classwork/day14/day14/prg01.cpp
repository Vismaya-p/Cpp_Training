#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cout << "Enter five numbers: ";
	cin >> a >> b >> c >> d >> e;
	/*
	if (a > b && a > c &&a>d &&a>e)
	{
		cout << "The largest number is: " << a;
	}
	else if (b > a && b > c &&b>d &&b>e)
	{
		cout << "The largest number is: " << b;
	}
	else if(c>a && c>b && c>d && c>e)
	{
		cout << "The largest number is: " << c;
	}
	else if (d > a && d > b && d > c && d>e)
	{
		cout << "The largest number is: " << d;
	}
	else
	{
		cout << "the largest number is:" << e << endl;
	}*/
	/*if (a > b)
	{
		if (a > c)
		{
			if (a > d)
			{
				if (a > e)
				{
					cout << "The largest number is: " << a;
				}
				else
				{
					cout << "The largest number is: " << e;
				}
			}
			else
			{
				if (d > e)
				{
					cout << "The largest number is: " << d;
				}
				else
				{
					cout << "The largest number is: " << e;
				}
			}

		}
	}
	else if (b > c)
	{
		if (b > d)
		{
			if (b > e)
			{
				cout << "The largest number is: " << b;
			}
			else
			{
				cout << "The largest number is: " << e;
			}
		}
		else
		{
			if (d > e)
			{
				cout << "The largest number is: " << d;
			}
			else
			{
				cout << "The largest number is: " << e;
			}
		}
	}
	*/
	int high = a;
	if (b >= high)
	{
		high = b;
	}
	if (c >= high)
	{
		high = c;
	}
	if (d >= high)
	{
		high = d;
	}
	if (e >= high)
	{
		high = e;
	}
	cout << "the largest number is: " << high << endl;
}