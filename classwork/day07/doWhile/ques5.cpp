#include<iostream>
using namespace std;
int main() {
	int n1, n2, digit1=0,digit2=0,count = 0, sum1 = 0,sum2= 0;
	cout << "enter two numbers" << endl;
	cin >> n1 >> n2;
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	while (n1 > 0)
	{
		digit1= n1 % 10;
		if (arr1[digit1] == 0)
		{
			arr1[digit1] = digit1;
		}
		else {
			arr1[digit1] = 1;
		}
		n1 = n1 / 10;
	}
	for (int i = 0;i < 10;i++)
	{
		if (arr1[i] != 1)
		{
			sum1 = sum1 + arr1[i];
		}
	}
	while (n2 !=0)
	{
		digit2 = n2 % 10;
		if (arr2[digit2] == 0)
		{
			arr2[digit2]= digit2;
		}
		else
		{
			arr2[digit2] = 1;
		}
		n2 = n2 / 10;
	}
	for (int i = 0;i < 10;i++)
	{
		if (arr2[i] != 1)
		{
			sum2 = sum2 + arr2[i];

		}
	}
	//cout << "sum1 =" << sum1 << endl<< "sum2 =" << sum2;
	if (sum1 == sum2)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}