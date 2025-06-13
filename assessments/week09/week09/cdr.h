#pragma once
#include<iostream>
#include<vector>
#include<thread>
#include<mutex>
#include<string>
using namespace std;
mutex m;
class User
{
	string userName;
	string password;
public:
	User(string userName, string password) :userName(userName), password(password) {}
};
class customer
{
protected:
	int msisdn;
	string brandName;
	int mnc;
	vector<int>outgoingCall;
	int smsMo;
	int smsMt;
public:
    bool loadFromFile(const string& filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cerr << "Error: file can't be opened " << filename << endl;
            return false;
        }

        string line;
        if (getline(file, line)) {
            if (line.find("|") != string::npos) {
                msisdn = stoi(line.substr(1, 7));
                int s= stoi(line.substr(line.find("|") + 1));
            }
        }
        file.close();
        return true;
    }
    void setMsisdn()
    {
        msisdn = msisdn;
    }
    int getMsisdn()
    {
        return msisdn;
    }
   
};
class oparator
{
	vector<int>incomingCall;
	int sMo;
	int sMt;
};
