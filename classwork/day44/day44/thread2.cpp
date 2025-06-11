#include<iostream>
#include<thread>
using namespace std;
void printNum(int n, bool flag)
{
	for (int i = 0;i < n;i++)
	{
		if ((i % 2 == 0) == flag)
		{
			cout << i << endl;
		}
	}
}
int main()
{
	thread t1(printNum, 10, false);
	thread t2(printNum, 30, true);
	t1.join();
	t2.join();
}