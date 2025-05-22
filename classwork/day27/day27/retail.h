#pragma once
#include<iostream>
#include<cstring>
using namespace std;
class bill
{
	int id;
	char name[30];
	int quantity;
	int stock;
public:
	
	bool addItems(int,const char*,int);
	bool updateName(int,const char*);
	bool updateQnty(int);
	int searchItemByQnty(int);
	bool deleteItemByCode(int);

	

};
