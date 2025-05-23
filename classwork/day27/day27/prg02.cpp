#include<iostream>
#include<cstring>
using namespace std;
class Item
{
	int id;
	char itemName[20];
	int qnty;
	float price;
public:
	void setId(int);
	int getId();
	void setQnty(int);
	int getQnty();
	void setPrice(float);
	float getPrice();
	void setItemName(char*);
	char* getItemName();
};

void Item::setId(int c)
{
	c = id;;
}
int Item::getId()
{
	return id;
}

void Item::setQnty(int q)
{
	q = qnty;
}
int Item::getQnty()
{
	return qnty;
}
void Item::setPrice(float p)
{
	p= price;
}
float Item::getPrice()
{
	return price;
}

int main()
{
	Item i;
}