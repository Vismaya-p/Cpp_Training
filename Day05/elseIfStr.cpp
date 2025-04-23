#include<iostream>
#include"switchCase.h"
using namespace std;
int elseIfStr() {
	string genre;
	cout << "Enter the Genre: ";
	cin >> genre;
	if (genre[0] >= 48 && genre[0] <= 57)
	{
		cout << "Genre Name can't start with numeric characters" << endl;
	}
	if (genre[0]>=48 && genre[0] <= 57)
	{
		cout << "Genre Name can't start with special characters" << endl;
	}
	else if (genre.compare("Action") == 0)
	{
		cout << "Selected Genre is Action" << endl;
	}
	else if ((genre.compare("Comedy") == 0) || (genre.compare("Comedy") == 0))
	{
		cout << "Selected Genre is Comedy" << endl;
	}
	else if (genre.compare("Thriller") == 0)
	{
		cout << "Selected Genre is Thriller" << endl;
	}
	else
	{
		cout << "Genre is not present" << endl;
	}
	cout << "End of Program" << endl;
	return 0;
}