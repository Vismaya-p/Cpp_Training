//fuction with no args and no return types
#include<iostream>
using namespace std;
void display(void);
int main()
{
	int ch;
	display();
	cin >> ch;
	switch (ch) {
	default:
		cout << "Wrong choice" << endl;
		break;
	case 1:
		cout << "Addition" << endl;
		break;
	case 2:
		cout << "Sutraction" << endl;
		break;
	case 3:
		cout << "Exiting the app" << endl;
		break;
	}
	return 0;
}
void display()
{
	cout << "press," << endl;
	cout << "1.Addition" << endl;
	cout << "2.Subtraction" << endl;
	cout << "3. Exit" << endl;
	cout << "Choice" << endl;
}