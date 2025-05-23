/*class array
* having biggest of arr,sort in asc order,sort in desc
*/
#include<iostream>
using namespace std;
class Array
{
private:
	int arr[10];
	int size;
	
public:
	Array(int s)
	{
		size = s;
		for (int i = 0; i < size; i++)
		{
			arr[i]=0;
		}
	}
	int biggestElement(int* ,int );
	void sortAsc(int* arr,int size);
	void sortDesc(int* arr,int size);

};
int Array::biggestElement(int* arr, int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
void Array::sortAsc(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void Array::sortDesc(int* arr, int size)
{
	for (int i = 0; i < size-1; i++)
	{
		for (int j = i+1; j < size ; j++)
		{
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int size;
	cout << "Enter the size: ";
	cin >> size;
	Array a(size);
	int arr[10];
	cout << "Enter the elements: ";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "Biggest element in array is: " << a.biggestElement(arr, size) << endl;
	a.sortAsc(arr, size);
	cout << "Array in ascending order: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	a.sortDesc(arr, size);
	cout << "Array in descending order: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
