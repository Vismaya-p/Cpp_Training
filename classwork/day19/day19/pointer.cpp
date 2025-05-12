//pointer
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	char ch = 'A';
	float f = 10.5;
	void* ptr;
	cout << "Address of a= " << (unsigned long int) & a << " and its value= " << a<<endl;
	cout << "Address of ch= " << (unsigned long int) & ch << " and its value= " << ch << endl;
	cout << "Address of f= " << (unsigned long int) & f << " and its value= " << f << endl;

	cout << "Address of ptr= " << (unsigned long int) & ptr << " and its value= " << ptr << endl;
}
