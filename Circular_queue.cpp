#include <iostream>
using namespace std;
#define N 5
class queue
{
private:
    int st[5];
    int front;
    int rear;

public:
    queue()
    {
        front = -1;
        rear = -1;
    }
    void insert(int n)
    {
        if (front == -1)
            front = rear = 0;
        else
            rear = (rear + 1) % N;
        st[rear] = n;
    }
    void delet()
    {
        int n = st[front];
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % N;
        cout << "\ndeleted data is " << n;
    }
    void display()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "\nElements in a Circular queue" << endl;
        if (rear >= front)
        {
            for (int i = front; i <= rear; i++)
            {
                cout << st[i] << "  ";
            }
        }

        else
        {
            for (int i = front; i < N; i++)
            {
                cout << st[i] << "  ";
            }
            for (int i = 0; i <= rear; i++)
            {
                cout << st[i] << "  ";
            }
        }
    }
    int queuefull()
    {
        if (front == (rear + 1) % N)
            return 1;
        else
            return 0;
    }
    int queueEmpty()
    {
        if (front == -1)
            return 1;
        else
            return 0;
    }
};
int main()
{
    queue Q;
    Q.insert(10);
    Q.insert(20);
    Q.insert(30);
    Q.insert(40);
    Q.insert(50);
    Q.display();
    Q.delet();
    Q.delet();
    Q.delet();
    Q.display();
    return 0;
}
