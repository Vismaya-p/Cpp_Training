#include<iostream>
#include<thread>
//#include<mutex>
using namespace std;
//mutex m;
void numbers(int start,int end)
{
	//m.lock();
	for (int i = start;i <= end;i++)
	{
		cout << i << endl;
	}
	cout << endl;
	//m.unlock();
}
int main()
{
	thread t1(numbers,1, 10);
	thread t2(numbers,11, 20);
	t2.join();
	t1.join();

}