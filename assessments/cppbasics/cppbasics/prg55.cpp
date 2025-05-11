//Write a program in C++ that converts kilometers per hour to miles per hour.
// The formula for conversion is: mph = kph * 0.621371
#include <iostream>
using namespace std;
int main() {
	double kph, mph;
	cin >> kph;
	mph = kph * 0.621371;

	cout << kph << " kmph is equal to " << mph << " mph." << endl;

	return 0;
}
