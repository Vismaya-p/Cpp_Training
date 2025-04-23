#include<iostream>
#include"day06.h"
using namespace std;
int salary() {
	float basic_salary;
	cout << "enter basic salary: ";
	cin >> basic_salary;
	float rent_allowance = 0.4 * basic_salary;
	float dearness_allowance = 0.2 * basic_salary;
	float gross_salary = rent_allowance + dearness_allowance + basic_salary;
	cout << "gross salary =" << gross_salary;
	return 0;
}