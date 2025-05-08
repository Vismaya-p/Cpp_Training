//star pattern 1 3 5 7
#include<iostream>
using namespace std;
int main()
{
	int a[30],n,i,j,k,m;
	cout << "enter n value: ";
	cin >> n;
	for (int i = 0;i <(n/2)+1;i++)
	{
		for ( j = 0;j <(n/2)-i;j++)
		cout << " ";
		for ( k = j;k <= (n / 2);k++)
		cout << "*";
		for (m = j + 1;m <= n / 2;m++)
		cout << "*";
		cout << endl;
		}
	
}