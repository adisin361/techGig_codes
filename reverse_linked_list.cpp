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
//iterative method
node* reverse(node* &head)
{
    node* prevPtr=NULL;
    node* currPtr=head;
    node* nextPtr;

    while(currPtr!=NULL)
    {
        nextPtr=currPtr->next;
        currPtr->next=prevPtr;

        prevPtr=currPtr;
        currPtr=nextPtr;
    }
    return prevPtr;
}

//recursive method
node* revRecur(node* &head)
{
    if(head==NULL || head->next==NULL)
        return head;
    node* newnode=revRecur(head->next);
    head->next->next=head;
    head->next=NULL;
    return newnode;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void insertAtTail(node* &head, int val)
{ 
    node* n=new node(val);
    node* temp=head;
    if(head==NULL)
    {
        head=n;
        return; 
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}


int main()
{
    node* head=NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    // node* newhead=reverse(head);
    node* newhead2=revRecur(head);
    // display(newhead);
    display(newhead2);
    return 0;
}