/*using 4 for loops
*****
*****
*****
*****
*/

#include<iostream>
using namespace std;
int main()
{
	int a[30], n, i, j, k, m;
	cout << "enter n value: ";
	cin >> n;
	for (int row = 1;row<=n;row++)
	{
		for (i = 1;i <=n/2&&row<=n/2;i++)
		{
			cout << "*";
			for (j = 1;j <= n / 2 && row <= n / 2;j++)
			{
				cout << "*";
			}
			for (k = 1;k <= n / 2 && row <= n / 2;k++)
			{
				cout << "*";
			}
			for (m= 1;m <= n / 2 && row <= n / 2;m++)
			{
				cout << "*";
			}
	    }
	}
	cout << endl;
}