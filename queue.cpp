#include <iostream>
using namespace std;

class queue
{
public:
    int front = -1, rear = -1, capacity = 10;
    int qarray[20];

    void enqueue(int n)
    {
        if (rear == capacity - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        else
        {
            qarray[++rear] = n;
        }
    }
    int dequeue()
    {
        if (front == rear)
        {
            cout << "Empty Queue " << endl;
            return -9999;
        }
        else
        {
            int a = qarray[front++];
            return a;
        }
    }
    int peek()
    {
        if (front == rear)
        {
            cout << "Empty Queue" << endl;
            return -9999;
        }
        else
            return qarray[front];
    }
    bool isEmpty()
    {
        return front == rear;
    }
    bool isFull()
    {
        return rear == capacity - 1;
    }
};

int main()
{
    queue q;
    q.dequeue();
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << q.peek() << endl;
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.isEmpty() << endl;
    cout << q.isFull() << endl;
}
