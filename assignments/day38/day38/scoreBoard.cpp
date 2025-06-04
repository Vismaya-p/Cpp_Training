#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	vector<int>scores;
	int score;
	cout << "Enter the scores(-1 is to end):" << endl;
	while (cin >> score && score != -1)
	{
		//cin >> score;
		scores.push_back(score);
	}
	sort(scores.begin(), scores.end());
	scores.erase(unique(scores.begin(), scores.end()), scores.end());

	cout << "All scores: \n";
	for (int s : scores)
	{
		cout << s << " ";

	}
	cout << endl;
	cout << "Top 3 scores:\n";
	for (int i = scores.size() - 1;i >= 0 && i >= (scores.size()) - 3;i--)
	{
		cout << scores[i] << " ";
	}
	cout << endl;
	return 0;
}