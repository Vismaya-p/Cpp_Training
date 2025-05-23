
#include<iostream>
using namespace std;
class BankAcc
{
	int accNo;
	static int accCount;//static member variable
public:
	BankAcc()
	{
		accCount++;
		accNo = accCount;
	}
	static int getAccCount()
	{
		return accCount;
	}
};