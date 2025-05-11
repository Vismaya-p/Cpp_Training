//Write a program in C++ to find the area and circumference of a circle.
#include <iostream>
using namespace std;
int main()
{
	float radius, area, circumference;
	const float PI = 3.14;
	cin >> radius;
	area = PI * radius * radius;
	circumference = 2 * PI * radius;

	cout << "Area of the circle: " << area << endl;
	cout << "Circumference of the circle: " << circumference << endl;

	return 0;
}