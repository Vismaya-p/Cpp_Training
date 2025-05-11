//Program to Find the Length of the String Without using strlen() Function
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[100];
	cin.getline(str,100);
	int count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	cout << count;
}