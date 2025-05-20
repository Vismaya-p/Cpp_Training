#include<iostream>
#include<cstring>
using namespace std;
int add(int, int);
int add(int, int, int);
char* add(char*, char*);
int add(int v1, int v2) {
	return v1 + v2;
}
int add(int v1, int v2,int v3) {
	return v1 + v2+v3;
}
char* add(char* s1, char* s2)
{
	return strcat(s1, s2);
}

int main()
{
	char s1[20] = "Vismaya ";
	char s2[20] = "Prabhakar";
	cout << add(s1, s2)<<endl;
	cout << add(1, 20) << endl;
	cout << add(1, 20,30) << endl;
}