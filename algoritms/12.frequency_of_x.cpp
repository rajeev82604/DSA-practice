//given an sorted array, tell the number of times x appear sin the array
// frequency = (last occurance-first occurance)+1
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> v = {1,3,4,4,6,6,6,7,9};
    int x = 0;
    auto it = lower_bound(v.begin(),v.end(),x);
    if(*it!=x) {cout<<"element not found";return 0;}
    
    int first_index =it-v.begin();
    int last_index = (upper_bound(v.begin(), v.end(), x) - v.begin()) - 1 ;
    cout<<"frequency of x : "<<last_index-first_index+1 <<endl;
    return 0;
}