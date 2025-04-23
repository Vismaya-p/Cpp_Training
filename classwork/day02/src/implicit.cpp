#include<iostream>
#include"typeCov.h"
using namespace std;
void typeConvImp()
{
	int a = 10;
	float b = 10.2;
	float res = a + b;
	cout <<"res "<<res << endl;
}
void typeConvExp()
{
	float a = 10;
	int b = 3;
	float res = a / b;
	cout << "res"<<res << endl;
	res = (float)a / (float)b;
	cout << res << endl;

}