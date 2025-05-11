//frequency count of alphabets in a string
#include<iostream>
using namespace std;
int main()
{
	int freq[26] = { 0, };
	char str[100];
	cin.getline(str, 100);
	for (int i = 0;i < 26;i++)
	{
		freq[i] = 0;
	}
	for (int i = 0;i < strlen(str);i++)
	{
		freq[str[i] - 'a']++;
	}
	for (int i = 0;i < 26;i++)
	{
		if (freq[i] > 0)
		{
			cout << char(i + 'a') << "-" << freq[i] << endl;
		}
	}
}