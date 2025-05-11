//Program to Check the Prime Number
#include<iostream>
using namespace std;
int main()
{
	int n, flag = 0;
	cin >> n;
	if (n <= 1)
	{
		cout << n << "is not a prime number";
		return 0;
	}
	for (int i = 2;i <= n / 2;i++)
	{
		if (n % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		cout << "prime number";
	}
	else
	{
		cout << "not a prime number";
	}
	return 0;
}