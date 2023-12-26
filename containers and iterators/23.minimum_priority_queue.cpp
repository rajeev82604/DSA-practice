//stores elements in ascending order

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    priority_queue< int,vector<int>,greater<int> > pq;
    pq.push(4);
    pq.push(-1);
    pq.push(2);
    pq.push(6);
    pq.push(0);

    while(!pq.empty())
    {
        cout<<pq.top() <<" ";   // -1 0 2 4 6 
        pq.pop();
    }
    cout<<endl;
    return 0;
}