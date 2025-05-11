//Program to Check if Two Strings are Anagram or Not
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str1[100], str2[100];
	cin >> str1;
	cin >> str2;
	int count = 0;
	if (strlen(str1) != strlen(str2))
	{
		cout << "not anagram";
	}
	for (int i = 0;i < strlen(str1); i++)
	{
		for (int j = 0;j < strlen(str2);j++)
		{
			if (str1[i] == str2[j])
			{
				count++;
			}
			else
			{
				count--;
			}
		}
	}
	if (count == strlen(str1))
		cout << "anagram";
	else
		cout << "not anagram";
}