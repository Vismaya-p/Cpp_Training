//Exception handling
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	
	string err = "Vis";
	string divByZeroErr = "Divide by Zero Error occured";
	string nullPtrErr = "Memory allocation Failed";
	int n1 = 10, n2 = 0;
	char* ptr = nullptr;
	try {
		int* arr = new int[999999999];
		//throw 20;
		/*if (n2 == 0)
			throw divByZeroErr;
		*/
		if (arr == nullptr)
			throw arr;
		/*if (ptr == nullptr)
			throw nullPtrErr;
		*/
	}
	catch (int e)
	{
		cout << "Caught an exception: " << e << endl;
	}
	catch (const string e)
	{
		cout << "caught an exception: " << e << endl;
	}
	catch (bad_alloc& e)
	{
		cout << "Error(bad_alloc) : " << e.what() << endl;
	}
	catch (exception& e)
	{
		cout << "Error: " << e.what() << endl;
	}
	return 0;
}
