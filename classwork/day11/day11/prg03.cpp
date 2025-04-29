#include<iostream>
#define CAP 10
using namespace std;
int main()
{
	int arr[CAP], n;
	int i;
	cout << "enter the "<<CAP<<" values of array: "<<endl;
	for (i = 0;i < CAP;i++)
		cin >> arr[i];

	cout << "The values of array are: ";
	for (i = 0;i < CAP;i++)
	    cout << arr[i]<<endl;
	cout << endl;
	cout << "enter the number to be searched: ";
	cin >> n;
	for (i = 0;i < CAP;i++)
	{
		if (n == arr[i])
			break;
	}
	if (i == CAP)
		cout << n << "element not present" << endl;
	else
		cout << "element present at the index value:" << i << endl;
	
}