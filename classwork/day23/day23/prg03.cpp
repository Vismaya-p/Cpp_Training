#include<iostream>
using namespace std;
void display(char[]);
int main()
{
	char s[] = "Vismaya Prabhakar";
	display(s);
	return 0;
}
void display(char name[])
{
	//name[7] = 'P';
	while (*name != '\0')
		cout << *name++;
	cout << endl;
}
//If i use const char name[],we can't change the data