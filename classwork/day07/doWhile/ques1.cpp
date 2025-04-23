#include<iostream>
using namespace std;
int main()
{
	int n,digit,sum=0,product=1;
	cout << "enter a number: ";
	cin >> n;
	while (n>0)
	{
		digit = n % 10;
		if (digit != 0)
		{
			product = product * digit;
		}
		    sum = sum + digit;
		n = n / 10;
	}
		cout << "sum=" << sum<<endl;
		cout << "product=" << product<<endl;
	return 0;
}