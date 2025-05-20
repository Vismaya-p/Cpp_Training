//simple employee management system
#include<iostream>
using namespace std;
typedef struct Employee
{
	int e_id;
	string e_name;
    float e_salary;
	struct Date {
		int day, month, year;
	}D;
}EMP;
void printDetails(EMP);
bool getDetails(EMP&);
bool v_name(string);
void printDetails(EMP e[])
{
	cout << "\nEmployee Details" << endl;
	cout << e->e_id << endl;
	cout << e->e_name << endl;
	cout << e->e_salary << endl;
}
bool getDetails(EMP e[])
{
		cout << "Enter the details of employee\n";
		cout << "ID: ";cin >> e->e_id;
		cout << "Name: ";cin >> e->e_name;
		cout << "Salary: ";cin >> e->e_salary;
	if (v_name(e->e_name) == false)
	{
		return false;

	}
}
bool v_name(string name)
{
	for (int i = 0;i < name.length();i++)
	{
			if ((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z') || (name[i] == ' '))
				continue;
			else
				return false;
	}
		return true;
}

int main()
{
	Employee *e= new Employee[3];
	if (getDetails(e) == true)
		cout << "Updated the Details" << endl;
	else
		cout << "Something went wrong" << endl;
	printDetails(e);
}