#include<iostream>
using namespace std;
int mid(int a, int b, int c)
{
	if ((a > b && a < c) || (a<b && a>c))
	{
		return a;
	}
	else if ((b > a && b < c) || (b<a && b>c))
	{
		return b;
	}
	else
	{
		return c;
	}
}
int main()
{
	int a, b, c;
	cout << "enter three numbers: "<<endl;
	cin >> a >> b >> c;
	int res = mid(a, b, c);
	cout << "The middle number is: " << res;
	return 0;
}