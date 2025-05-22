//constructor
#include<iostream>
using namespace std;
class Employee
{
private:
	int e_id;
	string e_name;
public:
	Employee()
	{
		cout << "Constructor got called:" << endl;
		e_id = 0;
		e_name = "";
	}
	/*void disp()
	{
		cout << "display func got called";
		cout << e_id << "\t" << e_name << endl;;
	}*/
	Employee(int id, string name)
	{
		cout << "Parameterized Constructor got called" << endl;
		e_id = id;
		e_name = name;
	}
	void disp();
	//destructor used to cleanup the memory
	~Employee()
	{
		cout << "Destructor getting called" << endl;
	}
};
void Employee::disp()
{
	cout << "display func got called"<<endl;
	cout << e_id << "\t" << e_name << endl;;
}
int main()
{
	Employee e;
	e.disp();

	Employee e1(101,"Vis");
	e1.disp();

	Employee e2(e1);//default copy constructor is invoked
	cout << "e2" << endl;
	e2.disp();

	Employee e3 = e1;//default copy constructor is called
	cout << "e3" << endl;
	e3.disp();
	return 0;
}