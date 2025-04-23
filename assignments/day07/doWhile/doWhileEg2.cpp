#include<iostream>
#define MAXLEVEL 10
using namespace std;
int main()
{
	char confirm;
	int level = MAXLEVEL;
	do {
		cout << "continue the game??(y/n)";
		cin >> confirm;
		cout << "next level started" << endl;
		level--;
	} while ((confirm == 'y')&&(level>0));
	if (confirm == 'y')
	{
		cout << "you won"<<endl;
	}
	else
	{
		cout << "Endgame";
	}
}