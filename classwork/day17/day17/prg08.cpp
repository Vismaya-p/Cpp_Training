#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "before swapping:"<<a <<" "<< b;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << "after swapping: "<<a << " "<<b;
}