//Program to Count the Number of Vowels
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int count = 0;
	char ch[30];
	cin.getline(ch, 30);
	for (int i = 0;i <= 30;i++)
	{
		if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
		{
			count++;
		}
	}
	cout << "count of vowels:" << count;
}