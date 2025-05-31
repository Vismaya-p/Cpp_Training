#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{//can change data explicitly also and read it at console
	string line;
	ifstream fIn("emp.txt");//reading an existing file
	if (!fIn.is_open())  //if file is not there
		cerr << "Error:opening the file" << endl;
	while (getline(fIn, line))
		cout << line << endl;//for printing in terminal cout
	fIn.close();
	ofstream fOut("emp.txt",ios::app);
	fOut<< "Name: ";
	fOut.close();
	return 0;

}