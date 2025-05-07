#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,dig;
	cin >> n;
	int temp = n;
	while (temp != 0)
	{
		dig = temp % 10;
		rev = rev * 10 +dig;
		temp = temp / 10;
	}
	if (rev == n)
		cout << "is palindrome";
	else
		cout << "not palindrome";
}