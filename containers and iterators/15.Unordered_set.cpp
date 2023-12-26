//in orered set, we cannot say the order of unique elements
//the avg time complexity of unordered set = O(1) (CONSTANT)
//Worst time complexity = lenear O(size of set)
//So,always prefer unordered set over the set(ordered), unless you want it to be arranged in ascending
//or in some rare cases, if you get TLE, use normal set

#include<bits/stdc++.h>
using namespace std;

void display (auto s)
{
    for (auto i : s)
    {
        cout<<i <<" ";
    }
    cout<<endl;
}
int main()
{
    unordered_set<int> s;   //rest all the functions are same
    s.emplace(1);
    s.emplace(9);
    s.emplace(1);
    s.emplace(4);
    display(s);
    
    //count function
    cout<<s.count(1);
    
}