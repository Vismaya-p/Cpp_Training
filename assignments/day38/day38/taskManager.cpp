#include<iostream>
#include<string>
#include<list>
using namespace std;
int main()
{
	list<string>tasks;
	string task;
	cout << "\nEnter Command(add/urgent/remove/show/exit): ";
	getline(cin, task);
	while (true)
	{
		if (task == "exit")
		{
			break;
		}
		else if (task.find("critical") || (task.find("urgent")))
		{
			tasks.push_front(task);
		}
		else if (task.find("add"))
		{
			tasks.push_back(task);
		}
		else if (task.find("remove"))
		{
			tasks.remove(task);
		}
		else
		{
			cout << "Invalid output" << endl;
		}
		cout << "List after insertions\n";
		for (auto i : tasks)
		{
			cout << task << " ";
		}
		return 0;
	}
}