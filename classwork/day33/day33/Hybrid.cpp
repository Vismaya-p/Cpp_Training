//hybrid inheritance
#include<iostream>
using namespace std;
class A
{
public:
	void dispA()
	{
		cout << "A is called" << endl;
	}

};
class B :virtual public A
{
public:
	void dispB()
	{
		cout << "B is called" << endl;
	}
};
class C :virtual public A//add virtual whereever we are calling A to solve diamond prblm
{
public:
	void dispC()
	{
		cout << "C is called" << endl;
	}
};
class D:public B,public C
{
public:
	void dispD()
	{
		cout << "D is called" << endl;
	}
};
int main()
{
	D dObj;
	//dObj.B::dispA();
	dObj.dispA();
	dObj.dispB();
	dObj.dispC();
	dObj.dispD();
}