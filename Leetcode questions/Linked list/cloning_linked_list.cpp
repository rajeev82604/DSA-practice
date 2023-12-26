#include<iostream>
using  namespace std;
//defing custom datatype for nodes of the linked list
struct ll
{
    int data;
    ll * next;
    ll() : data(0), next(nullptr)  {}
    ll(int x) : data(x), next(nullptr) {}
};

//cloning function
ll* clone(ll* head)
{
    ll* original = head;
    ll* newhead  = new ll();
    ll* cloneptr = newhead;
    while (original != nullptr)
    {
        cloneptr->data = original-> data;
        //jab tak original ptr last node tak nahi pahunch jaye, tab tak chalte raho : 
        if(original->next != nullptr)
        {
            //create a new node
            cloneptr->next = new ll();
            cloneptr = cloneptr -> next;
        }
        original = original -> next;
    }
    
    return newhead;
}

int main()
{
    //creating the individual nodes
    ll* node1 = new ll(9);
    ll* node2 =  new ll(8);
    ll* node3 =  new ll(7);
    ll* node4 =  new ll(6);

    //connecting the nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    ll* head =  node1;

    //printing the linked list
    ll* temp = head;
    while (temp != nullptr)
    {
        cout << temp-> data << "->";
        temp = temp->next;
    }
    cout << endl;

    //cloning the ll
    ll* newhead = clone (head);

    //printing the cloned linked list
     temp = newhead;
    while (temp != nullptr)
    {
        cout << temp-> data << "->";
        temp = temp->next;
    }
    cout << endl;
}