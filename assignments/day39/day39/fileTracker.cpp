#include<iostream>
#include"fileTracker.h"
using namespace std;

FileTracker::FileTracker()
{
	timestamp = 0;
}
void FileTracker::addFile(int id, string name, string user)
{
	FileMeta f;
	f.fileName = name;
	f.ownerUser = user;
	files.insert({ id,f });
	accessFrequency.insert({ id,0 });
	lastAccessed.insert({ id,timestamp });
	quickLastAccess.insert({ timestamp,id });
	timestamp++;
}
void FileTracker::accessFile(int, string, string)
{

}
void FileTracker::deleteFile(int);
void FileTracker::listRecent();
void FileTracker::displayFreq(int);
void FileTracker::listFilesUser(string);