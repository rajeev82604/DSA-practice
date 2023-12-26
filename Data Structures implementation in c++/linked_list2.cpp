#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int value): data(value), next(nullptr) {};
};

node* head;
node* temp; //we must write them on separate lines, otherwise it will give error

void insert_at_head(node* &head, int data)
{
    node* newnode = new node(data);
    newnode->next = head;
    head = newnode;
}

void print_data(node* head)
{
    temp = head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    node* firstnode = new node(1);
    head = firstnode;
    insert_at_head(head,2);
    insert_at_head(head,3);
    insert_at_head(head,4);
    print_data(head);
}