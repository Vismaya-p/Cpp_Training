#include<iostream>
#include"day06.h"
using namespace std;
int price() {
	int selling_price;
	int profit;
	cout << "enter the selling price: ";
	cin >> selling_price;
	cout << "enter the profit: ";
	cin >> profit;
	int cost_price = selling_price - profit;
	cout << "cost price = " << cost_price;
	return 0;
}