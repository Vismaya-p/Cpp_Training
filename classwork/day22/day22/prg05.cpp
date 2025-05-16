/*
reverse array using pointers
*/
#include<iostream>
using namespace std;
void revArr(int*, int);
void revArr(int* ptr, int n)
{
	int* start = nullptr;
	int* end = nullptr;
	start = ptr;
	end = ptr + n - 1;
	while (start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
void display(int *ptr,int n)
{
	for (int i = 0;i < n;i++)
		cout << ptr[i] << " ";
	cout << endl;
}
int main()
{
	int list[] = { 1,2,3,4,5 };
	int cap = sizeof(list) / sizeof(list[0]);
	revArr(&list[0], cap);
	display(list, cap);
	return 0;
}


