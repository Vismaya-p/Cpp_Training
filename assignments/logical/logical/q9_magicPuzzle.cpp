#include<iostream>
using namespace std;
bool is_prime(int num)
{
	bool flag = false;
	if (num <= 1)
		return false;

	for (int i = 2;i <= num / 2;i++)
	{
		if (num % i == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag == 1)
		return false;
	else
		return true;
}
int sum(int digit)
{
	int mul = 1;
	int dig = digit;
	while (dig)
	{
		int rem = dig % 10;
		mul = mul * rem;
		dig = dig / 10;
	}
	return mul;
}
int main()
{
	int digit;
	cout << "enter the digit" << endl;
	cin >> digit;
	int res = sum(digit);
	if (is_prime(res))
		cout << "box unlocked" << endl;
	else
		cout << "can't able to open" << endl;

	return 0;
}