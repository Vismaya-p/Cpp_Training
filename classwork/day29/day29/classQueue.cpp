#include<iostream>
#define MAX 5
using namespace std;
class Queue
{
private:
	int front;
	int rear;
	int arr[MAX];
public:
	Queue()
	{
		front = 0;
		rear = 0;
	}
	int enqueue(int);
	int dequeue();
	void display();
};

int Queue::enqueue(int v)
{
	if (rear == MAX)
	{
		cout << "Queue is full" << endl;
		return EXIT_SUCCESS;
	}
	arr[rear] = v;
	rear++;

}
int Queue:: dequeue()
{
	if ((rear == front) || (front == MAX))
	{
		cout << "Queue is empty" << endl;
		rear = 0;
		front = 0;
		return EXIT_SUCCESS;
	}
	cout << arr[front] << " got dequeued" << endl;
	front++;
	return EXIT_SUCCESS;
}
void Queue::display()
{
	if ((rear == front) || (front == MAX))
	{
		cout << "Queue is empty" << endl;
		rear = 0;
		front = 0;
		return;
	}
	cout << "Queue Elements are:\n" << endl;
	for (int i = front;i < rear;i++)
	{
		cout << arr[i] << endl;
	}

}
int main()
{
	Queue q1;
	q1.enqueue(10);
	q1.enqueue(20);
	q1.enqueue(30);
	q1.enqueue(40);
	q1.enqueue(50);

	q1.display();
	q1.dequeue();
	q1.display();

	return 0;
}
