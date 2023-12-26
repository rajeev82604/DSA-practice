//does not provides random access like vectors
//0(1)->constant time modifiers:push_front, push_back, pop_front, pop_back.
//o(n)->linear time : remove(value),erase (iterator position)->for range=[first it,last it).
#include<list>
#include<iostream>
using namespace std;
void display(list<int> l);
void insert(list<int> &l);

int main()
{
    list<int> l1;   //a linked list of size 0
    list<int> l2(4); //{0,0,0,0} list of size 4 default initialisation value is 0
    display(l2);
    display(l1);    //nothing will be displayed
    l2.pop_back();
    display(l2);    //{0,0,0,0,9}
    l2.remove(9);   //{0,0,0,0} removes the value given as argument

    insert_elements(l1); //user defined(below)
    //sorting the list:
    l1.sort();
    display(l1);

    //merging 2 lists
    l1.merge(l2);
    display(l1);

    //reversing the list
    l1.reverse();
}

void display(list<int> l)
{
    list<int> :: iterator i;
    for(i=l.begin();i!=l.end();i++)
    {
        cout<<*i <<" ";
    }
    cout<<endl;
}

void insert_elements(list<int> &l)
{
    cout<<"how many elements do you want to insert? : ";
    int num;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        int element;
        cin>>element;
        l.push_back(element);
    }

    
    
}