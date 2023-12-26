//LIFO (last in first out principle)
//functions : push(or emplace),pop,top,size,empty
//for each loop or iterator approach will not work in stacks  as it's designed to be a container adapter that restricts direct access to its underlying container.
//there is no clear function, so we'll have to manually do the pop operation
#include <bits/stdc++.h>
using namespace std;
void display(stack<int> st);

int main() {
    stack<int> st;
    st.push(1); 
    st.push(2);st.push(3);st.push(4);
    cout<<st.top() <<endl;

    //for displaying its elements, we just have to pop, this also clear the stack
    while(!st.empty())
    {
        cout<<st.top() <<" ";   //push and pop does not return anything,so we just have to use top to display
        st.pop();
    }
    cout<<endl;

    //if stack is empty then top() will throw an error
    stack<int> s;
    //cout<<s.top(); //segmentation fault
    if(!s.empty())
    {
        cout<<s.top();      //so always checl whether the stack is empty or not
    }
    

    return 0;
}

