//new number
#include<iostream>
using namespace std;
int newNum(int, int);
int main()
{
	int n1, n2;
	cout << "enter two numbers: ";
	cin >> n1 >> n2;
	cout << "new number=" << newNum(n1, n2);
}
int newNum(int n1, int n2)
{
	int lastDigit, firstDigit;
	lastDigit = n1 % 10;
	while (n2 >= 10) {
		n2 = n2 / 10;
	}
	return (lastDigit * 10) + n2;

}