//smallest digit in the given number
#include<iostream>
using namespace std;
int smallestDigit(int n)
{
	int small = 9;
	while (n != 0)
	{
		int digit = n % 10;
		if (small >= digit)
		{
			small = digit;
		}
		n = n / 10;
	}
	return small;
}
int main()
{
	int n;
	cout << "enter a number:" << endl;
	cin >> n;
	cout << "the smallest digit is: " << smallestDigit(n)<<endl;
	return 0;

}

