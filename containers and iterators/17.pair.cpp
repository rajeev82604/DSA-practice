//pair is a class, not a container
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    pair<int,string> p = {1,"radhe"};
    cout<<p.first <<" " <<p.second <<endl; 

    //nested pairs
    pair< pair<int,int> ,int > p1 = {{3,4},9} ;
    cout<<p1.first.second <<endl;    //4

    pair< pair<int,int>, pair<int,float> > p2 = { {1,2},{4,5.6} };
    cout<<p2.second.second <<endl;  //5.6

    //pair can be treated as a datatype
    vector< pair<int,int> > v;
    list< pair<int,int> > l;
    map< pair<int,int>,int > mp;
    set< pair<int,int> > s;

    // but unordered_map cannot store pairs
    // unordered_map< pair<int,int>, int > ump;  //this will give error

    return 0;
}