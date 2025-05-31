#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Employee
{
private:
	string name;
	int empId;
	float salary;

public:
	Employee(string n,int id,float s):name(n),empId(id),salary(s){}
	void getEmp()
	{
		cout << "EmpId:" << endl;
		cin >> empId;
		cout << "Name: " << endl;
		getline(cin, name);
		cout << "salary: " << endl;
		cin >> salary;


	}
	void empDisplay()const
	{
		cout << "====Employee Details====" << endl;
		cout << "Empid: " << empId << endl;
		cout << "Employee Name: " << name << endl;
		cout << "Salary: " << salary << endl;
	}
	void addEmp()
	{
		Employee emp;
		emp.getEmp();
	}
	void file_op()
	{
		ofstream fout("employee.txt");
		if (!fout.is_open())
		{
			cerr << "Error opening file!" << endl;
			return ;
		}
		fout << "Name " << name << endl;
		fout << "Emp ID:" << empId << endl;
		fout << "Salary: " << salary << endl;
		fout.close();
		ifstream fin("employee.txt");
		if (!fout.is_open())
		{
			cerr << "Error opening file!" << endl;
			return;
		}
		string line;
		while (getline(fin, line))
		{
			cout << line << endl;
		}
		fin.close();

	}
	
};
int main()
{
	//Employee e("Vismaya", 101,25000);
	e.file_op();
	return 0;
}