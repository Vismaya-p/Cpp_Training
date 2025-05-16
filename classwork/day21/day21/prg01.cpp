#include<iostream>
#include<stdlib>
using namespace std;
struct book
{
	int isbin;
	char title[20];
	float price;
	char author[20];
};
int main()
{
	struct book b1;
	cout << sizeof(b1) << endl;
	struct book b2 = { 1001,"Let us C++",200.50,"Yashwant" };
	cout << "ISBIN:" << b2.isbin << endl;
}