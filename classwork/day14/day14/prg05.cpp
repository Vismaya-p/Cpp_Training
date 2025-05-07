
//string length without using strlen
#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str1[10]="hello";
	int count = 0;
	while(str1[count]!='\0')
	//for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
    cout << count;
	//while(str1[count++]!='\0');it will internally increment and count null char as well
}
