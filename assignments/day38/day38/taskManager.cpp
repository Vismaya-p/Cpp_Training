#include<iostream>
#include<string>
#include<list>
using namespace std;
int main()
{
	list<string>tasks;
	string input;
	cout << "Enter Command(add/urgent/critical/remove/show/exit): ";
	
	while (true)
	{
		getline(cin, input);
		string command = input.substr(0, input.find(" "));
		string task = input.substr(input.find(" ") + 1);
		if (command == "exit")
		{
			break;
		}
		else if (command.find("critical") || (command.find("urgent")))
		{
			tasks.push_front(task);
		}
		else if (command.find("add"))
		{
			tasks.push_back(task);
		}
		else if (command.find("remove"))
		{
			tasks.remove(task);
		}
		else if(command=="show")
		{
			cout << "List after insertions\n";
			for (auto i : tasks)
			{
				cout << i << " ";
			}
			cout << endl;
		}
		else
		{
			cout << "Invalid output" << endl;
		}
	}
	return 0;
}