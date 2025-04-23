#include<iostream>
#include"stringHandling.h"
using namespace std;
typedef struct users {
	int _id;
	int userType;//0 =Admin and 1 is for normal users
	string userName;
}USERS;
void dispMenuNU(string);
void dispMenuAU();

int ifElsehandle() {
	USERS u;
	cout << "enter id:" << endl;
	cin >> u._id;
	cout << "enter userType(0/1):" << endl;
	cin >> u.userType;
	cout << "enter user name:" << endl;
	cin >> u.userName;
	if (u.userType == 0)
	{
		dispMenuAU();
	}
	else
	{
		dispMenuNU(u.userName);
	}
	cout << "Application ended successfully"<<endl;
		return 0;
}
    void dispMenuAU()
	{
		cout << "i am able to access admin menu" << endl;
	}
	void dispMenuNU(string name)
	{
		cout << "user:" << name << "has logged in" << endl;
		cout << "i am able to access users menu" << endl;
	}
 
