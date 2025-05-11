//Write a program in C++ to convert temperature in Fahrenheit to Celsius.
#include <iostream>
using namespace std;
int main()
{
	float fahrenheit, celsius;
	cin >> fahrenheit;
	celsius = (fahrenheit - 32) * 5 / 9;
	cout << "Temperature in Celsius: " << celsius << endl;
	return 0;
}