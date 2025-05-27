#include<iostream>
#include<cstring>
using namespace std;
class Employee
{
	int empId;
	string name;
public:
	Employee(int id,string n):empId(id),name(n){}
};
class Developer :public Employee
{
protected:
	int coding_hours;
public:
	Developer(int id, string n,int h) :Employee(id, n)
	{
		coding_hours = h;
	}
};
class Manager :public Employee
{
	int team_size;
public:
	Manager(int id, string n,int s) :Employee(id, n)
	{
		team_size = s;
	}
};
class TechLead :public Developer, public Manager
{
public:
	TechLead(int id, string n, int s,int h):Employee(id,n),Developer(id,n,h),Manager(id,n,s){}
};