#include<iostream>
using namespace std;
int sumOfN(int n)
{
	if (n == 0)
		return 0;
	else
		return (n + sumOfN(n - 1));
}
int main()
{
	int n,sum=0;
	cout << "enter n value";
	cin >> n;
	cout<<sumOfN(n);
	
}