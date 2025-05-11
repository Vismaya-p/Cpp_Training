//avoid left spaces(ltrim).
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char str[100];
	cin.getline(str, 100);
	int i = 0;
	while (str[i] == ' ') {
		i++;
	}

	// Shift the string to the left
	if (i > 0) {
		for (int j = 0; str[j + i] != '\0'; j++) {
			str[j] = str[j + i];
		}
		str[strlen(str) - i] = '\0';
	}

	cout << "String after removing leading spaces: " << str << endl;

	return 0;
}
