#include<iostream>
#include"switchCase.h"
using namespace std;
enum genre {
	Action =1,
	Comedy,
	Thriller,
	Mystery,
	SciFi
};
enum language
{
	English = 1,
	Hindi,
	Tamil,
	Telugu,
	Kannada,
	Marathi,
	Malayalam
};
int main()
{
	switchCase();
	elseIfLad();
	int inputLanguage;
	char typeShows[20];
	//char genre[20];
	int inputGenre;
	//display();
	cout << "enter the language option:";
	cin >> inputLanguage;
	switch (inputLanguage)
	{
	case English:
		cout << "You have Choosen English " << endl;
		cout << "enter the Genre:";
		cin >> inputGenre;
		switch (inputGenre)
		{
		case Action:
			cout << "Choosed Genre: Action " << endl;
			break;
		case Comedy:
			cout << "Choosed Genre: Comedy" << endl;
			break;
		case Thriller:
			cout << "Choosed Genre: Thriller" << endl;
			break;
		case Mystery:
			cout << "Choosed Genre: Mystery" << endl;
			break;
		default:
			cout << "No Genre found" << endl;
		}
		break;
	case Hindi:
		cout << "You have Choosen Hindi " << endl;
		cout << "enter the Genre:";
		cin >> inputGenre;
		switch (inputGenre)
		{
		case Action:
			cout << "Choosed Genre: Action " << endl;
			break;
		case Comedy:
			cout << "Choosed Genre: Comedy" << endl;
			break;
		case Thriller:
			cout << "Choosed Genre: Thriller" << endl;
			break;
		case Mystery:
			cout << "Choosed Genre: Mystery" << endl;
			break;
		default:
			cout << "No Genre found" << endl;
		}
		break;
	case Tamil:
		cout << "You have Choosen Tamil " << endl;
		cout << "enter the Genre:";
		cin >> inputGenre;
		switch (inputGenre)
		{
		case Action:
			cout << "Choosed Genre: Action " << endl;
			break;
		case Comedy:
			cout << "Choosed Genre: Comedy" << endl;
			break;
		case Thriller:
			cout << "Choosed Genre: Thriller" << endl;
			break;
		case Mystery:
			cout << "Choosed Genre: Mystery" << endl;
			break;
		default:
			cout << "No Genre found" << endl;
		}
		break;
	case Telugu:
		cout << "You have Choosen Telugu " << endl;
		cout << "enter the Genre:";
		cin >> inputGenre;
		switch (inputGenre)
		{
		case Action:
			cout << "Choosed Genre: Action " << endl;
			break;
		case Comedy:
			cout << "Choosed Genre: Comedy" << endl;
			break;
		case Thriller:
			cout << "Choosed Genre: Thriller" << endl;
			break;
		case Mystery:
			cout << "Choosed Genre: Mystery" << endl;
			break;
		default:
			cout << "No Genre found" << endl;
		}
		break;

	}
	
	cout << "End of filter" << endl;

}