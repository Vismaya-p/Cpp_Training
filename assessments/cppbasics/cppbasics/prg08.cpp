//Program to Toggle Each Character in a String
#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	char str[MAX];
	cin.getline(str, 100);
	for (int i = 0;i < strlen(str);i++)
	{
		if (islower(str[i]))
			str[i] = toupper(str[i]);
		else if (isupper(str[i]))
			str[i] = tolower(str[i]);
	}
	cout << "Toggled string: " << str << endl;
	return 0;
}