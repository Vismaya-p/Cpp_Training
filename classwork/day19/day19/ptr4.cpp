#include<iostream>
using namespace std;
int main()
{
	int a[5] = { 10,20,30,40,50 };
	int* ptr = a;
	cout << *ptr++ << endl;//10
	cout << *ptr++ << endl;// 20
	cout << *++ptr<< endl;//points  to th next location 40
	cout << ++*ptr << endl;//increment value 41
	ptr = a;//reassigning to the base address
	int prod = *ptr * *ptr;

	cout << "prod: " << prod << endl;
	cout << sizeof(ptr) << " " << sizeof(void*) << endl;
	return 0;
}