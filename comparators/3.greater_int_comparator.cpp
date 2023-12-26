//greater int is an inbuilt comparator which can only sort in descending order
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> v = {3,4,2,5,6};
    sort(v.begin(),v.end(),greater<int>());
    for(auto i : v)
    {
        cout<< i << " ";
    }cout<<endl;        //6 5 4 3 2
    return 0;
}