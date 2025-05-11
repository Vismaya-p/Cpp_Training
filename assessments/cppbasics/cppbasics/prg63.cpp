//remove duplicate elements from an array
#include <iostream>
using namespace std;
int main()
{
	int a[50];
	int n;
	cout<< "Enter the no of elements in the array: ";
	cin >> n;
	for(int i = 0;i < n;i++)
	{ 
		cin >> a[i];
	}
	for(int i = 0;i < n;i++)
	{
		for (int j = i + 1;j < n;)
		{
			if (a[i] == a[j])
			{
				for (int k = j;k < n - 1;k++)//shifting of elements to the left
				{
					a[k] = a[k + 1];
				}
				n--;
			}
			else
				j++;
		}
	}
	cout << "resultant array: ";
	for (int i = 0;i < n;i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}