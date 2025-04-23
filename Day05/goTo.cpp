#include<iostream>
#include"switchCase.h"
using namespace std;
int display();
int goTo()
{   BEGIN:
//int flag=false;
   while (true) {
	int ret = display();
	switch (ret)
	{
	case 1:
		cout << "Addition" << endl;
		break;
	case 2:
		cout << "subtraction" << endl;
		break;
	case 3:
		cout << "multiplication" << endl;
		break;
	case 0:
		cout << "Exiting the application" << endl;
		goto END;
		break;
	default:
		cout << "Wrong choice" << endl;
	}
}
END:
   cout << "program ended successfully" << endl;
   goto BEGIN;
   return 0;
}
int display()
{
	int ch;
	cout << "press," << endl;
	cout << "1.Addition" << endl;
	cout << "2.subtraction" << endl;
	cout << "3.Multiplication" << endl;
	cout << "0.Exit" << endl;
	cout << "Choice:";
	cin >> ch;
	return ch;
}