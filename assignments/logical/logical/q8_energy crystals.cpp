#include<iostream>
using namespace std;
int power(int n)
{
	int pow = 1;
	while (pow * 2 <= n)
	{
		pow = pow * 2;
	}
	return pow;
}
int main()
{
	int n;
	cout << "enter the number: " << endl;
	cin >> n;
	cout << "the highest energy is: " << power(n) << endl;
	return 0;
}