#include<iostream>
using namespace std;
void oddFloors(int floor,int n)
{
	if (floor > n)
		return;
    oddFloors(floor+2,n);
	cout << floor<<endl;
}
int main()
{
	int n;
	cout << "enter the no. of floors: " << endl;
	cin >> n;
	cout << "odd numbered floors visited: " << endl;
	oddFloors(1,n);
	return 0;
}