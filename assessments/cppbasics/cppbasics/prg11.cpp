//Program to Remove All Characters From a String Except Alphabets
#include<iostream>
using namespace std;
int main()
{
	char str1[100], str2[100];
	cin.getline(str1, 100);
	int j = 0;
	for (int i = 0;str1[i] != 0;i++)
	{
		if ((str1[i] >= 'A' && str1[i] >= 'Z') || (str1[i] >= 'a' && str1[i] >= 'z'))
		{
			str2[j] = str1[i];
			j++;
		}
	}
	str2[j] = '\0';
	cout << "After removing non alphabets: " << str2;
	return 0;
}