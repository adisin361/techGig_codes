#include<bits/stdc++.h>
using namespace std;
#define n 20

class Queue
{
    int *arr;
    int front;
    int back;

    public:
    Queue()
    {
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void Enqueue(int x)
    {
        if(back==n-1)
        {
            cout<<"Queue Overflow!";
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1)
            front++;
    }

    void Dequeue()
    {
        if(front==-1 || front>back)
        {
            cout<<"No element to dequeue"<<endl;
            return;
        }
        front++;
    }

    void Peek()
    {
        if(front==-1 || front>back)
        {
            cout<<"No element in queue"<<endl;
            return;
        }
        cout<<arr[front]<<endl;
        return;
    }

    bool Empty()
    {
        if(front==-1 || front>back)
            return true;
        return false;
    }
};

int main()
{
    Queue q;
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Peek();
    q.Dequeue();
    q.Peek();
    cout<<q.Empty();
    return 0;
}

