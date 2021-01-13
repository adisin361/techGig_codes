//linked list in Cpp
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

void insertAtHead(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}

bool search(node* head, int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
            return true;
        temp=temp->next;
    }
    return false;
}
void deleteAtHead(node* &head)
{
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deleteNode(node* &head, int val)
{
    if(head==NULL)
        return;
    if(head->next==NULL)
    {
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

int main()
{
    node* head = NULL;
    insertAtTail(head, 56);
    insertAtTail(head, 67);
    insertAtTail(head, 45);
    insertAtTail(head, 87);
    insertAtHead(head, 99);
    deleteNode(head, 67);
    display(head);
    cout<<search(head, 56)<<endl;

    return 0;
}

