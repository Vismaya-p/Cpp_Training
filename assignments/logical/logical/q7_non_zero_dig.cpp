#include<iostream>
using namespace std;
bool leftDig(int num)
{
	while (num > 10)
	{
		num = num / 10;
	}
	if (num % 2 == 0)
		return true;
	else
		return false;
}
int main()
{
	int code;
	cout << "enter the secret code" << endl;
	cin >> code;
	if (leftDig(code))
		cout << "code is valid" << endl;
	else
		cout << "code is not valid" << endl;
	return 0;
}