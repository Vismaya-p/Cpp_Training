#include"retail.h"
int main()
{
	bill Item;

	if (Item.addItems(10, "Apple", 40))
	{
		cout << "Added the item successfully" << endl;
	}
	int new1;
	cout << "enter the new quantiity: " << endl;
	cin >> new1;
	if (Item.updateQnty(new1))
	{
		cout << "quantity updated successfully";
	}
}