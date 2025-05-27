#include<iostream>
using namespace std;
class Student
{
	int rollNo;
	string name;
	int age;
public:
	Student(int rollNo, string name, int age)
	{
		this->rollNo = rollNo;
		this->name = name;
		this->age = age;
	}
	
	void display()
	{
		
		cout << "\nStudent Info: " << endl;
		cout << "Roll No: " << rollNo << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << endl;
	}
};
class Marks :public Student
{
private:
	float mark1, mark2, mark3,total,avg;
public:
	Marks(float mark1, float mark2, float mark3, int rollNo, string name, int age) :Student(rollNo, name, age)
	{
		this->mark1 = mark1;
		this->mark2 = mark2;
		this->mark3 = mark3;
		total = 0;
		avg = 0;
	}
	bool calculate()
	{
		total = mark1 + mark2 + mark3;
		avg = total / 3.0;
		return true;
		
	}
	void display()
	{
		Student::display();
		cout << "Full Result: " << endl;
		cout << "Total Marks: " << total << endl;
		cout << "Average Marks: " << avg << endl;
	}
};
int main()
{
	int rollNo, age;
	string name;
	float mark1,mark2,mark3;
	cout << "Enter Roll No: ";
	cin >> rollNo;
	cout << "Enter Name: ";
	cin >> name;
	cout << "Enter Age: ";
	cin >> age;
	cout << "Enter Marks: ";
	cin >> mark1>>mark2>>mark3;
	Marks mObj(mark1,mark2,mark3, rollNo, name, age);
	mObj.calculate();
	mObj.display();
}