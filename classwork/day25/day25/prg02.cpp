#include<iostream>
#include<cstring>
using namespace std;
typedef struct student
{
	int s_id;
	string s_name;
	int cls;
	char div;
	long int phone;
}STD;
void getDetails(STD* s,int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << "Enter the id: " << endl;
		cin >> s[i].s_id;
		cout << "Enter student name:"<<endl;
		cin >> s[i].s_name;
		cout << "Enter the class: " << endl;
		cin >> s[i].cls;
		cout << "Enter division:" << endl;
		cin >> s[i].div;
		cout << "Enter phone number:" << endl;
		cin >> s[i].phone;
		cout << endl;
	}
}
void printDetails(STD* s,int n)
{
	cout << "========STUDENT DETAILS========\n";
	for (int i = 0;i < n;i++)
	{
		cout << "ID:" << s[i].s_id << endl;
		cout << "Name:" << s[i].s_name << endl;
		cout << "Class:" << s[i].cls << endl;
		cout << "Div:" << s[i].div << endl;
		cout << "Phone:" << s[i].phone << endl;
	}
}
int main()
{
	int n=0;
	student s[100];
	cout << "Enter the no.of students: " << endl;
	cin >> n;
	getDetails(s,n);
	printDetails(s,n);
	
	return 0;
}