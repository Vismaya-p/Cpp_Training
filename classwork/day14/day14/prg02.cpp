//find even num b/w start range and end range
#include<iostream>
using namespace std;
int main()
{
	int start, end;
	cout << "enter start range:";
	cin >> start;
	cout << "enter end range:";
	cin >> end;
	for (int i = start; i <= end;i++)
	{
		if (i % 2 == 0)
		{
			cout << "even number:" << i << endl;
		}
	}
}