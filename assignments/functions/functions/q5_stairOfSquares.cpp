#include<iostream>
using namespace std;
int squaredSum(int n)
{
	if (n == 0)
		return 0;
	return (n * n) + squaredSum(n - 1) ;

}
int main()
{
	int n;
	cout << "enter n:";
	cin >> n;
	cout<<"sum of squares = " << squaredSum(n) << endl;

}