#include<iostream>
using namespace std;
int main() {
	int factorial = 1;
	factorial();
}

void fibonacci(int n)
{
	int a = 0, b = 1, sum;
	cout << "fibonacci series" << endl;
	for (int i = 0;i < n;i++) {
		cout << a << " ";
		sum = a + b;
		a = b;
		b = sum;
	}
	cout << endl;
}
int factorial(int n)
{
	for(int i=1;i<=n;i++)
	{
		factorial = factorial * i;
		return 1;
	
}