//count number of even and odd digits in a number
#include<iostream>
using namespace std;
int main()
{
	int n, evenCount = 0,oddCount=0;
	cin >> n;
	while (n > 0)
	{
		int digit = n % 10;
		if (digit % 2 == 0)
		{
			evenCount++;
		}
		else if (digit % 2 == 1)
		{
			oddCount++;
		}
		n = n / 10;
	}
	cout << "even count: " << evenCount << endl;
	cout << "odd count: " << oddCount << endl;
}