//Program to Print All Natural Numbers up to N Without Using a Semi-Colon
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 1;
	while (i <= n)
		cout << i++ << " ";
	return 0;
}
