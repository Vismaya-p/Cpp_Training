#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>arr;
	arr.push_back(10);
	arr.push_back(20);
	cout << arr.capacity() <<"  " <<arr.size() << endl;
	arr.push_back(30);
	cout << arr.capacity() <<"  "<< arr.size() << endl;

	for (auto i : arr)//auto- for each loop ,inside if should be an iterable object like array
	{
		cout << i << endl;
	}

}