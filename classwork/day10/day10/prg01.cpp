#include<iostream>
using namespace std;
int main()
{ 
	int charge,mobileStatus;
	cout << "Mobile staus(0/1): ";
	cin >> mobileStatus;
	
	if (mobileStatus == 1) {
		cout << "enter the battery status(0-100): ";
		cin >> charge;
		if (charge <= 15)
		{
			cout << "pluggin your charger" << endl;
		}
		cout << "Open browser" << endl;
		cout << "check today's live news" << endl;
	}
	else
	{
		cout << "Powering on the mobile" << endl;//explicitly making it on
		cout << "Mobile staus(0/1): ";
		cin >> mobileStatus;

		if (mobileStatus == 1) {
			cout << "enter the battery status(0-100): ";
			cin >> charge;
			if (charge <= 15)
			{
				cout << "pluggin your charger" << endl;
			}
			cout << "Open browser" << endl;
			cout << "check today's live news" << endl;
		}
		else
		{
			cout << "mobile is not in good condition or battery is Dead!"<<endl;
			cout << "please check the mobile at the store" << endl;

		}
	}
	return 0;
}