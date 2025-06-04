#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int freq[10] = { 0 };
	for (char c : s)
	{
		freq[c - '0']++;
	}
	int minVal = INT_MAX;
	int maxVal = INT_MIN;
	for (int i = 0;i <=9;i++)
	{
		if (freq[i] > 0)
		{
			int val = i * freq[i];
			if (val < minVal)
				minVal = val;
			if (val > maxVal)
				maxVal = val;
		}
	}
	if (minVal == maxVal)
		cout << minVal << endl;
	else
		cout << maxVal - minVal << endl;
	return 0;
}