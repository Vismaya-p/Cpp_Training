#include<iostream>
#include"day06.h"
using namespace std;
int alphapyramid() {
	int i,j,n=5;
	for (i = 0;i < 5;i++)
	{
		for (j = n -1-i;j >= 0;j--)
		{
			cout << " ";
		}
		for (char ch = 'A', j = n;j >= n - i;j--, ch++)
		{
			cout <<ch;
		}
		for (char ch = 'A'+i-1, j = n;j >n - i;j--, ch--)
		{
			cout << ch;
		}
		cout << endl;
	}
	return 0;
}