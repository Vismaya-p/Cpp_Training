#include<iostream>
using namespace std;
int main()
{
	int a[3] = { 1,2,3 };
	int* ptr = nullptr;
	ptr = a;
	cout << *ptr<<endl;
	ptr++;
	cout << *ptr<<endl;
	ptr++;
	cout << *ptr<<endl;
	
}