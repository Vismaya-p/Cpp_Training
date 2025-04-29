#include<iostream>
using namespace std;
int coin(int n)
{
	int sum = 0;
	while (n!=0) {
		int digit = n % 10;
		if (digit % 2 != 0)
		{
			sum = sum + digit;
		}
		n = n / 10;
		
	}
	return sum;
}
int main()
{
	int n;
	cout << "enter total coin collection number: " << endl;
	cin >> n;
	cout << "odd digit sum is: " << coin(n);

	return 0;
}