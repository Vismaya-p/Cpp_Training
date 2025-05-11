//Program to Find the Maximum and Minimum of the Two Numbers Without Using the Comparison Operator
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int max = (a + b + abs(a - b)) / 2;
	int min = (a + b - abs(a - b)) / 2;
	cout << "max = " << max << endl;
	cout << "min = " << min << endl;
	return 0;
}