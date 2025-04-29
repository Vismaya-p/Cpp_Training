//Sum of digits Until a Single Digit
#include<iostream>
using namespace std;
int sumOfDigit(int n);
int main()
{
	int n;
	cout << "enter a num:";
	cin >> n;
	cout<<"sum is: " << sumOfDigit(n);
	return 0;
}
int sumOfDigit(int n)
{
	int sum = 0;
	if (n < 10) 
	{
		return n;
	}
	else {
		int digit = n % 10;
		int sum = digit + sumOfDigit(n / 10);
		return sumOfDigit(sum);
	}
	
}