#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;
class User {
public:
    string name;
    string username;
    string password;

    User(string n, string u, string pw) : name(n), username(u), password(pw) {}
};

vector<User> users;

bool signupUser() {
    string name, username, password;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    for (auto& user : users) {
        if (user.username == username) {
            cout << "Username already exists.\n";
            return false;
        }
    }
    users.emplace_back(name, username, password);
    cout << "Signup successful.\n";
    return true;
}

bool loginUser() {
    string username, password;
    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;

    for (auto& user : users) {
        if (user.username == username && user.password == password) {
            cout << "Login successful.\n";
            return true;
        }
    }
    cout << "Invalid credentials.\n";
    return false;
}
class cdr
{
public:
    string msisdn;
    string brandName;
    string mnc;
    string call_type;
    int duration = 0;
    double dwld = 0.0;
    double upload = 0.0;
    string thirdpartymsisdn;
    string thirdpartyMnc;

    bool loadFile(const string& line) {
        stringstream ss(line);
        string value;
        vector<string>values;
        while (getline(ss, value, '|'))
        {
            values.push_back(value);
            msisdn = values[0];
            brandName = values[1];
            mnc = values[2];
            call_type = values[3];
            duration = stoi(values[4]);
            dwld = stoi(values[5]);
            upload = stoi(values[6]);
            thirdpartymsisdn = values[7];
            thirdpartyMnc = values[8];
        }
        return 1;
    }
};
class customer
{
public:
    string brand;
    int incomingVoicein = 0;
    int outgoingVoiceout = 0;
    int incomingsmsin = 0;
    int incomingsmsout = 0;
    int outgoingsmsout = 0;
    int outgoingsmsin = 0;
    int incomingVoiceout = 0;
    int outgoingVoicein = 0;
    double dwld = 0.0;
    double upload = 0.0;

    void display(string& msisdn)
    {
        cout << "#customer database" << endl;

        cout << "Operator brand: " << brand << "(" << msisdn << ")" << endl;
        cout << "*services within the operator" << endl;
        cout << "Incoming voicecall duration: " << incomingVoicein << endl;
        cout << "Outgoing voicecall duration:" << outgoingVoicein << endl;
        cout << "Incoming SMS msg:" << incomingsmsin << endl;
        cout << "Outgoing SMS msg:" << outgoingsmsin << endl;
        cout << "*services outside the operator" << endl;
        cout << "Incoming voicecall duration: " << incomingVoiceout << endl;
        cout << "Outgoing voicecall duration:" << outgoingVoiceout << endl;
        cout << "Incoming SMS msg:" << incomingsmsout << endl;
        cout << "Outgoing SMS msg:" << outgoingsmsout << endl;
        cout << "MB Downloaded:" << dwld << "|" << "MB uploaded:" << upload << endl;
    }
};
class oparator
{
    string brand;
    int incomecallDur;
    int outcallDur;
    int incomesms;
    int outsms;
    double dwld;
    double upload;
    void display(string& msisdn)
    {
        cout << "#Operator database" << endl;
        cout << "Operator brand: " << brand << "(" << msisdn << ")" << endl;
        cout << "Incoming voicecall duration:" << incomecallDur << endl;
        cout << "Outgoing voicecall duration:" << outcallDur << endl;
        cout << "Incoming SMS messages:" << incomesms << endl;
        cout << "Outgoing SMS messages:" << outsms << endl;
        cout << "MB Downloaded:" << dwld << "|" << "MB uploaded:" << upload << endl;
    }
};
class cdrProcess
{
public:
    unordered_map<string, customer>customerDetails;
    unordered_map<string, oparator>operatorDetails;
    bool isSame(string& op1, string& op2)
    {
        return op1 == op2;
    }
    void run(const cdr& a)
    {
        customer& customers = customerDetails[a.msisdn];
        customers.brand = a.brandName;
        if (a.call_type == "MOC")
        {
            if (isSame(a.thirdpartymsisdn, a.thirdpartyMnc))
            {
                customers.outgoingVoiceout = a.duration;
            }
            else
            {
                customers.outgoingVoicein = a.duration;
            }
        }
        else if (a.call_type == "MTC")
        {
            customers.outgoingVoiceout = a.duration;
        }
    }
    void printData()
    {
        cout << "Customer Data" << endl;
        for (const auto& e:customerDetails)
        {
           

        }
    }

};
int main()
{
    bool loggedIn = false;

    while (true) {
        cout << "\n1. Sign Up\n2. Login\n3. Exit\nChoice: ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            signupUser();
        }
        else if (choice == 2) {
            loggedIn = loginUser();
        }
        else if (choice == 3) {
            break;
        }
    }
    ifstream file("input.txt");
    if (!file.is_open())
    {
        cout << "Error: opening the file" << endl;
    }
    string line;
    cdrProcess p;
    getline(file, line);
    while (getline(file, line))
    {
        cdr cp;
        if (cp.loadFile(line))
        {
           
        }
    }
    return 0;
}