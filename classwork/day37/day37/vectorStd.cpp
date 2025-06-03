#include<iostream>
#include<vector>
using namespace std;
class Student
{
	int id;
	string name;
public:
	Student(int id,string name):id(id),name(name){}
	void display()
	{
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
	}
};
int main()
{
	try{
	Student s[3] = { {101,"Vis"},{102,"Maya"} , {103,"Vismu"} };
	Student s1 = { 104,"Anu" };
	Student s2 = { 105,"Kris" };
	Student s3 = { 106,"Vaishu" };
	Student s4 = { 107,"Jibu" };

	for (auto e : s)
		e.display();

	vector<Student>emp;

	emp.push_back(s1);
	emp.push_back(s2);
	emp.push_back(s3);
	for (auto e : emp)
		e.display();

	cout << emp.capacity() << endl;
	cout << emp.size() << endl;
	
	//emp[10].display(); //error can't be caught with try catch
	//emp.at(10).display();//error is caught
	//emp.pop_back();
	//emp.back().display();

	
	//emp.front().display();
	//emp.back().display();
	emp.insert(emp.begin() + 1, s4);
	for (auto e : emp)
	{
		e.display();
	}
}
	catch (exception& e)
	{
		cout << "Error: " << e.what() << endl;
}
	
	return 0;
}