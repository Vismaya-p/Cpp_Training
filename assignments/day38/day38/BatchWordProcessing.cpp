#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	vector<string>words(5);
	for(int i=0;i<5;i++)
	{
		cin >> words[i];
	}
	for (string& word : words)
	{
		transform(word.begin(), word.end(), word.begin(), ::tolower);
	}
	sort(words.begin(), words.end());
	words.erase(unique(words.begin(), words.end()), words.end());
	cout << "words:";
	for (const string& word : words)
	{
		cout << word << " ";
	}
	cout << endl;
	return 0;
}