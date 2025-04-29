#ifdef __INTELLISENSE__
#pragma diag_suppress 28
#endif
#include<iostream>
using namespace std;
int main()
{
	int a[] = { 11,13,12,15,8,6,4,3,7,1 };
	int i, countOdd, countEven,outputArr[10];
	constexpr int noElems = sizeof(a) / sizeof(a[0]);
	int outputArr[noElems];
	cout << "no of elements present: " << noElems << endl;
	for (i = 0;i < noElems;i++)
		cout << a[i] << endl;
	for (i = 0, countOdd = 0;i < noElems;i++)
	{
		if (a[i] % 2 != 0) {
			outputArr[countOdd] =a[i];
			countOdd++;

		}
	}
	for (i = 0, countEven = countOdd;i < noElems;i++)
	{
		if (a[i]% 2 == 0) {
			outputArr[countEven] = a[i];
			countEven++;
		}
	}
}

	/*int arr[10];
	int i, n,countOdd,countEven;
	for (i = 0, countOdd = 0;i < 10;i++)
	{
		if (i % 2 != 0) {
			arr[countOdd] = i;
			countOdd++;
		}
	}
	for (i = 0, countEven=countOdd;i < 10;i++)
	{
		if (i % 2 == 0) {
			arr[countEven] = i;
			countEven++;
		}
	}*/

	/*for (i = 0;i <= 10;i += 2, countOdd++)
	arr[countOdd] = i;
	for (i = 0;i <=10/2;i+=2,countOdd++)
	arr[countEven] = i;
	for (i = 0;i < 10;i++)
		cout << arr[i] << endl;*/
