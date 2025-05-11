//Program to Check if the Given String is Palindrome or not Using Recursion
#include <iostream>
#include <cstring>
using namespace std;
bool isPalindrome(char str[], int start, int end)
{
	if (start >= end)
		return true;
	if (str[start] != str[end])
		return false;
	return isPalindrome(str, start + 1, end - 1);
}
int main()
{
	char str[100];
	cout << "Enter a string: ";
	cin.getline(str, 100);
	int n = strlen(str);
	if (isPalindrome(str, 0, n - 1))
		cout << "The string is a palindrome." << endl;
	else
		cout << "The string is not a palindrome." << endl;
	return 0;
}