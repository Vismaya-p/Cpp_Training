//check voting eligibility
#include<iostream>
#include<iostream>
using namespace std;
int main()
{
	int age;
	cin >> age;
	if (age >= 18)
		cout << "eligible to vote";
	else
		cout << "not eligible to vote";
}
