#include<iostream>
using namespace std;
/*
struct <tagname>
{
members;
};
*/
typedef struct Employee
{
	int empID;
	string empPhno;
	string empName;
	string empAddress;
	char empGender;
}EMP;
void display(EMP);
int getEmpDetails(EMP* e);
int main()
{
	/*EMP e1;
	cout << "Size of EMP: " << sizeof(EMP) << "\t size=" << sizeof(e1) << endl;
	e1.empID = 101;
	e1.empPhno = "9192939495";
	e1.empName = "Vismaya";
	e1.empAddress = "Chennai";
	e1.empGender = 'F';

	cout << "Name: " << e1.empName << endl;
	cout << "ID: " << e1.empID << endl;
	cout << "Phone: " << e1.empPhno << endl;
	cout << "Address: " << e1.empAddress << endl;
	cout << "Gender: " << e1.empGender<< endl;
	cout << "=================" << endl;*/

	/*EMP e[3];
	for (int i = 0;i < 3;i++)
	{
		cout << "Name: ";
		cin>> e[i].empName;
		cout << "ID: ";
		cin >> e[i].empID ;
		cout << "Phone: ";
		cin >> e[i].empPhno;
		cout << "Address: ";
		cin >> e[i].empAddress;
		cout << "Gender: ";
		cin>> e[i].empGender;
	}
	cout << endl;
	for (int i = 0;i < 3;i++) 
	{
		cout << "Name: " << e[i].empName << endl;
		cout << "ID: " << e[i].empID << endl;
		cout << "Phone: " << e[i].empPhno << endl;
		cout << "Address: " << e[i].empAddress << endl;
		cout << "Gender: " << e[i].empGender << endl;
		cout << "=================" << endl;
	}
	
	getEmpDetails(&e1);*/

	EMP e[3];
	getEmpDetails(e);
	for (int i = 0;i < 3;i++)
	{
		display(e[i]);

	}
	cout << endl;
	return 0;
	
}
void display(EMP e)
{
	cout << "Name: " << e.empName << endl;
	cout << "ID: " << e.empID << endl;
	cout << "Phone: " << e.empPhno << endl;
	cout << "Address: " << e.empAddress << endl;
	cout << "Gender: " << e.empGender << endl;
	cout << "=================" << endl;
}
int getEmpDetails(EMP* e)
{
	for (int i = 0;i < 3;i++)
	{
		cout << "Name: ";
		cin >> e[i].empName;
		cout << "ID: ";
		cin >> e[i].empID;
		cout << "Phone: ";
		cin >> e[i].empPhno;
		cout << "Address: ";
		cin >> e[i].empAddress;
		cout << "Gender: ";
		cin >> e[i].empGender;
	}
	cout << endl;
	return EXIT_SUCCESS;
}