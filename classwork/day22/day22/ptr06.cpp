//array reverse without using pointers
#include<iostream>
using namespace std;
int revArr(int arr[], int n)
{
	int i= 0;
	for (i = 0;i < n/2;i++)
	{
		int temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = temp;
	}
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << " ";
		cout << endl;
	}
	return arr[i];
}
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	revArr(arr, n);
}