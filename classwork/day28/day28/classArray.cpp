//Vector internal working
#include<iostream>
/*rules
* when the size is equal to cap,cap is doubled by it's earlier val(resizing arr)
* when array is resized we need to move the contents from earlier m/m to new m/m
*/
using namespace std;
class Array
{
	int* arr;//dynamic array
	int size;//no of elements present in arr
	int capacity;//room to assign value for arr

public:
	Array()
	{
		capacity = 1;
		size = 0;
		arr = new int[capacity];
	}

	int push_back(int);
	int biggest();
	bool sortAsc();
	void printArray();
	bool sortDesc();
	int getSize()const;
	int getCapacity()const;
	int resize();//called whenever size==cap

};
int Array::getCapacity()const
{ 
	return capacity;
}
int Array::getSize()const { return size; }
int Array::push_back(int v)
{
	if (size == capacity)
	{
		cout << "capacity is equal to size when adding element " << v << endl;
		resize();
	}
	arr[size++] = v;
	return 0;
}
void Array::printArray()
{
	for (int i = 0;i < size;i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
}
int Array::resize()
{
	capacity = capacity * 2;
	int* tptr = new int[capacity];
	for (int i = 0;i < size;i++)
	{
		tptr[i] = arr[i];
	}
	delete[] arr;
	arr = tptr;
	return 0;
}
int main()
{
	Array a;
	cout << "Size: " << a.getSize() << "Capacity: " << a.getCapacity() << endl;
	a.push_back(10);
	a.printArray();
	a.push_back(20);
	a.printArray();

	cout << "Size: " << a.getSize() << "Capacity: " << a.getCapacity() << endl;
	a.push_back(30);
	a.printArray();

	cout << "Size: " << a.getSize() << "Capacity: " << a.getCapacity() << endl;
	a.push_back(50);
	a.printArray();

	cout << "Size: " << a.getSize() << "Capacity: " << a.getCapacity() << endl;
	a.push_back(5);
	a.printArray();

	cout << "Size: " << a.getSize() << "Capacity: " << a.getCapacity() << endl;

	return 0;
}