/*WAP
1. Given an input string str of n length, find the number of consecutives characters present in the given and delete those consitive chars in the string str.
2. repeat the process until all the consecutive characters are deleted / removed from the given string i.e str.

3. find the number of the operation are done while deleting the consecutive characters.
*/
#include<iostream>
using namespace std;
#define MAX 100

int removeConsecutiveChars(char* str);

int main()
{
	char str[MAX];
	cout << "Enter String: ";
	cin.getline(str, MAX - 1);
	cout << endl;
	cout << "Characters removed: " << removeConsecutiveChars(str) << endl;
	cout << "After character removal: " << str;
	return 0;
}

int removeConsecutiveChars(char* str)
{
	int count = 0, i = 0, j = 0;
	char ch1, ch2;
	while (*(str + i))
	{
		ch1 = tolower(*(str + i));
		ch2 = tolower(*(str + i + 1));
		if (ch1 + 1 == ch2)
		{
			for (j = i + 2; *(str + j) != '\0';++j)
				*(str + j - 2) = *(str + j);
			*(str + j - 2) = '\0';
			count++;
			i = 0;
		}
		else
			i++;
	}
	return count;
}