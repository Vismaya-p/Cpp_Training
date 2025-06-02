#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class Employee
{
public:
	char name[50];
	int id;
	
	Employee(const char empName[], int empId)
	{
		strcpy(name, empName);
		id = empId;
	}
	void getEmp()
	{
		cout << "EmpId:" << endl;
		cin >> id;
		cin.ignore();
		cout << "Name: " << endl;
		cin.getline(name,50);
	}
	void empDisplay()const
	{
		cout << "====Employee Details====" << endl;
		cout << "Empid: " << id << endl;
		cout << "Employee Name: " << name << endl;
	}
	
};
class Finance :public Employee
{
public:
	float salary;
	Finance(const char empName[], int empId, float empSalary) :Employee(empName, empId)
	{
		salary = empSalary;
	}
	void getDetails()
	{
		getEmp();
		cout << "Enter salary: " << endl;
		cin >> salary;
	}
	void dispDetails()
	{
		empDisplay();
		cout << "Salary: " << salary << "\n";
	}
};
int main()
{
	
	return 0;
}