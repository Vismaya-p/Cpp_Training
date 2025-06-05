#include<iostream>
#include<set>
#include<string>
using namespace std;
int main()
{
	set<string> Id;
	string s="";
	while (s != "exit")
	{
		getline(cin, s);
		if (s.find("VISIT ") != string::npos)
		{
			Id.insert(s.substr(6));
		}
		else if (s == "UNIQUE")
		{
			cout << Id.size() << endl;
		}
		else if (s == "TOP")
		{
			for (string id : Id)
				cout << id << " ";
		}
	}
	return 0;
}