#include<iostream>
using namespace std;
int main()
{
	int dig, num=0,count=0,num1=1;
	bool flag = false;
	cout << "enter the n" << endl;
	cin >> num;
	for (int k = 2;k < 9;k++)
	{
		if (num1 % k == 0)
		{
			flag = true;
		}
		else {
			count++;
			break;
		}
	}
	for (int j = 10;j <= 100;j++) {
		dig= j % 10;
		for (int i = 2;i <= num / 2;i++)
		{
			if (num1 % i == 0)
			{
				flag = true;
			}
			else
			{
				count++;
			}
			num1 =num1/ 10;
		}
	}
	if (count == num)
	{
		cout << "the number is" <<num1<< endl;
	}
	else
	{
		cout << "not valid" << endl;
	}
}
 	