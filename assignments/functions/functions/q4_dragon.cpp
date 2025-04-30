#include<iostream>
using namespace std;
void notMulThree(int n)
{
	for (int i = 0;i <= n;i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}
		else
		{
			cout << i<<endl;
		}
	}
}
int main()
{
	int n;
	cout << "enter the n value:";
	cin >> n;
	cout << "numbers: ";
	notMulThree(n);
	return 0;
}

