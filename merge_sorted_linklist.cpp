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

void insert_at_head(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}

void insert_at_tail(node* &head, int val)
{
    node* n = new node(val);
    node* temp = head;
    if(head==NULL)
    {
        head=n;
        return;
    }
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=n;
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

node* merge(node* &head1, node* &head2)
{
    node* dummy_node=new node(-1);
    node* p1=head1;
    node* p2=head2;
    node* p3=dummy_node;
    while(p1!=NULL && p2!=NULL)
    {
        if(p1->data < p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }

        else
        {
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }

    while(p1!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }

    while(p2!=NULL)
    {
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }

    return dummy_node->next;
}

int main()
{
    node* head1 = NULL;
    node* head2 = NULL;

    insert_at_tail(head1, 1);
    insert_at_tail(head1, 4);
    insert_at_tail(head1, 5);
    insert_at_tail(head1, 7);

    insert_at_tail(head2, 2);
    insert_at_tail(head2, 3);
    insert_at_tail(head2, 6);

    display(head1);
    display(head2);

    node* newhead = merge(head1, head2);
    display(newhead);
    return 0;
}