#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fOut("multiplyTable.txt");
	for (int i = 1;i <= 10;i++)
	{
		for (int j = 1;j <= 10;j++)
		{
			fOut << i<<"*"<<j <<"="<<i*j<< endl;

		}
	}
	fOut.close();
}