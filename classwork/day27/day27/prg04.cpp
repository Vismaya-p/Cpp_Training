#include<iostream>
using namespace std;
class T
{
private:
	static int val;
public:
	void disp()
	{
		cout << "Value of val:" << val;
	}
};
//int T::val;
int main()
{
	T t;
	static int val;//need to assign it outside the class also orelse we can't access it
	t.disp();
	//cout << T::val << endl;
	return 0;
}