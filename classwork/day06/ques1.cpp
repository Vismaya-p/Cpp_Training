#include<iostream>
#include"day06.h"
using namespace std;
int sumOfDigit(){
int dig, n, sum = 0;
cout << "enter a 5 digit num";
cin >> n;
for (int i = 0;i < 5;i++)
{
	dig = n % 10;
	sum = sum + dig;
	n = n / 10;
}
cout << sum;
return 0;
}