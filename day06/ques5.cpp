#include<iostream>
#include"day06.h"
using namespace std;
int swap() {
	int a, b;
	cout << "enter the value of a and b: ";
	cin >> a >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "after swapping a, b = " << a << b;
	return 0;
}
