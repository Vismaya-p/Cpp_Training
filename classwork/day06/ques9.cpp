#include<iostream>
#include"day06.h"
using namespace std;
int star() {
	int i,j,n;
	cout << "enter n" << endl;
	cin >> n;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}