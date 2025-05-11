//to get sum of numbers in a string
#include<iostream>
using namespace std;
int main()
{
	char str[10];
	cin.getline(str, 10);
	int sum = 0;
	for (int i = 0;i < strlen(str);i++)
	{
		//if (str[i] >= 48 && str[i] <= 57)
		if(isdigit(str[i]))
		{
			sum += str[i] - 48;
		}
	}
	cout << sum;

}