//Program for Decimal to Binary Conversion
#include<iostream>
using namespace std;
int main()
{
	int dec, bin = 0, place = 1;
	cin>>dec ;
	int temp = dec;
	while (temp)
	{
		int lastdigit = temp % 2;
		temp /= 2;
		bin = bin + lastdigit * pow(10, place);
		place++;
	}
	cout << bin;
	return 0;
}