#include<iostream>
using namespace std;
int main()
{
	int a[] = { 2,5,6,3,9,7 };
	int n = sizeof(a) / sizeof(a[0]);
	int smallest = a[0], second=0;
	for (int i = 0;i < n;i++)
	{
		if (a[i] < smallest)
		{
			second = smallest;
			smallest = a[i];
		}
		else if (a[i] < second && a[i] != smallest)
			second = a[i];
	}
	for(int i=0;i<n;i++)
	cout << a[i];
}