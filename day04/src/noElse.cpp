#include<iostream>
#include<stringHandling.h>
#define MAXCAP 100
using namespace std;
int noElse() {
	int capCurrent, unusedCap = 0;
	cout << "enter the current capacity";
	cin >> capCurrent;
	unusedCap = MAXCAP - capCurrent;
	if (unusedCap == 0)
	{
		cout << "Storage is full" << endl;
		return 0;
	}
	cout << "you can store items in the storage" << endl;
}