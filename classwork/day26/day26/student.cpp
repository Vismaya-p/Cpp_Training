#include<iostream>
#include<cstring>
#include"student.h"
using namespace std;


void student::setName(char* s)
{
	strcpy(name, s);
}
char* student::getName()
{
	return name;
}
void student::setRollno(int r)
{
	rollno = r;
}
int student::getRollno()
{
	return rollno;
}
void student::setRegno(char* reg)
{
	strcpy(reg_no, reg);
}
char* student::getRegno()
{
	return reg_no;
}
void student::setBatch(char* b)
{
	strcpy(batch, b);
}
char* student::getBatch()
{
	return batch;
}
void student::setDept(char* d)
{
	strcpy(dept, d);
}
char* student::getDept()
{
	return dept;
}
void student::setMarks(float m[])
{
	for (int i = 0;i < 4;i++)
	{
		marks[i] = m[i];
	}
}
void student::getMarks()
{
	for (int i = 0;i < 4;i++)
	{
		cout << marks[i] << endl;
	}

}
float student::calcAvg()
{
	float avg = 0.0;
	for (int i = 0;i < 4;i++)
	{
		cout << marks[i] << "\t";
		avg += marks[i] / 4.0;
	}
	return avg;
}
void student::display()
{

	cout << "Name: " << name << endl;
	cout << "RollNo: " << rollno << endl;
	cout << "Dept: " << dept << endl;
	cout << "Batch: " << batch << endl;
	//cout << "Marks: " << getMarks() << endl;
	cout << "AVG: " << calcAvg() << endl;
}
