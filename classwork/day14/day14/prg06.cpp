
//count the no of vowels
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int count = 0;
	char ch[20];
	cin.getline(ch,20);
	//char a[10] = { 'a','e','i','o','u','A','E','I','O','U' };
	for (int i = 0;i <= 20;i++)
	{
	 if (ch[i] == 'a' || ch[i] == 'e' || ch [i] == 'i' || ch [i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
		{
			count++;
		}
	}
	cout << "count of vowels:"<<count;
}