#include<iostream>
#include<cstdlib>
using namespace std;
int * func(int a)
{
	static int sum = 0;
	sum += a;
	cout << "BA of sum=" << (unsigned long int) & sum <<" " << sum << endl;
	return &sum;

}
int main()
{
	int* ptr = func(101);//dangling ptr
	cout <<"Address of sum="<<(unsigned long int)ptr << " " << *ptr << endl;
	*ptr = 202;
	ptr = func(303);
	//cout << *ptr << endl;
}