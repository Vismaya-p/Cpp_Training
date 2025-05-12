//Program to Find the Maximum and Minimum of the Two Numbers Without Using the Comparison Operator
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int max = (a < b) ? a : b;
	int min = (a > b) ? a : b;
	cout << "max = " << max << endl;
	cout << "min = " << min << endl;
	return 0;
}