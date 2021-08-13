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
        next = NULL;
    }
};

void print_in_reverse(node* head)
{
    if(head==NULL)
        return;
    print_in_reverse(head->next);
    cout<<head->data<<" ";
}

void traverse(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" -> ";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

node* create_node(int data)
{
    node* newNode = new node(data);
    newNode->next = NULL;
    return newNode;
}

int main()
{
    node* head = create_node(1);
    node* second = create_node(2);
    node* third = create_node(3);
    node* fourth = create_node(4);
    node* fifth = create_node(5);
    
    head -> next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    traverse(head);
    print_in_reverse(head);
    return 0;
}