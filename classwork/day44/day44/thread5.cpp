#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex m;
int turn = 0;
void A()
{
	for (int i = 0;i < 5;)
	{
		lock_guard<mutex>lock(m);
		if (turn == 0)
		{
			cout << "A";
			turn = 1;
			i++;
		}
	}

}
void B()
{
	for (int i = 0;i < 5;)
	{
		lock_guard<mutex>lock(m);
		if (turn == 1)
		{
			cout << "B";
			turn = 2;
			i++;
		}
	}

}
void C()
{
	for (int i = 0;i < 5;)
	{
		lock_guard<mutex>lock(m);
		if (turn == 2)
		{
			cout << "C";
			turn = 0;
			i++;
		}
	}
}
int main()
{
	thread t1(A);
	thread t2(B);
	thread t3(C);
	t1.join();
	t2.join();
	t3.join();
	return 0;
}