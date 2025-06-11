//thread
#include<iostream>
#include<thread>
using namespace std;
//typedef unsigned long long ULL;
void greet()
{
	cout << "Hello world!" << endl;
}
void display(int x)
{
	cout << "X: " << x << endl;
}
void modifyX(int& x) { x *= 2; }


int main()
{
	//ULL i;
	thread t1(greet);
	t1.join();
	cout << "End of program" << endl;
	thread t2(display, 101);//pass by value
	t2.join();
	int val = 10;
	thread t3(modifyX, ref(val));//pass by address(reference)
	cout << "val: " << val << endl;
	t3.join();
	cout << "val: " << val << endl;

	

}