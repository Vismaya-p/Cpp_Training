#include"cdr.h"
#include<fstream>
int main()
{
	char ch = 1;
		while (ch)
		{
			cout << "enter choice:" << endl;
			int choice;
			cin >> choice;
			switch (choice)
			{
			case 1:
				signUp();
				break;
			case 2:
				login();
				break;
			case 3:
				cout << "Exit..";
				return;
			}
		}
	return 0;
}