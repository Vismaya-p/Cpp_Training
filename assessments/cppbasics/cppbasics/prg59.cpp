//remove white spaces from end of string(rtrim).
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char str[100];
	cin.getline(str, 100);
	int len = strlen(str);
	while (len > 0 && str[len - 1] == ' ') {
		len--;
	}
	str[len] = '\0'; // Null-terminate the string

	cout << "String after removing trailing spaces: " << str << endl;

	return 0;
}