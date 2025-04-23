/*
Author:Vismaya
doc:17/04/2025
*/
#include <iostream>
//#include<string.h>
using namespace std;
int main()
{
	int _id = 0;
	int itr1 = 0, itr2 = 0;// a,b,c are used to store integer values
	char first_name[100] = { '\0' }, second_name[100] = { '\0' };
	for (int itr2 = 0;itr2 < 10;itr2++)
		cout << itr2 << endl;
	cout << itr2 << endl;
	strcat(first_name, "vismaya");
	cout << first_name << endl;
	register int i;
	for (i = 0;i < 100;i++)
		cout << i << endl;

	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
	{
		int itr1 = 202;
		cout << itr1 << endl;
		cout << first_name << endl;
		cout << &itr1 << endl;
		cout << &first_name << endl;
	}
	cout << itr1 << endl;
}