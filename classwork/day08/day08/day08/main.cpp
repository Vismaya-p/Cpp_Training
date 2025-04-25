#include<iostream>
#include"primeFunction.h"
using namespace std;

int main()
{
	int num;
	cout << "enter the num: ";
	cin >> num;
	bool ret = isPrime(num);
	if (ret == true)
		cout << "given number:" << num << " is a prime number" << endl;
	else
		cout << "given number:" << num << " is not a prime number" << endl;
	return 0;

}