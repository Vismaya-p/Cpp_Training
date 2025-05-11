//remove white space from both end of string(trim).
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char str[100];
	cin.getline(str, 100);
	int start = 0, end = strlen(str) - 1;
	while (str[start] == ' ') {
		start++;
	}

	while (end >= start && str[end] == ' ') {
		end--;
	}

	str[end + 1] = '\0';

	if (start > 0) {
		for (int j = 0; str[j + start] != '\0'; j++) {
			str[j] = str[j + start];
		}
		str[end - start + 1] = '\0';
	}

	cout << "String after trimming: " << str << endl;

	return 0;
}