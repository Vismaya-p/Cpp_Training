//swapping two numbers using bitwise operator
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "before swap: " << a << " " << b<<endl;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << "after swap: " << a << " " << b << endl;
	return 0;
}