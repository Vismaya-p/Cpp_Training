#include<iostream>
bool isPrime(int);
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
bool isPrime(int num)
{
	bool flag = false;
	if (num <= 1)
		return false;
	for (int i = 2;i <= num/2;i++)
	{
		if (num % i == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag == false)
		return true;
	else
		return false;
}
