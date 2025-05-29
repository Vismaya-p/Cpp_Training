#include<iostream>
using namespace std;
template<class T1,class T2>
class calculator
{
private:
	T1 data1;
	T2 data2;
public:
	calculator(T1 v1, T2 v2) :data1(v1), data2(v2) {}
	void add()
	{
		cout<<"addition= "<<data1 + data2 << endl;
	}
	void sub()
	{
		cout<<"subtraction= "<< data1 - data2 << endl;
	}
	void mul()
	{
		cout<<"multiplication= "<< data1 * data2 << endl;
	}
	void div()
	{
		if (data2 == 0)
		{
			cout << "division by zero not possible";
		}
		else
		{
			cout <<"division= " << data1 / data2 << endl;
		}
	}
	
	
};
int main()
{
	calculator<int, float>c(40, 10.2);
	c.add();
	c.sub();
	c.mul();
	c.div();
	
}