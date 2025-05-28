#include<iostream>
using namespace std;
class A
{
protected:
	int a;
	void dispAPtr()
	{
		cout << "A:Method of protected" << endl;
	}
public:
	A() { a = 10; }
	void dispA()
	{
		cout << "A: a =" << a << endl;
	}
};
class B :private A
{
public:
	void dispB()//method
	{
		a = 20;
		dispAPtr();
		dispA();
	}
};
class C :protected B
{
public:
	void dispC()
	{
		dispB();
	}
};
int main()
{
	A objA;
	B objB;
	C objC;
	objC.dispC();
	

}