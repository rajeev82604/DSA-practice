//given a sorted array, find the last occurance of x
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> v = {1,3,4,4,6,7,9};
    //the array has to be sorted otherwise we'll get wrong results

    //now suppose we want to find the last occurance of 4,then
    int x=-6;
    auto it = upper_bound(v.begin(),v.end(),x);
    int index = it-v.begin();
    if( v[index-1]==x )
    {
        cout<<"last occurance index : "<< index-1 <<endl;
    }
    else{
        cout<<"element not found "<<endl;
    }
    return 0;
}