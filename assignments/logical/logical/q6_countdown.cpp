#include<iostream>
using namespace std;
void countDown(int n)
{
	while (n != 0)
	{
		cout << n << endl;
		n--;
	}
}
int main()
{
	int n;
	cout << "enter the n value" << endl;
	cin >> n;
	countDown(n);
	cout << "launched" << endl;
	return 0;
}