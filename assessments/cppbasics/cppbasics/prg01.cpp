//Program to Check Whether a Number is a Positive or Negative Number
#include<iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	if (num > 0)
		cout << "positive number";
	else if (num < 0)
		cout << "negative number";
	else
		cout << "zero";
}