#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char line[] = "This is a CPP Programming class";
	char ch = 'p';
	char* res = strchr(line, ch);
	if (res != nullptr)
		cout << "\t" << res << endl;

}