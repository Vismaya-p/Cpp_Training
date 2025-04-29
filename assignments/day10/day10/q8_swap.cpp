#include<iostream>
using namespace std;
void swap(int& n1, int& n2)
{
	if (n1 < 0 || n2 < 0)
	{
		return;
	}
	else
	{
		n1 = n1 + n2;
		n2 = n1 - n2;
		n1 = n1 - n2;

	}

}
int main()
{
	int n1, n2;
	cout << "enter 2 numbers: "<<endl;
	cin >> n1 >> n2;
	swap( n1, n2);
	cout << "values after swapping" << endl;
	cout << "n1= " << n1<<"  n2= "<<n2;
	return 0;
}
