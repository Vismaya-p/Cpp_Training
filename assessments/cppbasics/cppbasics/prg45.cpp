//Program to Find the Maximum and Minimum of the Two Numbers Without Using the Comparison Operator
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "max " << (((a + b) + abs(a - b)) / 2) << endl;
	cout << "min " << (((a + b) - abs(a - b)) / 2) << endl;
	return 0;
	
}