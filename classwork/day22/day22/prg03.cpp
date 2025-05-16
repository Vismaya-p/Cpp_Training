//Maximum of two numbers using pointers
#include<iostream>
using namespace std;
int max2Nos(int*, int*);
void dispEq(int);
void dispAppName(char*);
void dispEq(int)
{
	for (int i = 0;i < n;i++)
	{

	}
}
int max2Nos(int* x, int* y)
{
	/*if (*x > *y)
		return *y;
	else
		return *x;
		*/

	return((*x > *y) ? *x : *y);
}
int main()
{
	int x1=20,y1=40;
	cout << max2Nos(&x1, &y1)<<endl;
}