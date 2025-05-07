//second smallest in sorting method
#include<iostream>
#define MAX 10
using namespace std;
int main()
{
	int a[MAX],t;
	for (int i = 0;i < MAX;i++)
	{
		cin >> a[i];
	}
	for (int i = 0;i < MAX;i++)
	{
		for (int j = 0;j < MAX;j++)
		{
			if (a[j] < a[j + 1])
			{
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;

			}
		}
	}
	for (int i = 0;i < MAX;i++)
		cout << a[i]<<",";
	cout << endl;
	cout << a[MAX - 2];

}