#include<iostream>
using namespace std;
int tri(int a, int b, int c)
{
	if(a==0||b==0||c==0)
	{
		return 0;
	}
	else if(a+b+c == 180)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a, b, c;
	cout << "enter 3 angles: ";
	cin >> a >> b >> c;
	if (tri(a, b, c))
	{
		cout << "The angles form a valid Triangle" << endl;
	}
	else {
		cout << "not valid" << endl;
	}
}