#include<iostream>
using namespace std;
int main()
{
	int n,count=0, digit,even=1,odd=1;
	cout << "enter a number: ";
	cin >> n;
	while(n!=0)
	{
		digit = n % 10;
		count++;
		if (count % 2 == 0) {
			even = even * digit;
			
		}
		else {
			odd = odd * digit;
		}

		n = n / 10;

	}
	if (even == odd) {
		cout << "YES" << endl;

	}
	else {
		cout << "NO";
	}

	return 0;
}