#include<iostream>
using namespace std;
int main()
{
	int digit, n, num, res = 0;
	cout << "enter the n";
	cin >> n;
	num = n;
	while (num != 0) {
		digit = num % 10;
		res += digit * digit * digit;
		num /= 10;

	}
	if (res == n)
		cout << "Armstrong num" << endl;
	else
		cout << "not an armstrong num" << endl;
	return 0;
}