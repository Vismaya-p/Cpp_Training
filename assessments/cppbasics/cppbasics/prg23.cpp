//Program to Find the Second Smallest Element in an Array
#include<iostream>
using namespace std;
int main()
{
	int a[10];
	for (int i = 0;i < 10;i++)
	{
		cin >> a[i];
	}
	int min = a[0];
	int secondmin = a[0];
	for (int i = 0;i < 10;i++)
	{
		if (a[i] < min)
		{
			secondmin = min;
			min = a[i];
		}
		else if (a[i] < secondmin && a[i] != min)
		{
			secondmin = a[i];
		}
	}
	cout << "second smallest element =" << secondmin;
}
