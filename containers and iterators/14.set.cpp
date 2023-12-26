//curly braces
//log(n)
#include <bits/stdc++.h>    //implementation of set is not so easy(avl/red-black tree), so generally it is not asked
using namespace std;
//given n elements, we can get the set of unique elements(in ascending order)
//we cannot access set elements by set[i], we have to use iterators

void display(set<int> &s)
{
    for(auto i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {
    
    set<int> s1;  //if we insert {3,1,2,2,7,1,3}
    int size;
    cout<<"enter the size: ";
    cin>>size;
    for (int i =0 ; i<size; i++)
    {
        int element;
        cin>>element;
        s1.insert(element);         //push_back() will not work
    }
    display(s1);    //o/p = 1 2 3 7

    //erase() function : syntax=> list_name.erase(iterator/value)
    s1.erase(s1.begin());   //erases the first element
    s1.erase(2);        // value to be erased. only first occurance will be seleted
    s1.erase(s1.begin(), s1.end());   //doubt
    display(s1);   

    //find function
    set<int> s = {1,3,3,4,8,6};
    auto i =  s.find(3);    //now i would be an iterator to 3
    cout<<*i;               //o/p = 3 ,but cout<<i; will give error
                            //if element is not found, then i will be s.end();
    
    //emplace function
    cout<<endl;
    s.emplace(9);
    for(set<int> :: iterator i = s.begin(); i!= s.end() ; i++ ) //another way to print elements of a set
    {
        cout<<*i <<" ";         //o/p = 1 3 4 6 8 9
    }
    cout<<endl;

    //set of a set
    cout<< s.size();       //o/p  = 6
    return 0;
}