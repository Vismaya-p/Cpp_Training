#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
int turn = 0;
mutex m;

void printOdd()
{
	for (int i = 1;i <= 19;)
	{
		lock_guard<mutex>lock(m);
		if (turn== 0)
		{
			cout << i << " ";
			turn = 1;
			i=i+2;
		}
	}
	
}
void printEven()
{
	for (int i = 2;i <= 20;)
	{
		lock_guard<mutex>lock(m);
		if (turn == 1)
		{
			cout << i << " ";
			turn = 0;
			i=i+2;
		}

	}
	
}
int main()
{
	thread t1(printEven);
	thread t2(printOdd);
	t1.join();
	t2.join();
	cout << endl;
	return 0;
}