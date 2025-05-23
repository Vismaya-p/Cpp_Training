//Validate if luggage is overweight.
#include<iostream>
#include<cstring>
using namespace std;
class Luggage
{
	private:
	char passName[50];
	float weight;
	int limit;
	public:
	Luggage(const char name[], float w);
	void checkOverweight();	
};
Luggage::Luggage(const char name[], float w)
{
	strcpy(passName, name);
	weight = w;
	limit = 20;
}
void Luggage::checkOverweight()
{
	if (weight > limit)
	{
		cout << "Overweight! Exceeded by "<<weight-limit<<"kg."<< endl;
	}
	else
	{
		cout << "Luggage within limit." << endl;
	}
}

int main()
{
	Luggage l1("Rita", 18);
	Luggage l2("sam", 25);
	l1.checkOverweight();
	l2.checkOverweight();
}