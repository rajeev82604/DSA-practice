//jo chaihiye usi ke hisab se comparator likho
//sorting an array in descending order
//it works with containers like arrays or other containers like vectors, lists,set, map, priority queue
//unordered_set,unordered_map, and their multi- variants do not support comparators because they use hashing and rely on hash functions for their operations.
#include <bits/stdc++.h>
using namespace std;

bool comp(int el1,int el2)
{
    if(el1>el2)
    {
        return true;
    }
    else{
        return false;
    }
}

int main() {
    
    int arr[] = {2,3,4,8,5,8,9,3};
    //we want {9 8 8 5 4 3 3 2}, this is true if el1>el2
    int n = 8;
    sort(arr,arr+n,comp);

    //displaying the array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i] <<" ";
    }
    cout<<endl;     //9 8 8 5 4 3 3 2 
    return 0;
}