#include<iostream>
#include"day06.h"
using namespace std;
int area() {
	int r;
	cout << "enter the radius of circle";
	cin >> r;
	float area = 3.14 * r * r;
	cout << "area of the circle = " << area;
	return 0;
}