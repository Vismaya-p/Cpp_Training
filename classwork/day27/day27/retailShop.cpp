#include"retail.h"
bool bill::addItems(int qnt, const char* n, int code)
{
	
	code = id;
	strcpy(name, n);
	qnt = quantity;
	return true;
}
bool bill::updateQnty(int new1)
{
	stock = stock - new1;
	return true;

}
bool bill::updateName(int code,const char* n)
{
	if (id == code)
	{
		strcpy(name, n);
	}
}