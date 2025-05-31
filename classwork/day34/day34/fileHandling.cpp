#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fOut("emp.txt");
	for (int i = 0;i < 10;i++)
	{
		fOut << (i + 1) << endl;
	}
	fOut << "Hello Vismaya!" << endl;
	fOut.close();
	return 0;
}