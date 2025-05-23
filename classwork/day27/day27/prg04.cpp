#include<iostream>
using namespace std;
class T
{
private:
	static int val;
public:
	T()
	{
		val++;
	}
	/*static int getVal()
	{
		return val;
	}*/
	void disp()
	{
		cout << "Value of val:" << val;

	}
};
int T::val;
int main()
{
	T t1;
	static int val;//need to assign it outside the class also orelse we can't access it
	t1.disp();
	//cout << T::val << endl;

	T t2;
	t2.disp();

	return 0;
}