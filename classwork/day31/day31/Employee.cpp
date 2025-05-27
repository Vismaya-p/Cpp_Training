#include"Employee.h"

Employee::Employee()
{
	e_name = "Hi";
	e_id = 10;
	e_address = "Address";
	e_phno = 1234;

}
void Employee::set_eId(int e_id)
{
	this->e_id = e_id;
}
void Employee::set_eName(string e_name)
{
	this->e_name = e_name;
}
void Employee::set_eAddress(string e_address)
{
	this->e_address = e_address;
}
void Employee::set_ePhno(int e_phno)
{
	this->e_phno = e_phno;
}
int Employee::get_eId()
{
	return this->e_id;
}
string Employee::get_eName()
{
	return this->e_name;
}
string Employee::get_eAddress()
{
	return this->e_address;
}
int Employee::get_ePhno()
{
	return this->e_phno;
}