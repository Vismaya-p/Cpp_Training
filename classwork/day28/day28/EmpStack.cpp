#include<iostream>
#include<cstring>
#define MAX 10
using namespace std;
class Employee
{
	int empId;
	string empName;
public:
	void setEmpId(int id)
	{
		empId = id;
	}
	void setEmpName(string name)
	{
		empName = name;
	}
	int getEmpId()
	{
		return empId;
	}
	string getEmpName()
	{
		return empName;
	}
};

class EmpStack
{
	Employee e[MAX];
	int top;
public:
	EmpStack()
	{
		top = -1;
	}
	bool push(int id, string name)
	{
		if (top == MAX - 1)
		{
			cout << "Stack Full" << endl;
			return false;
		}
		top++;
		e[top].setEmpId(id);
		e[top].setEmpName(name);
		return true;
	}
	Employee pop()
	{
		if (top == -1)
		{
			cout << "Stack Empty" << endl;
		}
		else
		{
			return e[top--];
		}

	}
	void display()
	{
		cout << "====Employees====" << endl;
		for (int i = top; i >= 0; --i)
		{
			cout << "Employee ID: " << e[i].getEmpId() << endl;
			cout << "Employee Name: " << e[i].getEmpName() << endl;
			cout << endl;
		}
	}
};
int main()
{
	EmpStack e1;
	e1.push(101, "Vismaya");
	e1.push(100, "Prabhakar");
	e1.push(256, "Aishu");
	e1.push(121, "Ram");
	e1.push(15, "Sam");
	e1.display();
	e1.pop();
	e1.pop();
	e1.display();
	return 0;
}
