#include <iostream>
using namespace std;

int k = 5;
int arr[5];
int pointer = -1;

void push(int n)
{
    if (pointer == k - 1)
    {
        cout << "Stack Overflow" << endl;
        return;
    }
    else
    {
        arr[++pointer] = n;
    }
}

int pop()
{
    if (pointer < 0)
    {
        cout << "Stack Underflow" << endl;
        return -99999;
    }
    else
    {
        int a = arr[pointer--];
        return a;
    }
}

int top()
{
    if (pointer < 0)
    {
        cout << "Stack Underflow" << endl;
        return -99999;
    }
    else
    {
        return arr[pointer];
    }
}

bool isEmpty()
{
    if (pointer < 0)
    {
        return true;
    }
    else
        return false;
}

bool isFull()
{
    if (pointer == k - 1)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    pop();
    push(10);
    push(20);
    push(30);
    cout << "Top = " << top() << endl;
    push(40);
    push(50);
    push(60);
    cout << "Popped = " << pop() << endl;
    cout << "Popped = " << pop() << endl;
    cout << "IsEmpty = " << isEmpty() << endl;
    cout << "isFull = " << isFull() << endl;
}