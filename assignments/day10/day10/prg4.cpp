#include<iostream>
using namespace std;
int noOfZero(int n)
{
	if (n==0)
		return 1;
	if (n % 10 == 0)
		return 1 + noOfZero(n/10);
	else
		return noOfZero(n/10);
	
}
int main()
{
	int n;
	cout << "enter a number";
	cin >> n;
	cout<<"no of zeros: "<<noOfZero(n);
	return 0;

}