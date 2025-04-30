#include<iostream>
#include<cstring>
void display(int[], int);
void displayPtr(int *, int );
void updatedArr(int[], int);
int lenStr(char* str1);
using namespace std;
int main()
{
	//int res = strncmp(s1, s2, 4);
	int a[] = { 1, 3, 5, 7, 2, 4, 6, 8 };
	int n = sizeof(a) / sizeof(a[0]);
	displayPtr(a, n);
	updatedArr(a, 3);
	display(a, n);
	char name[] = "vismaya";
	cout << lenStr(name);
	return 0;

}
void display(int arr[],int CAP)
{
	for (int i = 0;i < CAP;i++)
		cout << arr[i] << endl;
}
void displayPtr(int *arr, int CAP)
{
	for (int i = 0;i < CAP;i++)
		cout << arr[i] << endl;
}
void updatedArr(int arr[], int pos)
{
	arr[pos] = 444;
}
int lenStr(char* str1)
{
	int count = 0;

	while (*str1!='/0')
	{
		count++;
		str1++;
	}
	return count;
}