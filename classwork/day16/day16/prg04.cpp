#include<iostream>
//#define MAX 5
using namespace std;
int main()
/* {
	int a[MAX];
	for (int i = 0;i < MAX;i++)
	{
		cin >> a[i];
	}
	for (int i = 0;i < MAX;i++)
	{
		if (a[i] != a[i + 1])
		{
			 cout<<a[i];
		}
		else
		{
			continue;
		}

	}
}
*/
{
	int a[] = {10,20,30,10,30,4};
	int n = sizeof(a) / sizeof(a[0]);
	for (int i = 0;i < n;i++)
	{
		for (int j = i+1;j < n;j++)
		{
			if (a[i] == a[j])
			{
				for (int k = j;k < n - 1;k++)
				{
					a[k] = a[k + 1];//shifting j position to k
				}
				n--;
			}
		}
	}
	cout << "resultant array: ";
	for (int i = 0;i < n;i++)
	{
		cout <<a[i];
	}
}