#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char name[20];
	fgets(name, 19, stdin);
	puts(name);
	printf("%s\n", name);
	//cout << strlen(name) << endl;
	return 0;
}