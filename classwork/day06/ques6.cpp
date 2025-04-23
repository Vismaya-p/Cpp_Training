#include<iostream>
#include"day06.h"
using namespace std;
int marks() {
	int m1, m2, m3, m4, m5;
	cout << "enter marks of each subjects obtained by a student";
	cin >> m1 >> m2 >> m3 >> m4 >> m5;
	int aggr = m1 + m2 + m3 + m4 + m5;
	int percentage = aggr /5;
	cout << "obtained aggregate marks is =" << aggr << endl;
	cout << "obtained percentage mark is =" << percentage << endl;
	return 0;
}