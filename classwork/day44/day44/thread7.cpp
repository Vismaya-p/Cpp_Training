#include<iostream>
#include<mutex>
#include<thread>
using namespace std;
int n = 30;
int current = 1;
mutex m;
void fizz()
{
	while (true)
	{
		lock_guard<mutex>lock(m);
		if (current > n)
			break;
		if (current % 3 == 0 && current % 5 != 0)
		{
			cout << "Fizz\n";
			current++;
		}
	}
}
void buzz()
{
	while (true)
	{
		lock_guard<mutex>lock(m);
		if (current > n)
			break;
		if (current % 5== 0 && current % 3!= 0)
		{
			cout << "Buzz\n";
			current++;
		}
	}
}
void fizzbuzz()
{
	while (true)
	{
		lock_guard<mutex>lock(m);
		if (current > n)
			break;
		if (current % 3 == 0 && current % 5 == 0)
		{
			cout << "FizzBuzz\n";
			current++;
		}
	}
}
void number()
{
	while (true)
	{
		lock_guard<mutex>lock(m);
		if (current > n)
			break;
		if (current % 3 != 0 && current % 5 != 0)
		{
			cout <<current<< "\n";
			current++;
		}
	}
}
int main()
{
	thread t1(fizz);
	thread t2(buzz);
	thread t3(fizzbuzz);
	thread t4(number);

	t1.join();
	t2.join();
	t3.join();
	t4.join();
	return 0;
}