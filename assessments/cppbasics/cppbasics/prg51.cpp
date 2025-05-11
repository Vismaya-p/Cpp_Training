//Write a program in C++ to check the upper and lower limits of integer.
#include <iostream>
#include <limits>
using namespace std;
int main()
{
	cout << "The minimum value of int is: " << numeric_limits<int>::min() << endl;
	cout << "The maximum value of int is: " << numeric_limits<int>::max() << endl;
	cout << "The minimum value of unsigned int is: " << numeric_limits<unsigned int>::min() << endl;
	cout << "The maximum value of unsigned int is: " << numeric_limits<unsigned int>::max() << endl;
	return 0;
}