#include<iostream>
#define MAX 100
using namespace std;
int removeSpace(char str1[], char str2[])
{
	int j = 0;
	for (int i = 0;i < strlen(str1);i++)
	{
		if (str1[i] == '_' || str1[i] == ' ')
		{
			continue;
		}
		else
		{
			str2[j] = str1[i];
			j++;
		}
	}
	str2[j] = '\0';
	return str2[j];
}
int main()
{
	char str1[MAX];
	cin.getline(str1,MAX-1);
	char str2[MAX];
	memset(str2, '\0', MAX - 1);
	removeSpace(str1, str2);
	cout << str2;
	return 0;
}