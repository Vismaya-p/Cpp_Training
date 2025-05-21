#include<iostream>
#include<cstring>
using namespace std;
class student
{
private:
	int rollno;
	char name[20];
	char batch[20];
	char reg_no[20];
	char dept[20];
	float marks[4];
	//float avg[];

public:
	void setName(char* s)
	{
		strcpy(name, s);
	}
	char* getName()
	{
		return name;
	}
	void setRollno(int r)
	{
		rollno = r;
	}
	int getRollno()
	{
		return rollno;
	}
	void setRegno(char* reg)
	{
		strcpy(reg_no,reg);
	}
	char* getRegno()
	{
		return reg_no;
	}
	void setBatch(char* b)
	{
		strcpy(batch, b);
	}
	char* getBatch()
	{
		return batch;
	}
	void setDept(char* d)
	{
		strcpy(dept,d);
	}
	char* getDept()
	{
		return dept;
	}
	void setMarks(float m[])
	{
		for (int i = 0;i < 4;i++)
		{
			marks[i] = m[i];
		}
	}
	float* getMarks()
	{

		return marks;
	}
	float calcAvg()
	{
		float avg = 0.0;
		for (int i = 0;i < 4;i++)
		{
			cout << marks[i] << "\t";
			avg += marks[i] ;
		}
		return avg/4.0;
	}
	void display()
	{

		cout <<"Name: "<<name<<endl;
		cout << "RollNo: " << rollno << endl;
		cout << "Dept: " << dept << endl;
		cout << "Batch: " << batch << endl;
		cout << "AVG: " << calcAvg() << endl;
	}
};
int main()
{
	char n[] = "abc";
	char str2[1024] = "xyz";
	int r = 1011;
	char d[] = "CS";
	char b[] = "2020-2024";
	float m[] = { 100,80,90,85 };
	student s1;
	s1.setRollno(r);
	s1.setName(n);
	s1.setBatch(b);
	s1.setDept(d);
	s1.setMarks(m);
	s1.display();
	cout << s1.getName() << endl;
	cout << s1.getRollno() << endl;
	cout << s1.getBatch() << endl;
	cout << s1.getDept() << endl;
	cout << s1.calcAvg() << endl;
	//cout<<strcat(str2, s1.getName());
	return 0;
}