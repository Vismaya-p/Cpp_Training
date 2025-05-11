// Program for Decimal Octal Conversion
#include <iostream>
using namespace std;
int main()
{
	int oct = 0, dec, base = 0;
	cin>>dec;
	int temp = dec;
	while (temp)
	{
		int lastdigit = temp % 8;
		temp /= 8;
		oct = oct + lastdigit * pow(10, base);
		base++;
	}
	cout << oct;
	return 0;
}