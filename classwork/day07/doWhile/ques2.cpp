#include<iostream>
using namespace std;
int main()
{
	/*
	6
	1+1+2+2
	1+1+1+3
	*/
	int n = 6,countWays=0;
	for (int i = 1;i < n;i++)
	{
		for (int j= i;j < n;j++)
		{
			for (int k = j;k < n;k++)
			{
				for (int l = k;l< n;l++)
				{
					if ((i + j + k + l) == n)
					{
						cout << i << "+" << j << "+" << k << "+" << l << "=" << n<<endl;
							countWays++;
					}

				}
			}

		}

	}
	if (countWays == 0)
		cout << "no. of ways =-1" << endl;
	else
		cout << "no. of ways =" << countWays<<endl;
	return 0;
}