#include<iostream>
using namespace std;

//Base class
class A
{
private:
	int x;//x cant be accessed in B
protected:
	int y;//y can be accessed in b
	void proMethod() 
	{ 
		cout << "A: protected method got called"; 
	}
public:
	A()
	{
		cout << "constructor a got called" << endl;
		x = 10;
		y = 20;
	}
	void dispA()
	{
		cout << "\t Hello from A" << endl;
		cout << "x= " << x << "\ty= " << y << endl;
	};
};
//derived class
class B :public A
{
private:
	int a;
protected:
	int b;
public:
	B()
	{
		cout << "constructor b got called" << endl;
		a = 20;
		b = 30;
	}
	void dispB()
	{
		cout << "\t Hello from B" << endl;
		cout << "a= " << a << "\tb= " << b << endl;
	}
	void protectB()
	{
		proMethod();
	}
};
int main()
{
	A objA;
	B objB;
	objB.dispB();
	objA.dispA();
	objB.protectB();
	
	return 0;
}