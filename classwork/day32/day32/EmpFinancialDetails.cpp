#include<iostream>
using namespace std;
class Person
{
protected:
	string name;
	char gender;
	int age;
	long int phno;
public:
	Person(string n,char g,int a,long int pno):name(n),gender(g),age(a),phno(pno){}
	void dispPerson()
	{
		cout << "Name: " << name << endl;
		cout << "Gender: " << gender << endl;
		cout << "Age: " << age << endl;
		cout << "Phno: " << phno << endl;
	}
};
class Employee :protected Person
{
protected:
	int e_id;
	int e_sal;
	string e_dept;
public:
	Employee(int id,int sal,string dept, string n, char g, int a, long int pno):Person(n, g,a,pno),e_id(id),e_sal(sal),e_dept(dept){}
	void dispEmp()
	{
		
		cout << "ID: " << e_id << endl;
		cout << "Dept: " << e_dept << endl;
		cout << "Salary: " << e_sal << endl;
	}

};
class EmpFin:private Employee
{
private:
	int e_pt;
	int e_pf;
	int e_vp;
	int e_days;
public:
	EmpFin(string n,char g,int a,int phno,int pt,int pf,int vp,int days,int id,int sal,string dept):Employee(id,sal,dept, n, g, a, phno), e_pt(pt), e_pf(pf), e_vp(vp), e_days(days) {}
	void dispFin()
	{
		cout << "Professional Tax: " << e_pt << endl;
		cout << "PF: " << e_pf << endl;
		cout << "VP: " << e_vp << endl;
		cout << "No of Days: " << e_days << endl;
		int gs=(e_sal-e_pt-e_pf+e_vp)/30;
		gs = gs * e_days;
		cout << "Gross Sal: " << gs << endl;

	}
	
};
class LMS :public Employee//hierarchial inheritance
{
private:
	int hours;
	int days;
public:
	LMS(string n, char g, int a, int phno, int pt, int pf, int vp, int days, int id, int sal, string dept,int h, int d):
		Employee(id, sal, dept, n, g, a, phno),hours(h),days(d){}
	void dispLMS()
	{
		cout << "Hours: " << hours << endl;
		cout << "Days: " << days << endl;
	}
	
};

int main()
{

	EmpFin e("Vismaya", 'F', 22,123456, 10, 1000, 2000, 30,101, 200000, "AMAT");
		e.dispFin();

		LMS lObj("Vismaya", 'F', 22,123456, 10, 1000, 2000, 30,101, 200000, "AMAT",3,4);
		lObj.dispLMS();
}