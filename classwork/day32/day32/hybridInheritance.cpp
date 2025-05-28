//father to children(siblings)->hierarchial inheritance
//combination of multiple and hierarchical
#include<iostream>
using namespace std;
class Animal
{
public:
	void eat() { cout << "Eat" << endl; }
	void walk() { cout << "Walk" << endl; }
	void makeasound() { cout << "Make a sound" << endl; }
	virtual void soundLike() { cout << "animal sound" << endl; }//runtime polymorphism
};
class cat :public Animal
{
public:
	void dispCat() { cout << "Cat" << endl; }
	void soundLike() { cout << "Meow!"; }//overridden by base class method

};
class dog:public Animal
{
public:
	void dispDog() { cout << "Dog" << endl; }
	void soundLike() { cout << "Bow!"; }

};
int main()
{
	Animal *bcPtr=nullptr;
	cat c;
	dog d;
	

	c.dispCat();
	c.eat();
	c.walk();
	c.makeasound();
	c.soundLike();
	cout << "\n===============\n\n";
	d.dispDog();
	d.eat();
	d.walk();
	d.makeasound();
	d.soundLike();
	cout << "\n===============\n\n";
	bcPtr = &c;
	bcPtr->eat();
	bcPtr->walk();
	bcPtr->makeasound();
	bcPtr->soundLike();//without using virtual in base class calls animal sound

	cout << "\n===============\n\n";
	bcPtr = &d;
	bcPtr->eat();
	bcPtr->walk();
	bcPtr->makeasound();
	bcPtr->soundLike();

	
	return 0;
}

