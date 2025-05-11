//oct2dec,dec2oct,dec2bin,bin2dec
#include<iostream>
using namespace std;
void oct2dec()
{
	int oct, dec = 0, place = 0;
	oct = 67;
	int temp = oct;
	while (temp)
	{
		int lastdigit = temp % 10;
		temp /= 10;
		dec = dec + lastdigit * pow(8, place);
		place++;
	}
	cout << dec;
}
void dec2oct()
{
	int oct=0, dec,base=0;
	dec = 55;
	int temp = dec;
	while (temp)
	{
		int lastdigit = temp % 8;
		temp /= 8;
		oct = oct + lastdigit * pow(10,base);
		base++;
	}
	cout << oct;
}
void dec2bin()
{
	int dec, bin = 0, place = 1;
	dec = 10;
	int temp = dec;
	while (temp)
	{
	int lastdigit = temp % 2;
	temp /= 2;
	bin = bin + lastdigit * pow(10, place);
	place++;
	}
	cout << bin;
}
void bin2dec()
{
	int dec = 0, place = 1;
	int bin = 101011;
	int temp = bin;
	while (temp)
    {
		int lastdigit = temp % 10;
		temp /= 10;
		dec = dec + lastdigit * pow(2,place);
		place++;
	}
		cout << dec;
}
int main()
{
	oct2dec();
	dec2oct();
	dec2bin();
	bin2dec();
	
}

