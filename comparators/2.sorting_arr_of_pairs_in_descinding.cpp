//suppose i want to sort the first element of pair to be ascending, but second element in descending
#include <bits/stdc++.h>
using namespace std;

bool compar(pair<int,int> el1, pair<int,int> el2)
{
    if(el1.first<el2.first) return true;
    if(el1.second>el2.second) return true;
    else return false;
}

int main() {
    
    pair<int,int> arr[] = {{4,3},{2,6},{1,9},{1,1}};
    //we want {{1,9},{1,1},{2,6},{4,3}}
    int n = 4;
    sort(arr,arr+n,compar);

    for(int i = 0;i<n;i++)
    {
        cout<<arr[i].first <<":"<<arr[i].second<<" ";
    }
    cout<<endl; //1:9 1:1 2:6 4:3 
    return 0;
}