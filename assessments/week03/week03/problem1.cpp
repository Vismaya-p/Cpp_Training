//sum of position of "are" and "i"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cout<<"enter string: ";
	getline(cin, s);
	int posOfAre = -1;
	int posOfI = -1;

	for (int i = 0;i <= s[i]!='\0';i++)
	{
		if (s[i] == 'a' && s[i + 1] == 'r' && s[i + 2] == 'e')
		{
			posOfAre = i;
			break;
		}
	}
	for (int i = 0;i <= s[i] != '\0';i++)
	{
		if (s[i] == 'i')
		{
			posOfI = i;
			break;
		}
	}
	int sum = posOfAre + posOfI;
	cout << "sum = " << sum;
}

/*
output:
enter string: we are playing football
sum = 14
*/