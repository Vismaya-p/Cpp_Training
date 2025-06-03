#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	vector<int>scores;
	int score;
	cout << "Enter the scores(-1 is to end):" << endl;
	while (score != -1)
	{
		cin >> score;
		scores.push_back(score);
	}
	sort(scores.begin(), scores.end());
	for (int i = 0;i < scores.size(); i++)
	{
		cout << scores[i] << " ";
	}
	cout << endl;
}