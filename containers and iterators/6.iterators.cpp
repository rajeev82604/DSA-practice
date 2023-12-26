//doubt (notes in notion app)
// iterators - 
// 1. begin()  : points to the first element
// 2. rbegin() : points to the last element (ulta kaam karta hai)
// 3. rend()   : points to one index before the first element (ulta kaam karta hai) 
// 4. end()    : points to one index after the last element   

// auto : it will automatically detect the datatype of the element

#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    array<int,5> arr = {1,2,3,4,5} ;

    for(auto i = arr.begin(); i!=arr.end() ; i++) //here i is a iterator
    {
        cout<<*i<< " ";     //o/p = 1 2 3 4 5   //dereferencing the iterator
    }
    cout<<endl;
    for (auto i = arr.rbegin(); i!= arr.rend(); i++)    //doubt
    {
        cout<<*i<< " ";     //o/p = 5 4 3 2 1
    }
    cout<< endl;
     for (auto i = arr.end() - 1; i >= arr.begin(); i--) {
        cout << *i << " ";      //o/p = 5 4 3 2 1
    }
    cout << endl;


    //for each loop
    for (auto i : arr)  //here i not a pointer, but it is the element itself
    {
        cout<<i <<" ";
    }
    cout << endl;

    string s = "radhekrishna";
    for(auto it : s)
    {
        cout<< it <<" ";
    }
    cout << endl;
    return 0;
}