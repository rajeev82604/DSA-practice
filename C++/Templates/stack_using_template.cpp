//generic stack
#include<iostream>
using namespace std;

template <class r,int size>
class gen_stack
{
    public:
    r arr[size];
    int top;
    gen_stack() : top(0) {}; //default constructor wwith initialisation list

    void push(r data)
    {
        if(top>=size)
        {
            cout<<"stack overflow";
        }
        else{
            arr[top] = data;
            top++;
        }
    }

    void pop()
    {
        if(top<0)
        {
            cout<<"stack underflow";
        }
        else{
            top--;
        }
    }

    void display()
    {
        for (int i = top-1; i >= 0; i--)
        {
            cout<<arr[i] <<" ";
        }
        
    }
};

int main()
{
    gen_stack<char,5> s1;
    s1.push('a');
    s1.push('b');
    s1.push('c');
    s1.push('d');
    s1.display();
    s1.pop();
    s1.pop();
    cout<<endl;
    s1.display();
    
    
            
}