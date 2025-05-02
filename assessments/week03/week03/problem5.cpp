//Print leader elements of the array from right to left as they appear.
#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	int index=0,n=0,r;
	cout << "enter the size:";
	cin >> n;
	int a[MAX],int l[MAX];
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	cout<<a[n - 1]<<" ";
	l[index++] = r;
	for (int i = n - 2;i >= 0;i++)
	{
		if (a[i] > r)
		{
			cout<<a[i];
			l[index++] = a[i];
		}
	}
	for (int i = 0;i < n;i++)
		cout << l[i];
}