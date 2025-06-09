#include<iostream>
#include<string>
#include<sstream>
#include<exception>
using namespace std;
class BadLengthException
{
protected:
	int n;
public:
	BadLengthException(int errorNumber) :n(errorNumber) {}
	
	int what()
	{
		return n;
	}
};
bool checkUserName(string name)
{
	bool isValid = true;
	int n = name.length();
	if (n < 5)
	{
		throw BadLengthException(n);
	}

	for (int i = 0; i < n - 1; i++) {
		if (name[i] == 'w' && name[i + 1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}

int main() {
	int T; cin >> T;
	while (T--) {
		string username;
		cin >> username;
		try {
			bool isValid = checkUserName(username);
			if (isValid) {
				cout << "Valid" << '\n';
			}
			else {
				cout << "Invalid" << '\n';
			}
		}
		catch (BadLengthException e) {
			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}