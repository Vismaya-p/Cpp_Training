#include<iostream>
using namespace std;
int main()
{
	int n,fact=1;
	cin >> n;
	/*for (int i = n;i >= 1;i--)
	{
		fact = fact * i;
	}
	cout << fact;
	*/
	while (n >= 1)
	{
		fact = fact * n;
		n = n - 1;
	}
	cout << fact;
}