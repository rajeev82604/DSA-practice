//given a sorted array, first the first index of x 
//lower_bound returns an iterator pointing to the first element which is equal to or greater than x
//if the element present at the returned iterator is equal to x, then we can find the index by it-begin()
//if it is not equal x, then element is not present int the array
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> v = {1,3,4,4,6,7,9};
    //the array has to be sorted otherwise we'll get wrong results

    //now suppose we want to find the first occurance of 1,then
    int x=8;
    auto it = lower_bound(v.begin(),v.end(),x) ;
    if(*it == x)
    {   
        cout<<"index = "<<it-v.begin() << endl;
    }
    else{
        cout<<"element is not present "<<endl;
    }
    return 0;
}