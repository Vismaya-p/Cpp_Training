#include<iostream>
using namespace std;
class T
{
private:
	int val;
public:
	T(int v) { val = v; }
	void disp() 
	{ 
		cout << val << endl; 
	}
	friend void func1(T &);
};
void func1( T& t)
{
	t.disp();
	t.val = 1000;

}
int main()
{
	T t1(10);
	func1(t1);
	t1.disp();
	return 0;
}