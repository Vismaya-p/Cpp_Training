#include<iostream>
using namespace std;
int fib(int n)
{/*
	for (int i = 0;i<= n;i++)
	{
		int a = 0, b = 1, c;
		c = a + b;
		a = b;
		b = c;
		cout << i;
	}
	return 0;*/
	if (n == 0||n==1)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n;
	cout << "enter the n value: ";
	cin >> n;
	cout<<fib(n);
}