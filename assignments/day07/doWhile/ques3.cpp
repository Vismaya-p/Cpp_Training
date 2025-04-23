#include<iostream>
using namespace std;
int main()
{
	int start, end,res=1;
	cout << "enter the start of the table and end of the table:" << endl;
	cin >> start >> end;
	for (int i= 1;i<= 10;i++)
	{
			for (int j =start;j <= end;j++)
			{
				res = j * i;
				cout << j << "*" << i << "=" << res<< "\t";

			}
			cout<<endl;
			
	}

	
	return 0;
}