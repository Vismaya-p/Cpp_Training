#include<iostream>
#include<thread>
#include<mutex>

using namespace std;
mutex m;
void printNum(int n, bool flag)
{
	m.lock();
	int num = 1;
	while (num <= n)
	{
		if (flag)
		{
			if (num % 2 == 0)
			{
				cout << num << endl;
			}
			num++;
		}
		else  
		{
			if(num % 2 != 0)
				cout << num << endl;
			num++;
		}
	}
	m.unlock();
}
int main()
{
	thread t1(printNum, 10, false);
	thread t2(printNum, 30, true);
	t1.join();
	t2.join();
	return 0;
}