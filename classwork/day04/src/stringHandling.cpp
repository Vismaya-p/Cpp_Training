#include<iostream>
#include<stringHandling.h>
#include<cstring>
using namespace std;
void stringHandling()
{
	char ch = 'A';
	char fName[20];//array of chars(size if fixed)
	string sName;//string synamically grows the size of the string
	cout << "ch value" << ch << endl;
	cout << "Enter First name:";
	cin >> fName;
	cout << "Enter Second name:";
	cin >> sName;
	cout << "\nmy name is \n" << fName << "\b" << sName << endl;
	char Name[]="Hello";
	cout << sizeof(Name) << endl;
	//cout << "string length of name:" << strlen(Name) << endl;
	for (int i = 0;i < sizeof(Name);i++)
	{
		printf("\n%c=%d", Name[i], Name[i]);
	}
}
void enumHandling()
{
	enum day{MONDAY=1000,TUESDAY,WEDNESDAY=2000,THURSDAY,FRIDAY,SATURDAY};
	day today = TUESDAY;
	cout << "value of today:" << today << endl;

}