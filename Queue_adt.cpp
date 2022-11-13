// retrieval is done from the front
// rear is the last end
// inc front by 1 after retrieval
// when front and rear are pting to same loc there's only 1 element
// if front is -1 for queue(underflow)if front is greater than rear
// insert enqueue
// delete dequeue
#include <iostream>
using namespace std;
class queue
{
private:
	int st[5];
	int front;
	int rear;
	static int size;

public:
	queue()
	{
		size = 3;
		front = -1;
		rear = -1;
	}

	void enqueue(int a)
	{
		if (front == -1)
		{
			front++;
			rear++;
			st[rear] = a;
		}
		else
		{
			if (rear < size)
			{
				rear++;
				st[rear] = a;
			}
			else
			{
				cout << "Queue Overflow" << endl;
			}
		}
	}
	int dequeue()
	{
		if (front == -1 || front < rear)
		{

			cout << "Queue underflow";
		}
		else
		{
			int temp = st[front];
			front++;
			return temp;
		}
	}
};
int queue::size;
int main()
{
	queue q1;
	cout << "Putting elements to queue" << endl;
	q1.enqueue(10);
	q1.enqueue(20);
	cout << "Deleting elements from queue" << endl;
	cout << q1.dequeue() << endl;
	cout << q1.dequeue() << endl;
	return 0;
}
