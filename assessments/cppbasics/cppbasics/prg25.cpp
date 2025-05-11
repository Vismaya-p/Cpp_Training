//program to check a given string is a palindrome or not
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[100];
	cin.getline(str, 100);
	int len = strlen(str);
	int flag = 0;
	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - i - 1])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		cout << "palindrome";
	}
	else
	{
		cout << "not palindrome";
	}
	return 0;

}


