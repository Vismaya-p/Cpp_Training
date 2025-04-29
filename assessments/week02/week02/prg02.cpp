//to check the digit frequencies
#include<iostream>
using namespace std;
int main()
{
	int n;
	int num0 = 0,num1 = 0,num2 = 0,num3 = 0,num4 = 0, num5 = 0, num6 = 0,num7 =0,num8 = 0, num9 = 0;
	cout << "enter a num: ";
	cin >> n;
	while (n != 0)
	{
		int i = 10;
		int r = n % 10;
		switch (r)
		{
		case 0:
			num0++;
			break;
		case 1:
			num1++;
			break;
		case 2:
			num2++;
			break;
		case 3:
			num3++;
			break;
		case 4:
			num4++;
			break;
		case 5:
			num5++;
			break;
		case 6:
			num6++;
			break;
		case 7:
			num7++;
			break;
		case 8:
			num8++;
			break;
		case 9:
			num9++;
			break;
		}
		n /= 10;
	}
	cout << "digit frequencies:" << endl;
	cout << "0:" << num0 << endl;
	cout << "1:" << num1 << endl;
	cout << "2:" << num2 << endl;
	cout << "3:" << num3 << endl;
	cout << "4:" << num4 << endl;
	cout << "5:" << num5 << endl;
	cout << "6:" << num6 << endl;
	cout << "7:" << num7 << endl;
	cout << "8:" << num8 << endl;
	cout << "9:" << num9 << endl;

}
	/*{int n;
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
	return 0;}*/
	