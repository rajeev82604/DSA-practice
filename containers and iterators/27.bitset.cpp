//it only stores 1 or 0
//they are mostly used in segment trees

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    bitset<5> bt;
    cout<<"input for bitset : " ; //11111
    cin>>bt;
    cout<<bt.all() <<endl; //if all are 1 then only it will return 1 even if there is a single 0,then 0 will be returned
    cout<<bt.any() <<endl; //even if there is a single 1=>1,else 0
    cout<<bt.count() <<endl; //counts the no.of 1s
    bt.flip(2); //element at 2nd index will be flipped(1=>0 or 0=>1)
    cout<<bt.none() <<endl; //if all are 0 then only it will return 1
    bt.set() ; //the entire bitset will be filled with 1
    bt.set(2); //makes the 2nd index 1
    bt.set(2,0); //makes the 2nd index 0
    bt.reset(); //sets all indices to 0
    bt.reset(3); //sets the 3rd index to 0
    cout<<bt.size(); //gives the size of bitset
    bt.test(3); //checks is 3rd index is 1 or not
    return 0;
}