#include<iostream>
#include<cstring>
using namespace std;
typedef union Emp
{
	int id;
	char name[20];
};
int main()
{
	Emp e;
	cout << sizeof(e) << endl;
	e.id = 101;
	cout << e.id << endl;
	strcpy(e.name, "Vismaya");



}