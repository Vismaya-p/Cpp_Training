#include<iostream>
using namespace std;
void noMirror(int);
void noMirror(int n)
{
	if (n == 0)
		return;
	int digit = n % 10;
	cout << digit << " ";
	noMirror(n / 10);
}
int main()
{
	int n;
	cout << "enter the number: ";
	cin >> n;
	cout << "enter the reversed number: ";
	noMirror(n);
	return 0;
}
