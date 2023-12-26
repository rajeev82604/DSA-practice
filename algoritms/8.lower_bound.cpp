//only works on sorted arrays
//returns an iterator pointing to the first element which is not less than x
//binary search is implemented inside this function
//0(logn)
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> v = {2,4,4,6,6,7,9};
    auto it = lower_bound(v.begin(),v.end(),6);
    cout<<"index : "<<it-v.begin() <<endl;
    
    //if element is not present
    cout<<lower_bound(v.begin(),v.end(),8)-v.begin() <<endl; //because 9(index 6) is only greater than or equal to 7

    //if no element is not less than x, then it points to v.end() position
    cout<<lower_bound(v.begin(),v.end(),10)-v.begin() <<endl; //(index 7) is out of lenght of vector


    return 0;
}