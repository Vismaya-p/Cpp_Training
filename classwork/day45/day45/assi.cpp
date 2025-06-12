#include<iostream>
#include<queue>
#include<fstream>
#include<string>
using namespace std;
class task
{
	string id;
	int load;
public:
	task(string id, int load) :id(id), load(load) {}
};
class cpu
{
	int cpuCount;
	queue<task>qTask;
public:
	bool readFile(const string& fileName)
	{
		ifstream file(fileName);
		if (!file.is_open())
		{
			cout << "error opening file!" << endl;
			return false;
		}
		string line;
		if (getline(file, line))
		{
			if (line.find("CPUs:") != string::npos)
			{
				cpuCount = stoi(line.substr(line.find(":") + 1));
			}
		}
	}
	
};
