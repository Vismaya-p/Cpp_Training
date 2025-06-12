#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>
using namespace std;
mutex mtx1;
mutex mtx2;
void thread1()
{
	lock(mtx1, mtx2);
	lock_guard<mutex>lock1(mtx1,adopt_lock);
	this_thread::sleep_for(std::chrono::milliseconds(100));
	lock_guard<mutex>lock2(mtx2,adopt_lock);//waits for mtx2
	cout << "Thread 1 finished\n";
}
void thread2()
{
	lock(mtx1, mtx2);
	lock_guard<mutex>lock1(mtx1,adopt_lock);
	this_thread::sleep_for(std::chrono::milliseconds(100));
	lock_guard<mutex>lock2(mtx2,adopt_lock);//wait for mtx1
	cout << "Thread 2 finished\n";
}
int main()
{
	thread t1(thread1);
	thread t2(thread2);
	t1.join();
	t2.join();
}
