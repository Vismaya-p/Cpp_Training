#include<iostream>
using namespace std;
class Student
{
protected:
	int rollNo;
	string name;
	int phno;

public:
	Student(int rn,string n,int pn):rollNo(rn),name(n),phno(pn){}
	virtual void disp()=0;
	

};
class Sports:public Student
{
	string sportName;
public:
	Sports(int rn, string n, int pn,string sn):Student(rn,n,pn),sportName(sn){}
	void disp()override
	{
		cout << "Sports Student details\n";
		cout << "Name: " << name << endl;
		cout << "Rollno: " << rollNo << endl;
		cout << "sport Name: " << sportName << endl;
	}
};
class Marks :public Student
{
protected:
	int mark1,mark2,mark3;
public:
	Marks(int rn, string n, int pn,int m1,int m2,int m3):Student(rn, n, pn), mark1(m1), mark2(m2), mark3(m3){}
	
	void disp()override
	{
		int total = mark1 + mark2 + mark3;
		float avg = total / 3.0;
		cout << "Student Marks details\n";
		cout << "Name: " << name << endl;
		cout << "Rollno: " << rollNo << endl;
		cout << "Total Marks scored: " << endl;
		cout << "Avg of marks: " << endl;
	}

};
class Admin:public Student
{
protected:
	int exam_fee;
	int tution_fee;
	int total_fee;
public:
	Admin(int rn, string n, int pn,int tf):Student(rn, n, pn)
	{
		exam_fee = 500;
		tution_fee = 25000;
		total_fee = tf;
	}
	
	void disp()override
	{
		
		cout << "Details\n";
		cout << "Name: " << name << endl;
		cout << "Rollno: " << rollNo << endl;
		cout << "fees paid: " << total_fee<<endl;

	}

};
int main()
{
	Marks m(10,"Vismaya",123456,80,90,100);
	Sports s(10,"Anu",12345,"Hockey");
	Admin a(10,"Magesh",4567,20000);
	m.disp();
	s.disp();
	a.disp();

}