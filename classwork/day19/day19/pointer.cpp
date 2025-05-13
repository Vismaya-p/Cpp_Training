//pointer
//NULL or nullptr=(void *)0
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 12;
	char ch = 'A';
	float f = 10.5;
	//void* ptr=nullptr;
	int* ptr1 = nullptr;
	printf("\naddress of a=%u and its value =%d\n", &a, a);
	printf("\naddress of ch=%u and its value =%c\n", &ch, ch);
	printf("\naddress of f=%u and its value =%f\n", &f, f);
	printf("\naddress of ptr=%u and its value =%u\n", &ptr1, ptr1);
	a = 10;
	ptr1 = &a;
	printf("\naddress of ptr=%u and its value =%u\n", &ptr1, ptr1);
	printf("\nptr1 is pointing to=%u\n", ptr1);
	//CO(CO(ptr1))=value of a=dereferencing the pointer
	printf("%u is having a value stored as =%d\n",ptr1, *ptr1);//dereferencing the pointer

	ptr1 = &b;
	printf("%u is having a value stored as =%d\n", ptr1, *ptr1);
	//b=101
	*ptr1 = 101;
	printf("address of b =%u and its value=%d",&b,b );

	//ptr1 = &ch;
	//printf("address of ch =%c and its value=%d",ptr1,*ptr1);

	return 0;
	
	//cout << "Address of a= " << (unsigned long int) & a << " and its value= " << a<<endl;
	//cout << "Address of ch= " << (unsigned long int) & ch << " and its value= " << ch << endl;
	//cout << "Address of f= " << (unsigned long int) & f << " and its value= " << f << endl;
	// cout << "Address of ptr= " << (unsigned long int) & ptr1 << " and its value= " << ptr1 << endl;
}
