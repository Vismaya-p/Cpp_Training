#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<algorithm>

using namespace std;
enum logLevel
{
	INFO,
	DEBUG,
	WARNING,
	ERROR,
};
class logger { 
	ofstream logFile; 
public:
	logger(const char* file)
	{
		logFile.open(file, ios::app);
		if (!logFile.is_open())
		{
			cout << "Error opening log file." << endl;
			exit(0);
		}
	}
	const char* getLevelName(int level)
	{
		switch(level)
		{ 
		case 0:
			return "INFO";
			break;
		case 1:
			return "DEBUG";
			break;
		case 2:
			return "WARNING";
			break;
		case 3:
			return "ERROR";
			break;
		default:
			break;
		}
	}
	void log(int level,const char* msg)
	{
		logFile << "[" << getLevelName(level) << "]" << msg << endl;
	}
};

class Packet
{
	int packetId;
	char protocol[10];
	int size;
public:
	void set(int id, const char* proto, int sz)
	{
		packetId = id;
		strcpy(protocol, proto);
		size = sz;
	}
};