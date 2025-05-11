//Program to Find the Factorial of a Number Using Loops
#include<iostream>
using namespace std;
int main()
{
	int fact=1, n;
	cin >> n;
	while (n >= 1)
	{
		fact = fact * n;
		n = n - 1;
	}
	cout << fact;
}
