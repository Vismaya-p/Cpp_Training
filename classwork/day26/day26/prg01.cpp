#include<iostream>
#include<cstring>
using namespace std;
class student
{
protected:
	int rollno;
	string name;
	char m_name[20];
	//string dept;
	//string batch;
public:
	void display(string str1)
	{
		cout << "Hello World.. "<<str1<<endl;
		cout << name << "\t" << rollno<<endl;
		
	}
	void setName(string s,int n) //set method
	{
		name = s;
		rollno = n;
		//strcpy(m_name, s.c_str());
		
	}
};
int main()
{
	student s;
	cout << sizeof(s) <<endl;
	 //s.name="abc";
	 //s.rollno=101;

	// cout << s.name << "\t" << s.rollno << endl;
	s.display("Hello,Vismaya");
	s.setName("Prabhakaran", 101);
	s.display("Hello,Vismaya");
	
	return 0;
}