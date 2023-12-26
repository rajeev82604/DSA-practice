//Maps are just like dictionary (key,value pair)
//It also stores everything in a sorted way (alphabetically)
//only unique elements are stored(imp)
//log(n)
//we may call it as a collections of pairs(more in 17.pair.cpp file)
#include <bits/stdc++.h>
using namespace std;
void display(auto m);

int main() {
    map<string,int> radhe;
    radhe["bcd"] = 30;
    radhe["abc"] = 30;
    radhe["efg"] = 40;
    display(radhe);     //abc:30 bcd:30 efg:40 (alphabetically)

    map<int,int> mp2 = {{3,-3},{2,-2},{-1,1},{3,9}}; //for 3 there are 2 values
    // mp2[3] = -3;
    // mp2[2] = -2;
    // mp2[-1] = 1;
    display(mp2);    // -1:1 2:-2 3:9  , not 3:-1, because it overwrites it

    mp2.emplace(5,6);
    display(mp2);   //-1:1 2:-2 3:9 5:6
    
    mp2.erase(mp2.begin());
    display(mp2);       //2:-2 3:-3 5:6 

    //checking if the map is empty or not
    if(mp2.empty())
        cout<<"true";
    else
        cout<<"false";
    return 0;

    //another way to display the elements of map
    cout<<endl;
    for(auto i = mp2.begin(); i!= mp2.end(); i++)
    {
        cout<< i->first <<" " <<i->second << " ";   //arrow operator must be used
    }
    cout<<endl;
}

void display(auto m)
{
    for (auto i : m)
    {
        cout<<i.first<<":"<<i.second <<" "; //just printing i will give error
    }
    cout<<endl;
}