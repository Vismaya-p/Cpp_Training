#include<iostream>
#include<cstring>
#include"student.h"
using namespace std;
int main()
{
	char n[] = "abc";
	char str2[1024] = "xyz";
	int r = 1011;
	char d[] = "CS";
	char b[] = "2020-2024";
	float m[4] = { 100,80,90,85 };
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
	//cout << s1.getMarks() << endl;
	//cout << s1.calcAvg() << endl;
	//cout<<strcat(str2, s1.getName());
	return 0;
}