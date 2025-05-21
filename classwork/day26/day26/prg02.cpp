#include<iostream>
#include<cstring>
using namespace std;
class student
{
protected:
	int rollno;
	//string name;
	char name[20];
	//string dept;
	//string batch;
public:
	void display()
	{
	
		cout << name <<endl;

	}
	void setName( string s) //set method
	{
		
		strcpy(name, s.c_str());

	}
};
int main()
{
	student s;
	cout << sizeof(s) << endl;
	//s.name="abc";
	//s.rollno=101;

   // cout << s.name << "\t" << s.rollno << endl;
	s.display();
	s.setName("vismaya");
	s.display();

	return 0;
}