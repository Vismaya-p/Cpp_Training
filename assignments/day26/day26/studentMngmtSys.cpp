#include<iostream>
#include<cstring>
using namespace std;
class student
{
private:
	int rollno;
	char name[20];
	float marks[4];
	float avarage;
	

public:
	void setName(char*);
	char* getName();
	void setRollno(int);
	int getRollno();
	void setMarks(float[]);
	void display();
	void getGrade();
	float calcAvg();
};
//:: => scope resolution operator
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

void student::setMarks(float m[])
{
	for (int i = 0;i <4;i++)
	{
		marks[i] = m[i];
	}
}

float student::calcAvg()
{
	float sum= 0.0;
	for (int i = 0;i <4;i++)
	{
		sum += marks[i];
	}
	avarage=sum / 4;
	cout << avarage;
	return avarage;
}
void student::getGrade()
{
	cout << avarage;
	if (avarage>90)
		cout << " A" << endl;
	else if (avarage >= 75)
		cout << " B" << endl;
	 if ((avarage >= 45) && (avarage < 75))
		cout << " C" << endl;
	else if ((avarage>= 0) && (avarage< 45))
		cout << " Fail" << endl;
	else
		cout << "Out of range" << endl;
}
	
void student::display()
{

	cout << "Name: " << name << endl;
	cout << "RollNo: " << rollno << endl;
	for (int i = 0;i < 4;i++)
	{
		cout <<"mark["<< i <<"]= "<<marks[i] << "\t";
	}
	cout << "AVG: " << calcAvg() << endl;
	
}

int main()
{
	student s1;
	char n[] = "Vismaya";
	int r = 101;
	float m[4] = { 100,80,90,100 };
	float avgs1=s1.calcAvg();
	
	s1.setRollno(r);
	s1.setName(n);
	s1.setMarks(m);
	s1.getGrade();
	s1.display();
	
	return 0;
}