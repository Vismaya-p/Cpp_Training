#include <iostream>
#include <cstdlib>

using namespace std;
typedef struct node
{
	int data;
	struct node* next;
}NODE;

NODE* createNode();
NODE* addNodeBeg(NODE*, NODE*);
NODE* addNodeEnd(NODE*, NODE*);
int dispList(NODE*);
int dispMenu();
void freeNodes(NODE*);
void searchNode(NODE*, int);
void updateNode(NODE*, int, int);
NODE* deleteNode(NODE*, int);

int main()
{
	NODE* head = NULL;
	int ch = 1;
	int val, newVal;
	while (ch)
	{
		switch (dispMenu())
		{
		case 1:

			head = addNodeBeg(head, createNode());
			break;
		case 2:
			head = addNodeEnd(head, createNode());
			break;
		case 3:
			dispList(head);
			break;
		case 4:
			cout << "Enter the value to search:";
			cin >> val;
			searchNode(head, val);
			break;
		case 5:
			cout << "enter the value to update: ";
			cin >> val;
			cout << "enter the new value: ";
			cin >> newVal;
			//updateNode(head, val,newVal);
			break;
		case 6:
			cout << "enter value to delete: ";
			cin >> val;
			head = deleteNode(head, val);
			break;
		case 7:
			ch = 0;
			break;
		default:
			cout << "Something went wrong" << endl;
		}
	}
	freeNodes(head); //*very improtant Memory Leaks
	cout << "Exiting program...." << endl;
	return 0;
}


int dispMenu()
{
	int ch;
	cout << "\tPress,\n\t1. Add Node Begining\n\t2. Add Node End\n";
	cout << "\t3. Display List\n\t4.search\n\t5.update\n\t6.Delete\n\t7. Exit..\n\tChoice: ";
	cin >> ch;
	return ch;
}

int dispList(NODE* head)
{
	cout << "\tList is " << endl;
	cout << "\t";
	while (head != NULL)
	{
		cout << head->data << " -> ";
		head = head->next;
	}
	cout << "NULL" << endl;
	return EXIT_SUCCESS;
}

NODE* addNodeEnd(NODE* head, NODE* nn)
{
	NODE* temp = head;
	if (head == NULL) {
		head = nn;
		return head;
	}
	while (head->next != NULL)
		head = head->next;
	head->next = nn;
	head = temp;
	return head;
}

NODE* addNodeBeg(NODE* head, NODE* nn)
{
	if (head == NULL)
	{
		head = nn;
		return head;
	}
	nn->next = head;
	head = nn;
	return head;
}

NODE* createNode()
{
	NODE* nn = (NODE*)malloc(sizeof(NODE));
	cout << "Enter the value of node: ";
	cin >> nn->data;
	nn->next = NULL;
	return nn;
}


void searchNode(NODE* head, int num)
{
	int pos = 1;
	if (head == NULL)
	{
		cout << "list is empty";
	}
	else 
	{
		while (head != NULL)
		{
			if (head->data == num)
			{
				cout << "value" << num << "found at pos " << pos << endl;
				return;
			}
			head = head->next;
			pos++;
		}
		cout << "value" << num << "not found in the list" << endl;
	}
}
NODE* deleteNode(NODE* head, int num)
{
NODE* temp = head;
NODE* temp2 = NULL;
if (head == NULL)
{
	cout << num << " no element" << endl;
	return head;
}
else
{
	while (temp != NULL)
	{
		if (temp->data != num)
		{
			temp2 = temp;
			temp = temp->next;
		}
		else
		{
			if (temp2 == NULL)
			{
				head = temp->next;
			}
			else
			{
				temp2->next = temp->next;
			}
			free(temp);
			return head;
		}

	}
	cout << num << "is not found" << endl;
}
return head;

}
void updateNode(NODE* head, int oldVal, int newVal)
{
	while (head != NULL)
	{
		if (head->data == oldVal)
		{
			head->data == newVal;
			cout << "updated" << oldVal << "to " << newVal << endl;
			return;
		}
		head = head->next;
	}
	cout << "value" << oldVal << "not found to update.\n";

}
void freeNodes(NODE* head)
{
	NODE* temp = head;
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}