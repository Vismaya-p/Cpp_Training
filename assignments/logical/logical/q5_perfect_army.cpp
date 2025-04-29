#include<iostream>
using namespace std;
int perfectNum(int num)
{
	int sum = 0;
	for (int i = 1;i <= num / 2;i++)
	{
		if (num % i == 0)
			sum = sum + i;
	}
	return sum;
}
int main()
{
	int num;
	cout << "enter the num" << endl;
	cin >> num;
	if (perfectNum(num) == num)
		cout << "army number is perfect" << endl;
	else
		cout << "army number is not perfect" << endl;
	return 0;
}