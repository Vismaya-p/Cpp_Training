#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Emp
{
private:
	int id;
	string name;
public:
	Emp() {}
	Emp(int id, string name) :id(id), name(name){}
	void disp()
	{
		cout << "ID: " << id << "\tName: " << name<<endl;
	}
};
int main()
{
	Emp e1(101, "abc1");
	Emp e2(102, "abc2");
	//map<int,vector< Emp>>mapEmp;
	map<int, Emp>mapEmp;
	/*vector<Emp>v;
	v.push_back(e1);
	v.push_back(e2);*/
	mapEmp[101] = e1;
	mapEmp[102] = e2;
	for (auto i : mapEmp)
	{
		cout << i.first;
		i.second.disp();
	}
	//mapEmp[101] =v ;
	//auto i = mapEmp.begin();
	//auto ele = i->second;
	//ele[0].disp();
	//ele[1].disp();
	/*for (auto j : ele)
	{
		j.disp();
	}
	*/
}