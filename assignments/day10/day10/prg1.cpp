#include<iostream>
using namespace std;
int func(int n)
{
	if (n < 1)
	{
		return 1;
	}
	else
		cout << n << " ";
		func(n - 1);
}
int main()
{
	int n;
	cout << "enter n value";
	cin >> n;
	func(n);
}