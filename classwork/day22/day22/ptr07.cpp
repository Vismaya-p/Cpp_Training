//each char in a string is displayed and its ascii value
#include<iostream>
using namespace std;
int main()
{
	char s1[200];
	//cin.getline(s1, 199);
	fgets(s1, 199, stdin);
	
	s1[strlen(s1) - 1] = '\0';
	for (int i = 0;i < strlen(s1);i++)
	{
		cout << (int)s1[i] << "=" << s1[i] << endl;
	}
	cout << s1 << endl;
	return 0;
	
}
