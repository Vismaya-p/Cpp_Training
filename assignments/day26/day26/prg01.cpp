#include<iostream>
#include<cstring>
using namespace std;
class student
{
private:
	int rollno;
	char name[20];
	float marks[4];
	float avgs;

public:
	void setName(char*);
	char* getName();
	void setRollno(int);
	int getRollno();
	void setMarks(float[]);
	void getGrade();
	void display();


private:
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
	for (int i = 0;i < 4;i++)
	{
		marks[i] = m[i];
	}
}

float student::calcAvg()
{
	float avg = 0.0;
	for (int i = 0;i < 4;i++)
	{
		cout << marks[i] << "\t";
		avg += marks[i];
	}
	return avg = avg / 4;

	avgs = avg;
}
void student::getGrade()
{
	if (avgs >= 85 && avgs<=100)
	{
		cout << "A" << endl;
	}
	else if(avgs<85 && avgs>=70)
	{
		cout << "B" << endl;
	}
	else if (avgs < 70 && avgs >= 50)
	{
		cout << "C" << endl;
	}
	else if (avgs >= 0 && avgs <= 50)
	{
		cout << "fail" << endl;
	}
	else
	{
		cout << "Invalid input";
	}
}
void student::display()
{

	cout << "Name: " << name << endl;
	cout << "RollNo: " << rollno << endl;
	cout << "AVG: " << calcAvg() << endl;
	
}

int main()
{
	char n[] = "Vismaya";
	//char str2[1024] = "xyz";
	int r = 101;
	float m[4] = { 100,80,90,85 };

	student s1;
	s1.setRollno(r);
	s1.setName(n);
	s1.setMarks(m);
	s1.getGrade();
	s1.display();
	
	return 0;
}