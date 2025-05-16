//Vowels from a string using ptr and count it
#include<iostream>
using namespace std;
int countVowel(char*);
int countVowel(char* ptr)
{
	int counter = 0;
	while (*ptr != '\0')
	{
		//logic to find vowels and count
		switch (*ptr)
		{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'U':
			case 'u':
				counter++;
		}
		ptr++;
	}
	return counter;
}
int main()
{
	char s[20];
	cin.getline(s, 19);
	int res=countVowel(s);
	cout << res<<endl;

}
