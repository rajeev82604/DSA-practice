//generic linked list
#include<iostream>
using namespace std;

template<class r>
class node
{
    public:
    r data;
    node* next;
    node(r value): data(value), next(nullptr) {}; //default constructor wwith initialisation list
};


template<class r>
void insert_at_head(node<r>* &head, r data) //reference operator is important, otherwise a local head will be made and the changes made to this head will not be globally available
{
    node<r>* newnode = new node<r>(data); //first create a new node
    newnode->next = head;                  //point it to the already created node
    head = newnode;                 //now make this new node the head (in this way, it behaves just like a stack)
}

template<class r>
void print_data(node<r>* head)
{
    node<r>*temp = head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    node<char>* firstnode = new node<char>('j'); //you have to create the first node in main()
    node<char>* head;
    head = firstnode;      // make this node the head 
    insert_at_head(head,'a');
    insert_at_head(head,'b');
    insert_at_head(head,'c');
    print_data(head);
}