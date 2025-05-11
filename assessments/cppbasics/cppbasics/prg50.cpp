// Write a Program for Decimal to Hexadecimal Conversion
#include <iostream>
using namespace std;
int main() {
	int decimalNumber;
	cin >> decimalNumber;
	char hexDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
							'A', 'B', 'C', 'D', 'E', 'F'};
	string hexNumber = "";
	while (decimalNumber > 0) {
		int remainder = decimalNumber % 16;
		hexNumber = hexDigits[remainder] + hexNumber;
		decimalNumber /= 16;
	}
	cout << "Hexadecimal number: " << hexNumber << endl;
	
	return 0;
}