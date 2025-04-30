#include<iostream>
using namespace std;
int main()
{
	int i=0, j=0,k;
	int arr1[3][3] = { {1,2,3},{4,5,6},{7,8,9} };//arr[3]
	int arr2[3][2] = { 10,20,30,40,50,60 };
	int arr3[3][2] = {0};
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
			cout<<arr1[i][j]<<" ";
		cout << endl;
	}
	cout << endl;
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j <2;j++)
			cout<<arr2[i][j]<<" ";
		cout << endl;
	}
	cout << endl;

	if (arr1[i][j] == arr2[i][j])
	{
		cout << "matrix can be multiplied " << endl;
	}
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 2;j++)
		{
			for (k = 0;k < 3;k++)
			{
				arr3[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
	cout << "resultant matrix: " << endl;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 2;j++)
			cout << arr3[i][j]<<" ";
		cout << endl;
		
	}
}