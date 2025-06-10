#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
class Employee
{
	int id;
	string name;
public:
	Employee(int id, string name) :id(id), name(name) {}
	void dispEmp()
	{
		cout << id << endl;
		cout << name << endl;
	}
	void setName(string name)
	{
		this->name=name;
	}
};
int main()
{
	vector<int>v = { 1,2,3 };
	vector<int>::iterator it = v.begin();
	for (it = v.begin();it != v.end();it++)
	{
		cout << *it << endl;
	}
	cout << endl;
	vector<Employee>vEmp;
	vEmp.emplace_back(101, "anu1");
	vEmp.emplace_back(102, "anu2");
	vEmp.emplace_back(103, "anu3");
	vEmp.emplace_back(104, "anu4");
	vector <Employee>::iterator itEmp;
	int i = 0;
	for (itEmp = vEmp.begin();itEmp != vEmp.end();itEmp++, i++)
	{
		//cout << "Employee " << i + 1 << " details are" << endl;
		//itEmp->dispEmp();
		//(*itEmp).dispEmp();
		if ((i + 1) == 2)
		{
			(*itEmp).setName("xyz");
		}
		//cout << "==============\n";
	}
	i = 0;
	for (itEmp = vEmp.begin();itEmp != vEmp.end();itEmp++)
	{
		cout << "Employee "<< i + 1<<" details are" << endl;
		//itEmp->dispEmp();
		(*itEmp).dispEmp();
		i++;
		cout << "==============\n";
	}

	return 0;
}