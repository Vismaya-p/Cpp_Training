//to check armstrong or not
#include<iostream>
using namespace std;
int main()
{
	int digit=0, n, num, sum=0;
	cout << "enter the n";
	cin >> n;
	num = n;
	while (num > 0) {
		digit++;
		num /= 10;
	}
	num = n;
	while (num > 0)
	{
		sum = sum + pow(num % 10, digit);
		num /= 10;
	}

	if (sum == n)
		cout << "Armstrong num" << endl;
	else
		cout << "not an armstrong num" << endl;
	return 0;
}