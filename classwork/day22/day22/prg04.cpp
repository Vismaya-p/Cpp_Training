/*
sum of the arrays using pointers
*/
#include<iostream>
using namespace std;
int sumArr(int*,int);
int sumArr(int* ptr,int n)
{
	int sum = 0;

	//logic to find the sum of the list
	//ptr to convert to array notation
	/*for (int i = 0;i < n;i++, ptr++)
		sum += *ptr;*/
	for (int i = 0;i < n;i++)
		sum += ptr[i];
	return sum;

}
int main()
{
	int list[] = { 1,2,3,4,5 };
	int cap = sizeof(list) / sizeof(list[0]);
	cout << sumArr(&list[0], cap) << endl;
	return 0;

}