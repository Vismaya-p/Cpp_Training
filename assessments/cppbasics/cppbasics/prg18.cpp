//Program to Check Whether a Number is an Armstrong Number or Not
#include <iostream>
#include<math.h>
using namespace std;
int digits(int n)
{
	int count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return count;
}
int armstrong(int n)
{
	int temp = n, sum = 0, digit;
	digit = digits(n);
	while (temp > 0)
	{
		sum = sum + pow(temp % 10, digit);
		temp = temp / 10;
	}
	return sum;
}
int main()
{
	int n;
	cout << "Enter the number: " << endl;
	cin >> n;
	int sum = armstrong(n);
	if (n == sum)
		cout <<" armstrong number";
	else
		cout <<" not an armstrong number";
}