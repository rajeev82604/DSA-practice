//Multiset stores all the elements in a sorted manner
//log(n)
#include <bits/stdc++.h>
using namespace std;

void display (auto s)
{
    for (auto i : s)
    {
        cout<<i <<" ";
    }
    cout<<endl;
}
int main() {
    multiset<int>  ms;
    ms.insert(3);
    ms.insert(3);
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);

    display(ms);    //1 1 2 3 3 
    cout<<ms.count(1) <<endl; //counts the no.of times 1 occurs
    // ms.erase(2); //deletes all the instances of 2
    // ms.find(1);  //returns an iterator pointing to the first instance of 1

    //rest all functions are same
    multiset<int> ms2 = {2,2,1,4,5,3,1};
    ms.erase(ms2.find(1));
    display(ms2);           // 1 2 2 3 4 5 
    return 0;
}