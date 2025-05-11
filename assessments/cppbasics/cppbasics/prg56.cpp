//print the first nonzero digit of a number
#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;

	while (num % 10 == 0 && num != 0) {
		num /= 10;
	}
	if (num != 0) {
		cout << "The first non-zero digit is: " << num % 10 << endl;
	}
	else {
		cout << "The number is zero." << endl;
	}

	return 0;
}