//ascii value of a character
/*#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "enter a character:";
	cin >> ch;
	cout << "ascii value of character: " << int(ch) << endl;
	printf("ascii value of character: %d", ch);
	return 0;
}*/

//check if a character is vowel or consonant
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "enter a character:";
	cin >> ch;
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		cout << "character is vowel";
	}
	else
	{
		cout << "character is consonant";
}
	return 0;
}