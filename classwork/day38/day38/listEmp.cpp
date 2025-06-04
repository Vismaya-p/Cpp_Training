#include<iostream>
#include<List>
using namespace std;
class Employee
{
	int e_id;
	string name;
public:
	Employee(int e_id, string name) :e_id(e_id), name(name) {}
	int getId() 
	{ 
		return e_id;
	}
	void setId(int e_id) 
	{ 
		this->e_id = e_id;
	}
	string getName() 
	{
		return name; 
	}
	void setName(string name) 
	{ 
		this->name = name; 
	}
	void display() 
	{ 
		cout << "ID: " << e_id << "\n" << "Name: " << name << endl; 
	}
	bool operator == (const Employee& other)const
	{
		return e_id == other.e_id;
	}
	bool operator < (const Employee& other)const
	{
		return e_id < other.e_id;
	}
};
void my_sort(list<Employee> &ls)
{
	
	for (auto& i : ls)
	{
		for (auto &j:ls)
		{
			if (i<j)
			{
				auto temp = i;
				i = j;
				j = temp;

			}
		}
	}
	
	//ls.sort();
}
int main()
{
	Employee e1(101, "Anu");
	Employee e2(102, "Vaishu");
	Employee e3(103, "nyna");
	Employee e4(104, "Anu.s");
	
	std::list<Employee>listEmps;

	listEmps.push_front(e1);
	
	listEmps.emplace_front(e3);
	listEmps.emplace_back(e4);
	

	for (auto lS : listEmps)
		lS.display();
	listEmps.reverse();
	cout << "\n";
	for (auto lS: listEmps)
		lS.display();
	my_sort(listEmps);
	for (auto lS : listEmps)
		lS.display();
}