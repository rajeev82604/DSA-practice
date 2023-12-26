//it stores all elements in a sorted order in log(n)
//functions : push,pop,top,size,empty
//it uses the concept of heap sort(heapify)
//it does not support front(imp)
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    priority_queue<int> pq;
    pq.push(2);pq.push(3);pq.push(4);pq.push(5);     

    while(!pq.empty())
    {
        cout<<pq.top() <<" ";   //5 4 3 2 (descending order)
        pq.pop();
    }
    cout<<endl;

    //for pairs
    priority_queue< pair<int,int> > pq2;
    pq2.push({2,3});pq2.push({1,3});pq2.push({6,4});pq2.push({8,5}); 
    //or you can do this:
    pq2.push(make_pair(7,8));
    //displaying 
    while(!pq2.empty())     // 8:5 7:8 6:4 2:3 1:3 
    {
        cout<<pq2.top().first <<":" <<pq2.top().second <<" ";
        pq2.pop();
    }
    cout<<endl;

    //trick to make it minimum priority queue(ascending order)
    priority_queue<int> pq3;
    pq3.push(-3);pq3.push(-2);pq3.push(-6);pq3.push(-1);
    while(!pq3.empty())
    {
        cout<< -1 * pq3.top() <<" ";       // 1 2 3 6 (ascending)
        pq3.pop();
    }
    cout<<endl;
    return 0;
}