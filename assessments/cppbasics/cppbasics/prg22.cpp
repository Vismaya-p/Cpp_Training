// Program to Find the Smallest and Largest Element in an Array
#include<iostream>
#define MAX 30
using namespace std;
int main()
{
	int a[10];
	for (int i = 0;i < 10;i++)
	{
		cin >> a[i];
	}
	int min = a[0];
	int max = a[0];
	for (int i = 0;i < 10;i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		else if (a[i] < min)
		{
			min = a[i];
		}
	}
	cout << "smallest element =" << min << "largest element = " << max;
}