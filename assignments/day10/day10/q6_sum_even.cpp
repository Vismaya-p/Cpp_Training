#include<iostream>
using namespace std;
int sum(int, int);
int main()
{
	int n1,n2;
	cout << "enter two numbers: ";
	cin >> n1>>n2;
	sum(n1, n2);
}
int sum(int n1, int n2)
{
	int sum = 0;
	sum = n1 + n2;
	if (sum % 2 == 0)
		cout << "even number" <<endl;
	else
	{
		cout << "odd number"<<endl;
		return 0;
	}
}