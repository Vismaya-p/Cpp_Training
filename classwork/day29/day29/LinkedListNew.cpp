//new node creation
#include<iostream>
using namespace std;
typedef struct node
{
	int data;
	struct node* next;
}NODE;

int main()
{
	NODE* nn = NULL;
	NODE* head = NULL;
	NODE* temp = NULL;
	int ch = 1;
	while (ch)
	{
		nn = (NODE*)malloc(sizeof(NODE));//create mem nodes
		cout << "Enter value of node: ";
		cin >> nn->data;//initialize values
		nn->next = NULL;//initaialize values

		if (head == NULL)
		{
			//empty list
			head = nn;//first node
			temp = nn;
		}
		else
		{
			head->next = nn;
			head = head->next;//make a relationship
		}
		cout << "Do you want ot add a new node(0/1): ";
		cin >> ch;
	}
	head = temp;//head is again pointed to BA of list
	dispList(head);
	return 0;
}
	void dispList(NODE * head)
	{
		cout << "List is \n" << endl;
		while (head != NULL)
		{
			cout << head->data << " -> ";
			head = head->next;
		}
		cout << "NULL" << endl;
	}
	
