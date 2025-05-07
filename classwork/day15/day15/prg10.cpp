/* armstrong number using two functions
* * 1. armstrong(int n,int p)
 * 2. main()
 * 
 * The program checks if a number is an Armstrong number or not.
 * An Armstrong number is a number that is equal to the sum of its own digits raised to the power of the number of digits.
 * 
 * Example:
 * Input: 153
 * Output: 153 is an Armstrong number*/
#include <iostream>
#include<math.h>
using namespace std;
int digits(int n)
{
	int count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return count;
}
int armstrong(int n)
{
	int temp = n, sum = 0, digit;
	digit = digits(n);
	while (temp > 0)
	{
		sum = sum + pow(temp % 10, digit);
		temp = temp / 10;
	}
	return sum;
}
int main()
{
	int n;
	cout << "Enter the number: " << endl;
	cin >> n;
	int sum = armstrong(n);
	if (n == sum)
		cout << n << " is an armstrong number";
	else
		cout << n << " is not an armstrong number";
}