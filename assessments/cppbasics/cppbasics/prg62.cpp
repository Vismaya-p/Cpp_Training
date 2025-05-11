//implement linear search
#include <iostream>
using namespace std;
int main()
{
	int n, i, flag = 0;
	cout << "Enter the no of elements in the array: ";
	cin >> n;
	int arr[50];
	cout << "Enter the elements of the array: ";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int key;
	cout << "Enter the element to search: ";
	cin >> key;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == key)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		cout << "Element found at index " << i << endl;
	}
	else
	{
		cout << "Element not found" << endl;
	}
}