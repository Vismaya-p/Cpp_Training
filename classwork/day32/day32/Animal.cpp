#include<iostream>
using namespace std;
class Animal
{
public:
	void make_sound()
	{
		cout << "Animal makes a sound" << endl;
	}
};
class Dog :public Animal
{
public:
	void make_sound()
	{
		cout << "Dog Barks" << endl;
	}
};
class Cat :public Animal
{
public:
	void make_sound()
	{
		cout << "Cat Meows" << endl;
	}
};
int main()
{
	Dog animal1;
	Cat animal2;
	animal1.make_sound();
	animal2.make_sound();

}
