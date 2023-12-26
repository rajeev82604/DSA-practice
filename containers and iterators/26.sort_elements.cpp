//0(nlogn)
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Enter the no.of elements : ";
    int n;
    cin>>n;
    multiset<int> ms;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ms.emplace(x);
    }
    //now print the multiset
    for(auto i : ms)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}