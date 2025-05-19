#include<iostream>
using namespace std;
typedef struct empDetails 
{
	int empID;
	string name;
}EMP;

typedef struct Period
{
	int empID;
	int days;
}PER;
typedef struct salary
{
	int empID;
	float salary_basic;
	float salary_variable;
	float salary_allowance;
}SAL;
void getEmployeeDetails(EMP*);
void getSalaryDetails(SAL*);
void getPeriodDetails(PER*);
float grossSalary(SAL,PER);
float taxDeduction(float);
void getTaxDetails(float gross);
void getEmployeeDetails(EMP* e)
{
	cout << "Name: ";
	cin >> e->name;
	static int id = 1;
	cout << "EMP ID: "<<id;
	e->empID =id++;
	
}
void getSalaryDetails(SAL* s,int id)
{
	s->empID = id;
	cout << "Salary Basic: ";
	cin >> s->salary_basic;
	cout << "Salary Variable: ";
	cin >> s->salary_variable;
	cout << "Salary Allowance: ";
	cin >> s->salary_allowance;
}
void getPeriodDetails(PER* p,int id)
{
	
	p->empID=id;
	cout << "Days: ";
	cin >> p->days;
}
float grossSalary(SAL s, PER p)
{
	float gross = 0;
	gross = (s.salary_basic + s.salary_variable + s.salary_allowance) * (p.days / 30.0);
	return gross;
}
float taxDeduction(float gross)
{
	float tax = 0;
	return tax=gross*0.4;

}
void getTaxDetails(float gross)
{
	float tax = taxDeduction(gross);
	cout << "Tax Deduction: " << tax << endl;
	cout << "Net Salary: " << gross - tax << endl;
}
int main()
{
	EMP e;
	SAL s;
	PER p;
	int id = 0;
	getEmployeeDetails(&e);
	getSalaryDetails(&s,id);
	getPeriodDetails(&p,id);
	float gross = grossSalary(s, p);
	cout << "Gross Salary: " << gross << endl;
	getTaxDetails(gross);
	return 0;
}

