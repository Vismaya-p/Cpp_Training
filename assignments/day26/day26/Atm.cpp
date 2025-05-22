#include<iostream>
using namespace std;
class atmAccount
{
	float balance;
	string AccHolder;

public:
	void setAccHolder(string);
	void withdraw(int);
	void deposit(int);
	void checkBalance();
	void setBalance();
};
void atmAccount::setAccHolder(string name)
{
	AccHolder = name;
}
void atmAccount:: setBalance()
{
	balance = 35000;
}
void atmAccount::checkBalance()
{
	cout << "Account Holder:" << AccHolder<<endl;
	cout << "account balance: ";
	cout << balance;
}
void atmAccount::deposit(int amount)
{

	balance = balance + amount;
	cout << "amount deposited successfully" << endl;

}
void atmAccount:: withdraw(int amount)
{
	
	
	balance = balance - amount;
	if (amount <= balance)
	{
		cout << "amount deducted successfully..." << endl;
	}
	else
	{
		cout << "Insufficient Balance";
	}

}
int main()
{
	atmAccount a;
	a.setBalance();
	int choice = 0;
	cout << "enter the choice(1.check balance,2.deposit,3.withdraw,4.Exit):" << endl;
	do{
	cin >> choice;
		switch (choice)
		{
		case 1:
			a.checkBalance();
			break;
		case 2:
			int amount;
			cout << "Enter the amount you want to deposit: " << endl;
			cin >> amount;
			a.deposit(amount);
			break;
		case 3:
			int amount1;
			cout << "Enter the amount you want to withdraw: " << endl;
			cin >> amount1;
			a.withdraw(amount1);
			break;
		case 4:
			cout << "Exit" << endl;
			break;
		default:
			cout << "Invalid choice";
		}
		
	} while (choice != 4);
	return 0;
}