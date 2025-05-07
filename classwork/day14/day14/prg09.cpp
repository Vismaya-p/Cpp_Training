//ltrim,rtrim,trim(trimming a string)
#include<iostream>
#define MAX 30
using namespace std;
void ltrim(char str[],char str1[])
{
	int i = 0;
	int j = 0;
	while (str[i] == '_' || str[i] == ' ')
	{
		i++;
	}
	while (str[i]!='\0')
	{
		str1[j] = str[i];
		j++;
		i++;
	}
	str1[j] = '\0';
    cout<< str1<<endl;
}
void rtrim(char str[], char str2[])
{
	int i = 0;
	while (str[i])
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	int end = i - 1;
	while (end >= 0 && str2[end] == '_')
	{
		end--;
	}
	str2[end + 1] = '\0';
    cout << str2 << endl;
	
}
int main()
{   
	char str[MAX];
	cin.getline(str,MAX);
	char str1[MAX];
	char str2[MAX];
	ltrim(str,str1);
	rtrim(str,str2);
	return 0;
}

