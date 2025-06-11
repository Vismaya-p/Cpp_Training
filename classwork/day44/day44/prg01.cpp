#include <iostream>
#include <thread>
using namespace std;
void greet()
{
	cout << "Hello Vismaya" << endl;
}
int main()
{
	thread t(greet);
	t.join();//attach the process of the thread to the main thread
	cout << "End of Program" << endl;
	//thrad has towait until t thread completes
}