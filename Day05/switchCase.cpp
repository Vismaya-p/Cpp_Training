#include<iostream>
#include"switchCase.h"
using namespace std;
enum category {
	apple = 1,
	pineapple,
	mixedfruit,
	orange,
};
int switchCase()
{
	int inputCategory;
	cout << "enter the juice category:";
	cin >> inputCategory;
	switch (inputCategory)
	{
	case apple:
		cout << "You have Choosen Apple Juice " << endl;
		break;
	case pineapple:
		cout << "You have Choosen pineapple Juice " << endl;
		break;
	case mixedfruit:
		cout << "You have Choosen mixedfruit Juice " << endl;
		break;
	case orange:
		cout << "You have Choosen orange Juice " << endl;
		break;
	default:
		cout << "No selection" << endl;
	}
	return 0;
}