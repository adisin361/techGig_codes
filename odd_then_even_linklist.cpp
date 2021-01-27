#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert_at_tail(node* &head, int val)
{
    node* temp = head;
    node* n = new node(val);
    if(head == NULL)
    {
        head = n;
        return;
    }
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next = n;
    n->next = NULL;
}

void insert_at_head(node* &head, int val)
{
    node* n = new node(val);
    n->next = head;
    head = n;
}

void odd_then_even(node* &head)
{
    node* odd = head; 
    node* even = head->next;
    node* even_first = even;
    while(odd->next != NULL && even->next!=NULL)
    {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }
    odd->next = even_first;
    if(odd->next != NULL)
        even->next = NULL;
}

void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head = NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0; i<6; i++)
        insert_at_tail(head, arr[i]);
    display(head);
    odd_then_even(head);
    display(head);
    return 0;
}