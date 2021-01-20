#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node* prev;

    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insert_at_head(node* &head, int val)
{
    node* n = new node(val);
    n->next=head;
    if(head!=NULL)
        head->prev=n;
    head=n;
}

void insert_at_tail(node* &head, int val)
{
    node* n=new node(val);
    node* temp=head;
    if(head==NULL)
    {
        insert_at_head(head, val);
        return;
    }

    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=n;
    n->prev=temp;
}
void delete_at_head(node* &head)
{
    node* todelete=head;
    head=head->next;
    head->prev=NULL;

    delete(todelete);
}
void deletion(node* &head, int pos)
{
    node* temp=head;
    int count=1;
    if(pos==1)
    {
        delete_at_head(head);
        return;
    }
    while(temp!=NULL && count!=pos)
    {
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
        temp->next->prev=temp->prev;
    delete(temp);
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node* head=NULL;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_tail(head, 5);
    display(head);
    insert_at_head(head, 6);
    display(head);
    deletion(head, 2);
    deletion(head, 4);
    display(head);
    return 0;
}