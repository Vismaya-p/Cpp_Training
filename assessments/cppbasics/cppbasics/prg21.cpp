//Program to Calculate the Lowest Common Multiple (LCM) of Two Numbers
#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int lcm(int a, int b)
{
	return(a * b) / gcd(a, b);
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "lcm = "<<lcm(a,b)<<endl;
	return 0;
}
