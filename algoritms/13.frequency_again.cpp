//frequency = upperbound-lowerbound
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,3,4,4,6,7,9};
    int x;
    cout<<"enter the element to search : ";
    cin>>x;
    int count = upper_bound(v.begin(),v.end(),x)-lower_bound(v.begin(),v.end(),x);
    cout<<count<<endl;
    if(count==0)
    {
        cout<<"element not found";
    }
    return 0;
}