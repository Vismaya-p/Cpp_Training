//find unique element in an array
#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	int n,a[MAX];
	cout << "enter the no. of elements: ";
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
		cout << " ";
	}
	for (int i = 0;i < n;i++)
	{
		if ((i > 0 && a[i] == a[i - 1]) || (i < n-1 && a[i] == a[i + 1]))
			continue;
		else
		{
			cout << "unique element: " << a[i] << endl;
			break;
		}
	}
	return 0;
}
/*
enter the no.of elements : 7
3 3 4 4 5 5 7
unique element : 7
*/