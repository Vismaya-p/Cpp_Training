#include<iostream>
#include<cstring>
using namespace std;
class Employee
{
	int empId;
	string name;
public:
	Employee(int empId,string name)
	{
		this->empId = empId;
		this->name = name;
	}
};
class Developer :public Employee
{
protected:
	int coding_hours;
public:
	Developer(int empId, string name,int coding_hours) :Employee(empId, name)
	{
		this->coding_hours=coding_hours;
	}
	int calculateSalary()
	{
		return coding_hours * 500;
	}
};
class Manager :public Employee
{
protected:
	int team_size;
public:
	Manager(int empId, string name,int team_size) :Employee(empId, name)
	{
		this->team_size = team_size;
	}
	int calculateTeamBenefit()
	{
		return team_size*5000;
	}
};
class TechLead :public Developer, public Manager
{
public:
	TechLead(int empId, string name, int team_size, int coding_hours):Developer(empId, name, coding_hours),Manager(empId, name, team_size) {}
	int calculateSalary()
	{
		return coding_hours * 500 + team_size * 5000;
	}
	void display()
	{
		cout << "Tech Lead Info:" << endl;

	}

};
int main()
{
	int empId, team_size, coding_hours;
	string name;
	cout << "Emp ID:";
	cin >> empId;
	cout << "Name: ";
	cin >> name;
	cout << "Coding Hours: ";
	cin >> coding_hours;
	cout << "Team Size: ";
	cin >> team_size;

}