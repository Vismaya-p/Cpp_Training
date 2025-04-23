#include<iostream>
#include"day06.h"
using namespace std;
int reverse() {
	int rev=0, digit, n;
	cout << "enter a number";
	cin >> n;
	while (n)
	{
		digit = n % 10;
		rev = (rev * 10) + digit;
		n /= 10;
	}
	cout << "reversed num :" << rev;
	return 0;
}