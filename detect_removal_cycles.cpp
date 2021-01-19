#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void add_at_tail(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        head = n;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while(temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void make_cycle(node *&head, int pos)
{
    node *temp = head;
    node *startNode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
            startNode = temp;
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

bool detect_cycle(node *&head)
{
    node *fast;
    node *slow;
    while (fast != NULL && fast->next != NULL)
    {
        fast=fast->next->next;
        slow=slow->next;

        if(fast==slow)
            return true;
    }
    return false;
}

void remove_cycles(node* &head)
{
    node* fast=head;
    node* slow=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
    
    fast=head;
    while(slow->next != fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next = NULL;
}

int main()
{
    node* head=NULL;
    add_at_tail(head, 1);
    add_at_tail(head, 2);
    add_at_tail(head, 3);
    add_at_tail(head, 4);
    add_at_tail(head, 5);
    add_at_tail(head, 6);
    add_at_tail(head, 7);
    add_at_tail(head, 8);
    add_at_tail(head, 9);
    make_cycle(head, 4);
    // display(head);
    cout<<detect_cycle(head)<<endl;
    remove_cycles(head);
    display(head);
    return 0;
}