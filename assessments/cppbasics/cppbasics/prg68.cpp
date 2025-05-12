//power of two numbers using multiplicatiom
#include<iostream>
using namespace std;
int mul(int a, int b)
{
	if (b == 0)
		return 1;
	else
	{
		return a * mul(a, b - 1);

	}
}
int main()
{
	int a, b;
	cout << "enter two numbers: ";
	cin >> a >> b;
	cout << "power of a^b is: " << mul(a, b);
	return 0;

}