#include <vector>   //imp : we can also use bits/stdc++.h
#include<iostream>
using namespace std;
//insert function

void display(vector<int> &vec)
{

    for (auto i : vec)
    {
       cout<<i <<" ";
    }
    cout<<endl;
    
}
int main() {
    vector<int> vec;
    vec.push_back(4); vec.push_back(5); vec.push_back(6); vec.push_back(7);
    vec.insert(vec.begin(),5); //1st-> iterator , 2nd->number to be inserted
    display(vec);       //it inserts before the element to which the iterator is pointing to
    vec.insert(vec.end()-1,3,5);//insert 5 3times
    display(vec);

    //declaring vectors:
    vector<int> v1 (4);
    display(v1);           // {0,0,0,0}

    vector<int> v2 (5,9);   // {9,9,9,9,9} 1st->length , 2nd->element to be filled with
    display(v2);

    return 0;
}