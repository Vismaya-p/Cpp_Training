#include<iostream>
using namespace std;
int square(int a);
int rectangle(int l, int b);
float triangle(int c, int h);
double circle(int r);
int display();
int main(int argc, char* argv[])
{
	if (argc > 1)
		runnable(atoi(argv[1]));
	else
		runnable(-1);

}
int runnable(int ch)
{
	int r,a, l, b, c, h;
	//cout << "enter your choice(1-square,2-rectangle,3-triangle,4-circle): ";
	//cin >> ch;
	if (ch == -1)
		ch = display();
	switch (display())
	{
	case 1:
		cout << "enter the side of square:";
		cin >> a;
		cout << "area of square: " << square(a);
		break;
	case 2:
		cout << "length and breadth of rectangle: ";
		cin >> l >> b;
		cout << "area of rectangle: " << rectangle(l, b);
		break;
	case 3:
		cout << "base and height of triangle:";
		cin >> c >> h;
		cout << "area of triangle: " << triangle(c,h);
		break;
	case 4:
		cout << "radius of circle: ";
		cin >> r;
		cout << "area of circle: " << circle(r);
		break;
	default:
		cout << "Wrong choice" << endl;
	}
}

int square(int a)
{
	int areasq = a * a;
	return areasq;

}
int rectangle(int l, int b)
{
	int arearec = l * b;
	return arearec;
}
float triangle(int c, int h)
{
	float areatri = 0.5 * c * h;
	return areatri;
}
double circle(int r)
{ 
	double areacir = 3.14 * r * r;
	return areacir;

}
int display()
{
	int ch;
	cout << "enter your choice(1-square,2-rectangle,3-triangle,4-circle): ";
	cin >> ch;
	return ch;
}