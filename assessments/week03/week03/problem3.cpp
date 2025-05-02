//count of number of elements to the right of the current element that are smaller than it.
#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	int n;
	cout << "enter the no of elements in array: ";
	cin >> n;
	int a[MAX];
	int res[MAX];
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];

	}
	for (int i = 0;i < n;i++)
	{
		int count = 0;
		for (int j = i + 1;j < n;j++)
		{
			if (a[j] < a[i])
			{
				count++;
			}
		}
		res[i] = count;
	}
	for (int i = 0;i < n;i++)
	{
		cout<<res[i] << " ";

	}
	cout << endl;
	return 0;
}

/*
* output:
enter the no of elements in array: 6
6 5 4 3 2 1
5 4 3 2 1 0
*/