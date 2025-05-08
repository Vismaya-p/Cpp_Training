//given line:this is a cpp class
//o/p:siht si a ppc ssalc
#include<iostream>
# define MAX 10
using namespace std;
int lenStr(const char*);
char* revstr(char*, int);
char* tokenstr(char*, char);
int lenStr(const char* s)
{
	int c = 0;
	while (*s != '\0')
	{
		c++;
		s++;
	}
	return c;
}
char* tokenstr()
{

}
int main()
{
	char a[] = "This is a cpp class: ";
	