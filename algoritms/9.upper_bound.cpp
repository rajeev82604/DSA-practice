//lower bound => greater than or equal to the given element
//upper bound => only greater than the given element

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> v = {2,4,4,6,6,7,9};
    auto it = upper_bound(v.begin(),v.end(),6);
    cout<<"index : "<<it-v.begin() <<endl;      //5(element 7)
    
    //if element is not present
    cout<<upper_bound(v.begin(),v.end(),8)-v.begin() <<endl; //because 9(index 6) is only greater than 7

    //if no element is just greater than x, then it points to v.end() position
    cout<<lower_bound(v.begin(),v.end(),10)-v.begin() <<endl; //(index 7) is out of lenght of vector

    return 0;
}