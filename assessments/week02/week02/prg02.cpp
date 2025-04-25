//to check the digit frequencies
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter a num: ";
	cin >> n;
	for (int i = 0;i <= 9;i++)
	{
		int count = 0;
		int temp = n;
		while (temp != 0)
		{
			int digit = temp % 10;
			if (digit == i)
				count++;
			temp = temp / 10;
		}
		
		cout << i << ":" << count << endl;
	}
	return 0;
	}