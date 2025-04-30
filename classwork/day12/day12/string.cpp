#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char name[20] = { 'v','i','s','m','u' };
	for (int i = 0;i < 20;i++)
		printf( "%c=%d\n",name[i], name[i]);
	for (int i = 39,count=0;i < 60;i++)
		name[count++] = i;
	cout <<"===================" << endl;
	for (int i = 0;i < 20;i++)
		printf("%c=%d\n", name[i], name[i]);
	name[0] = 'v';
	name[1] = 'i';
	name[2] = 's';
	name[3] = 'm';
	name[4] = 'u';
	cout << "===================" << endl;
	for (int i = 0;i < 20;i++)
		printf("%c=%d\n", name[i], name[i]);
	printf("Name:%s\n", name);
	
}