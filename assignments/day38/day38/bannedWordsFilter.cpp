#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
	set<string> banned= { "bad", "evil", "vulgar" };
	string text = "this is a bad example with evil words";
	for (string word : banned)
	{
		auto index = text.find(word);
		if (index != string::npos)
			text.erase(index, word.size() + 1);
	}
	cout <<"Filtered: "<< text;
}