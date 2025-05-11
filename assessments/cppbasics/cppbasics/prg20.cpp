//Program to Calculate the Greatest Common Divisor of Two Numbers
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}

	cout << "gcd is " << a;
	return 0;
}
