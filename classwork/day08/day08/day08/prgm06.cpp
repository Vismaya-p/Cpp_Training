#include<iostream>
using namespace std;
bool isPrime(int);
int main()
{
	int n;
	int sum = 0, count = 0;
	cout << "enter number" << endl;
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		for (int j = i;j <= n;j++)
		{
			if (isPrime(i) && isPrime(j)) {
				sum = i + j;
				if (sum == n) {
					cout << "sum = " << i << "+" << j << "=" << sum << endl;
					count++;
				}
			}
		}
	}
	cout << "no of ways = " << count << endl;
}
bool isPrime(int n)		
{
	bool flag = false;
	if (n <= 1)
		return false;
	for (int i = 2;i <= n / 2;i++)
	{
		if (n % i == 0)
		{
			flag = true;
			break;
		}
	}
}
