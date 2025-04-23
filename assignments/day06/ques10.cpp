#include<iostream>
#include"day06.h"
using namespace std;
int rightTriangle()
{
	int i,j,n;
	cout << "enter n";
	cin >> n;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j <= i;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (i = 0;i < n;i++)
	{
		for (j = 0;j <n-i-1;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}