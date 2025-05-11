// Program to Remove the Vowels from a String
#include<iostream>
#define MAX 50
using namespace std;
int main()
{
	char ch[MAX];
	cin.getline(ch, MAX);
	char str[MAX];
	memset(str, '\0', MAX - 1);
	int j = 0;
	for (int i = 0;i < strlen(ch);i++)
	{
		if (!(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U'))
		{
			str[j] = ch[i];
			j++;
		}
	}
	str[j] = '\0';
	cout << "string without vowels:" << str;
}
