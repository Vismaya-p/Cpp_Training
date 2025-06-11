#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex m;
int amt = 0;
void add(int s)
{ 
	m.lock();
	amt += s;
	cout << "Amount add:" << amt << endl;
	m.unlock();
}
void sub(int a)
{
	m.lock();
	amt -= a;
	cout << "Amount sub: " << amt << endl;
	m.unlock();
}
int main()
{
	thread t1(add, 700);
	thread t2(sub, 200);
	t2.join();
	t1.join();
	
	return 0;

}