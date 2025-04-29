#include<iostream>
using namespace std;
int energy(int n)
{
	if (n <= 0)
		return 0;
	else
		cout << n << " ";
	energy(n / 2);

}
int main()
{
	int n;
	cout << "enter the current energy: ";
	cin >> n;
	energy(n);
}