//retrieval is done from the front
//rear is the last end
//inc front by 1 after retrieval
//when front and rear are pting to same loc there's only 1 element
//if front is -1 for queue(underflow)if front is greater than rear
//insert enqueue
//delete dequeue
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
		size=3;
		front=-1;
		rear=-1;
	}
	
	void enqueue(int a)
	{
		rear++;
		if(rear<size)
		{
			st[rear]=a;
		}
		else
			cout<<"Queue Overflow";
		
	}
	int dequeue()
	{
		if(front ==-1||front<rear)
		{
			int temp =st[top];
			top--;
			return temp;
			
		}
		else
			cout<<"Queue underflow";
	}
};
int queue:: size;
int main()
{
	queue q1;
	cout<<"Putting elements to queue";
	q1.enqueue(10);
	q1.enqueue(20);
	cout<<"Deleting elements from queue";
	cout<<q1.dequeue()<<endl;
	cout<<q1.dequeue()<<endl;
	return 0;
}
