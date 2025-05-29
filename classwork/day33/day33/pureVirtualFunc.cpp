#include<iostream>
using namespace std;
//Abstract base class
class Animal
{
public:
	virtual void eat() = 0;
	virtual void drink() = 0;
	virtual void breathe() = 0;
	virtual void sleep() = 0;
	virtual void move() = 0;
	virtual void lifeSpan() = 0;
};
class Cat :public Animal
{
public:
	void eat(){}
	void drink() {}
	void breathe() {}
	void sleep() {}
	void move() {}
	void lifeSpan() {}
};
int main()
{
	Cat c;
}