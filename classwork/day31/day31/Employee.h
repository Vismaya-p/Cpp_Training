#pragma once
#include<iostream>
using namespace std;
class Employee {
	int e_id;
	string e_name;
	string e_address;
	int e_phno;
public:
	void set_eId(int);
	void set_eName(string);
	void set_eAddress(string);
	void set_ePhno(int);

	int get_eId();
	string get_eName();
	string get_eAddress();
	int get_ePhno();

};