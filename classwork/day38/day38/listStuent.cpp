#include<iostream>
#include<List>
using namespace std;
class student
{
	int id;
	string name;
public:
	student(int id,string name):id(id),name(name){}
	int getId() 
	{ 
		return id;
	}
	void setId(int id)
	{
		this->id = id;
	}
	string getName()
	{ 
		return name; 
	}
	void setName(string name) 
	{ 
		this->name = name;
	}
	void display() { cout << "ID: " << id <<"\n"<< "Name: " << name << endl; }
	bool operator == (const student & other)const
	{
		return id == other.id;
	}
	
};
int main()
{
	student s1(101, "Anu");
	student s2(102, "Arya");
	student s3(103, "Ajay");
	student s4(104, "Anu.s");
	
	
	std::list<student>listStuds;

	listStuds.push_front(s1);
	listStuds.push_back(s2);
	listStuds.emplace_front(s3);
	listStuds.emplace_back(s4);


	for (auto lS : listStuds)
		lS.display();
	listStuds.reverse();
	cout << "\n";
	for (auto lS : listStuds)
		lS.display();
	listStuds.remove(s2);
	cout << "\n";
	for (auto lS : listStuds)
		lS.display();



}