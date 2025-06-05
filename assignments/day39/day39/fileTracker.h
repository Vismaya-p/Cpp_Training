#pragma once

#include<unordered_map>
#include<string>
#include<map>
#include<set>
#include<deque>
using namespace std;

struct FileMeta {
	string fileName;
	string ownerUser;
};

class FileTracker
{
	map<int, FileMeta> files;
	unordered_map<int, int> accessFrequency;
	unordered_map<int, int> lastAccessed;
	unordered_map<string, set<int>> userAccessed;
	unordered_map<int, deque<pair<string, string>>> accessHistory;
	set<pair<int, int>> quickLastAccess;
	int timestamp;
public:
	FileTracker();
	void addFile(int, string, string);
	void accessFile(int, string, string);
	void deleteFile(int);
	void listRecent();
	void displayFreq(int);
	void listFilesUser(string);

};