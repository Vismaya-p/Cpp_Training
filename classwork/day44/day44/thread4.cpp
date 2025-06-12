#include<iostream>
#include<mutex>
#include<thread>
using namespace std;
mutex m;
bool isPing = true;
void printPing()
{
	for (int i = 0;i < 5;)
	{
		lock_guard<mutex>lock(m);
		if (isPing)
		{
			cout <<"ping"<< endl;
			isPing =false;
			i++;
		}
		
	}
}
void printPong()
{
	for (int i = 0;i < 5;)
	{
		if (!isPing)
		{
			cout << "pong" << endl;
			isPing = true;
			i++;
		}
		
	}
}
int main()
{
	thread t1(printPing);
	thread t2(printPong);
	t1.join();
	t2.join();

}