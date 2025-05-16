#include<iostream>
using namespace std;
int main()
{
	
	int a[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			cout << "Address: " << (unsigned long int) & a[i][j] << "\tvalue: " << a[i][j] << endl;
		}
	}
	int* ptr = nullptr;
	ptr = &a[0][0];
	for (int i = 0;i < 12;i++)
	{
		cout << *ptr << endl;
		ptr++;
	}
	//int** ptr1 = a;
	ptr = a[1];
	cout << *ptr << endl;
	ptr++;
	
	return 0;
}
//BA+IV*sizeof(dt)
//Allocate m/m dynamically for 2D array=BA+rowIV*(no.of.col*sizeof(dt))+(colIV*sizeof(dt))