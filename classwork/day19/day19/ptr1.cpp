#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* ptr = nullptr;
	ptr = &a;
	cout << *ptr << endl;
	//update the value of a using ptr
	*ptr = 101;
	//accessing value of a using ptr
	cout << *ptr << endl;
	cout << a << endl;
	//accesing the value of b using ptr
	ptr = &b;
	cout << *ptr << endl;
	//accessing the value of c using ptr
	ptr = &c;
	cout << *ptr << endl;

	return 0;
}