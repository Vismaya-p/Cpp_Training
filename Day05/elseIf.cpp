#include<iostream>
#include"switchCase.h"
using namespace std;
int elseIfLad()
{
	int amtInHand;
	cout << "enter the amount in hand:";
	cin >> amtInHand;
	if (amtInHand < 10) {
		cout << "Please get more amount" << endl;
	}
	else if (amtInHand >= 10 and amtInHand <= 50)
	{
		cout << "I can order snacks" << endl;
	}
	else if (amtInHand >50 and amtInHand <= 100)
	{
		cout << "I can order rotis" << endl;
	}
	else if (amtInHand > 100 and amtInHand < 500)
	{
		cout << "I can order for complete meals" << endl;
	}
	else
	{
		cout << "I can order anything" << endl;
	}
	cout << "End of program" << endl;
	return 0;
}