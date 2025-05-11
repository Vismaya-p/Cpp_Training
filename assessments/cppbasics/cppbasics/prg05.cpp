//Program to Check Whether a Character is a Vowel or Consonant
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	if (!isalpha(ch))
	{
		cout << "not an alphabet letter" << endl;
	}
	else if(ch=='a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
	{
		cout << "vowel";
	}
	else {
		cout << "consonant" << endl;
	}
	return 0;
}