#include<iostream>
#include<set>
#include<string>
using namespace std;
int main()
{
	set<string>str= { "apple", "application", "banana", "apply", "ball" };
	string s;
	getline(cin, s);
	auto it = str.lower_bound(s);
	while (it != str.end() && (*it).substr(0, s.size()) == s)
	{
		cout << *it << " ";
		advance(it, 1);
	}
	cout << endl;
	return 0;
}

