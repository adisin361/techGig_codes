#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

class Queue
{
    node* first;
    node* back;

    public:
    Queue()
    {
        first=NULL;
        back=NULL;
    }

    void push(int x)
    {
        node* n=new node(x);
        if(first==NULL)
        {
            first=n;
            back=n;
            return;
        }
        back->next=n;
        back=n;
    }

    void pop()
    {
        if(first==NULL)
        {
            cout<<"Queue Underflow!"<<endl;
            return;
        }
        node* todelete = first;
        first=first->next;
        delete todelete;
    }

    int peek()
    {
        if(first==NULL)
        {
            cout<<"No element in the queue"<<endl;
            return -1;
        }
        return first->data;
    }

    bool is_empty()
    {
        if(first==NULL)
            return true;
        return false;
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    q.pop();
    cout<<q.peek()<<endl;
    cout<<q.is_empty()<<endl;
    return 0;
}