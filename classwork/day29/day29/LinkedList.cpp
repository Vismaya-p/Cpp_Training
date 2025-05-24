#include<iostream>
using namespace std;
struct node
{
	int v;
	struct node* ptr;//self referencing ptr(typeof ptr is struct node)
};
int main()
{
	struct node n1, n2, n3,n4,n5,n6;
	cout << sizeof(n1) << "\nAddress of n1:" << (unsigned long int) & n1<<endl;
	cout << sizeof(n2) << "\nAddress of n1:" << (unsigned long int) & n2 << endl;
	cout << sizeof(n3) << "\nAddress of n1:" << (unsigned long int) & n3 << endl;

	//step2 intiliazing the values to all nodes
	n1.v = 10;
	n1.ptr = NULL;

	n2.v = 20;
	n2.ptr = NULL;

	n3.v = 30;
	n3.ptr = NULL;

	n4.v = 40;
	n4.ptr = NULL;

	n5.v = 50;
	n5.ptr = NULL;

	n6.v = 60;
	n6.ptr = NULL;


	cout << "n1 value: " << n1.v << "\t ptr:" << (unsigned long int) n1.ptr << endl;
	cout << "n2 value: " << n2.v << "\t ptr:" << (unsigned long int)n2.ptr << endl;
	cout << "n3 value: " << n3.v << "\t ptr:" << (unsigned long int)n3.ptr << endl;

	//step 3 make relationship
	
	cout << "After making relationship" << endl;
	cout << "n1 value: " << n1.v << "\t ptr:" << (unsigned long int) n1.ptr << endl;
	cout << "n2 value: " << n2.v << "\t ptr:" << (unsigned long int)n2.ptr << endl;
	cout << "n3 value: " << n3.v << "\t ptr:" << (unsigned long int)n3.ptr << endl;
	

	n2.ptr = &n3;
	//step 4 traversing in ptr
	struct node *head = &n1;//n1-base address
/*
	cout << n1.v<<endl;
	cout << head->v << endl;
	//head = &n2;
	head = head->ptr;
	cout << n2.v << endl;
	cout << head->v << endl;
	//head=&n3;
	head = head->ptr;
	cout << head->v << endl;
*/
	struct node* temp = head;

	n1.ptr = &n4;
	n4.ptr = &n2;
	n5.ptr = &n1;
	head = &n1;
	temp = head;
	head = &n5;
	head->ptr = temp;
	temp = head;
	while (temp->ptr!=NULL)
	{
		temp = temp->ptr;

	}
	temp->ptr = &n6;

	while (head!=NULL)
	{
		cout << head->v << "->";//linkedlist representation
		head = head->ptr;
	}
	cout << "NULL" << endl;
	

	return 0;

}