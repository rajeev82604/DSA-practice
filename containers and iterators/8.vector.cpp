//the maximum size of array of int type in 10^6 inside int main() and 10^7 globally
//the maximum size of array of bool type in 10^7 inside int main() and 10^8 globally

//functions:
//1.push_back(<element>)
//2.pop_back(<element>)
//3.vectorName.size()
//4.emplace_back(<element>) => faster than push_back
//5.swap
//6. begin,end,rbegin,rend => same as in array container

#include <bits/stdc++.h>    //we can also use #include<vector>
using namespace std;

int main() {
    //empty vector
    vector<int> v;
    cout<< v.size() <<endl;  //size = 0
    v.push_back(1);     //adds the element at the end
    cout<< v.at(0)  <<endl;
    v.pop_back();       //removes the element at the end

    //vector with size
    vector<int> radhe(4,3);  //{3,3,3,3} 1st -> size, 2nd->element to fill
    //radhe.clear();  //clears all the elements

    //copying a vector
    vector<int> v2(radhe.begin(),radhe.end());  // [ ) --> end-1 tak jayega
    for(auto i:v2)
    {
        cout<<i << " ";
    }
    cout<<endl;
    
    //alternative way of copying
    vector <int> v3(v2);
     for(auto i:v3)
    {
        cout<<i << " ";
    }
    cout<<endl;
    
    //emplace_back() is faster than push_back()
    v3.emplace_back(9);
     for(auto i:v3)
    {
        cout<<i << " ";
    }
    cout<<endl;
    
    //swap, begin, end , rbegin, rend
    return 0;
}