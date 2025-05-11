/*#include<iostream>
#define MAX 3
using namespace std;
int main()
{
	int str1[MAX],str2[MAX];
	for (int i =0;i<MAX;i++)
	{
		cin >> str1[i];
	}
	for (int i = MAX - 1,j=0;i >= 0;i--)
	{
		str2[j] = str1[i];
		j++;
	}
	int flag = 0;
	for (int i = 0; i < MAX;++i)
	{
		if (str1[i] != str2[i])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		cout << "Palinarray" << endl;
	else {
		cout << "Not Palinarray" << endl;
	}
}*/

#include<iostream>
#define MAX 5
using namespace std;
int main()
{
	int str1[MAX], str2[MAX];
	for (int i = 0;i < MAX ;i++)
	{
		cin >> str1[MAX];
	}
	for (int i = MAX - 1,j=0;i >= 0;i--)
	{
		str2[j] = str1[i];
		j++;
	}
	int flag = 0;
	for (int i = 0;i < MAX;i++)
	{
		if (str2[i] != str2[i])
		{
			flag = 1;
			break;
		}
	}
}




