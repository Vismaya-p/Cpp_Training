//Program to Calculate the Sum of Elements in an Array
#include<iostream>
#define MAX 50
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[MAX];
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	cout << "sum = " <<sum<< endl;
	return 0;
}