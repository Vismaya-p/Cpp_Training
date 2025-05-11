//Write a program in C++ to check whether the primitive values crossing the limits or not.
#include <iostream>
#include <limits>
using namespace std;
int main() {
	cout << "Size of int: " << sizeof(int) << " bytes" << endl;
	cout << "Min int: " << numeric_limits<int>::min() << endl;
	cout << "Max int: " << numeric_limits<int>::max() << endl;

	cout << "Size of float: " << sizeof(float) << " bytes" << endl;
	cout << "Min float: " << numeric_limits<float>::min() << endl;
	cout << "Max float: " << numeric_limits<float>::max() << endl;

	cout << "Size of double: " << sizeof(double) << " bytes" << endl;
	cout << "Min double: " << numeric_limits<double>::min() << endl;
	cout << "Max double: " << numeric_limits<double>::max() << endl;

	return 0;
}
