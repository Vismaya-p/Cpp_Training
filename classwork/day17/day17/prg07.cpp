//without using loops print 1 to n natural number
#include<iostream>
using namespace std;
int main()
{
	static int n = 1;//for making it global
	if (n == 10)
		exit(EXIT_SUCCESS);
	cout << n++ << endl;
	main();
	return EXIT_SUCCESS;
}