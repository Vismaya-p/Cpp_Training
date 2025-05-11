//converting any base to dec
#include<iostream>
using namespace std;
/*
* dec2base: user input:1st arg decimal value,2nd arg to the base for convertion
* return:converted to base value
*/
int dec2base(int, int);
int base2dec(int, int);
//int base1tobase2(int, int, int);
int main()
{
	cout<<dec2base(55,8);
	cout<<base2dec(101,2);
}
int dec2base(int num, int base)
{
	int r;
	int place = 0;
	int sum = 0;
	while (num)
	{
		r = num % base;
		sum += r * pow(10, place);
		num /= base;
		place++;
	}
	return sum;
}
int base2dec(int num, int base)
{
	int r;
	int place = 0;
	int sum=0;
	while (num)
	{
		r = num % 10;
		sum = sum + r * pow(base, place);
		place++;
		num /= 10;
	}
return sum;
}
//int base1tobase2(int num, int base1, int base2)
