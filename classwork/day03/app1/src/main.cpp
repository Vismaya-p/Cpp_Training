#include<iostream>
using namespace std;
#include<main.h>

int main() {
	int a, b;
	char op;
	cout << "enter two numbers" << endl;
	cin >> a >> b;
	cout << "enter operator" << endl;
	cin >> op;
	switch (op) {
	case '+':
		cout << "Result=" << add(a, b);
		break;
	case '-':
		cout << "Result=" << sub(a, b);
		break;
	case '/':
		cout << "Result=" << divi(a, b);
		break;
	case '*':
		cout << "Result=" << mul(a, b);
		break;
	default:
		cout << "Invalid operator"<< endl;

	}
	return 0;
}