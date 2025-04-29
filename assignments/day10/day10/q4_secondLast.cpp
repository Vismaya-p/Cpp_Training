#include<iostream>
using namespace std;
int secondLast(int n);
int main()
{
	int n;
	cout << "enter a num: ";
	cin >> n;
	secondLast(n);
}
int secondLast(int n)
{
	int digit;
	if (n < 10)
		return 0;
	else
	{
		digit = (n / 10) % 10;
		cout << "second last digit is: " << digit;
	}
}