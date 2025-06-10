#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	int numQ;
	cin >> numQ;
	map<string, int>myMap;
	for (int i = 0;i < numQ;i++)
	{
		int type;
		cin >> type;
		string key;
		cin >> key;
		if (type == 1)
		{
			int value;
			cin >> value;
			myMap[key] += value;
		}
		else if (type == 2)
		{
			myMap.erase(key);
		}
		else if (type == 3)
		{
			auto it=myMap.find(key);
			if (it != myMap.end())
			{
				cout << it->second << endl;
			}
			else
			{
				cout << 0 << endl;
			}
		}
	}
	return 0;
}