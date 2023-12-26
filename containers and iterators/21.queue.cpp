//it uses fifo (first in first out principle)
//functions: push,pop,front(not top),size, empty (all operations are 0(1) )
//only deletion is 0(n) as we have to manually delete the entire queue
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    //queue<int> q = {1,2,3,4}; this will give error (gpt:queue doesn't have a constructor that directly accepts an initializer list for initialization.)
    queue<int> q;
    q.push(1);q.push(2);q.push(3);q.push(4);
    
    if(!q.empty())
    {
        cout<<q.front() <<endl;
    }else cout<<"queue is empty";

    
    

    return 0;
}