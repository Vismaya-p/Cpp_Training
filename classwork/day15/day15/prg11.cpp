//gcd
/*#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	while (b != 0)
	{
		int t = b;
		b = a % b;
		a = t;
	}

	cout << "gcd is " << a;
	return 0;
	}*/
#include<iostream>
using namespace std;
int main()
{
	int x, y,gcd;
	cin >> x >> y;
	for (int i = x;i >= 2;i--)
	{
		if ((x % i == 0) && (y % i == 0))
		{
			gcd = i;
			break;
		}
	}
	cout << gcd;
	return 0;
}
