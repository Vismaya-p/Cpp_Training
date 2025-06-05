#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Emp
{
private:
	int id;
	string name;
	string dept;
public:
	Emp() {}
	Emp(int id, string name,string dept) :id(id), name(name) ,dept(dept){}
	void disp()
	{
		cout << "ID: " << id << "\tName: " << name << endl;
	}
	void setValues() {
		cout << "Enter Details, " << endl;
		cout << "ID: ";cin >> this->id;
		cout << "Name: ";cin >> this->name;
		cout << "Dept: ";cin >> this->dept;
	}
	string getName() const { return this->name; }
	int getId() const { return this->id; }
	string getDept()const {return this->dept;}

};
int main()
{
	Emp e1;
	
	//map<int,vector< Emp>>mapEmp;
	multimap<string, Emp>mapDept;
	/*vector<Emp>v;
	v.push_back(e1);
	v.push_back(e2);*/
	for (int i=0;i<5;i++ )
	{
		e1.setValues();
		mapDept.insert({e1.getDept(),e1});

	}