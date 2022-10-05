#include <iostream>
using namespace std;
class Node
{
    int data;
    Node *next;

public:
    friend class Queue_Imp;
    Node()
    {
        next = NULL;
    }
    ~Node()
    {
        delete next;
    }
};
class Queue_Imp
{
private:
    Node *front;
    Node *rear;

public:
    Queue_Imp(/* args */);
    ~Queue_Imp();
    void Enqueue(int x);
    int Dequeue();
};

Queue_Imp::Queue_Imp(/* args */)
{
    cout << "Constructor called" << endl;
    front = NULL;
    rear = NULL;
}
Queue_Imp::~Queue_Imp()
{
    cout << "Destructor called" << endl;
    delete front;
    delete rear;
}
void Queue_Imp::Enqueue(int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;
    if (front == NULL)
    {
        front = rear = newNode;
    }
    rear->next = newNode;
    rear = newNode;
}
int Queue_Imp::Dequeue()
{
    int x;
    Node *temp = front;
    x = temp->data;
    if (front == NULL)
    {
        cout << "List is empty element cannot be deleted" << endl;
    }
    front = front->next;
    temp = NULL;
    delete temp;
    return x;
}
int main()
{
    Queue_Imp queue;
    queue.Enqueue(122);
    queue.Enqueue(12);
    queue.Enqueue(36);
    int x = queue.Dequeue();
    cout << x << endl;
    x = queue.Dequeue();
    cout << x << endl;
    x = queue.Dequeue();
    cout << x << endl;
    return 0;
}