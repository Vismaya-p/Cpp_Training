#include<iostream>
using namespace std;
template<class T>
void mySwap(T &a, T &b)
{
	T t = a;
	a = b;
	b = t;

}
template<class T1, class T2>
float add(T1 a,T2 b)//T2 add(T1 a,T2 b)
{
	float sum = a + b;//T2 sum=a+b;
	return sum;
}
int main()
{
	int a=10, b=20;
	cout << a << " " << b;
	mySwap(a, b);
	cout << a << " " << b;
	char c = 'a', d = 'b';
	cout << c << " " << d;
	mySwap(c, d);
	cout << c << " " << d;

	cout << add(10, 12.2);
	cout << add(12.2, 10);
	
}