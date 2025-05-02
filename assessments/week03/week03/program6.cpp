//Print the array after reversing every group of K consecutive elements
#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	int a[MAX],k,n,min=0,max=0,temp=0;
	cout << "enter the no of elements:";
	cin >> n;
	cout << "enter the elements: ";
	for (int i = 0;i < n;i++)
	{
		cin>> a[i];
	}
	cout << "enter size of subarray: ";
	cin >> k;
	for (int i = 0;i < n;i = i + k)
	{
		min = i;
		max = i + k - 1;
		if (max >= n)
		{
			max = n - 1;
		}
	}
	while (min < max)
	{
		temp = a[min];
		a[min] = a[max];
		a[max] = temp;
		min++;
		max--;
	}
	for (int i = 0;i < n;i++)
		cout << a[i] << " ";
}