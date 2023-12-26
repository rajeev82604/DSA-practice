//multimap is sorted and it can have multiple keys 

#include <bits/stdc++.h>
using namespace std;
void display(auto mmp);

int main() {
    
    multimap<int,int> mmp;
    //mmp[1]=3;     //this will give error here, but not in map or unordered map
    mmp.emplace(1,9);
    mmp.emplace(1,3);
    mmp.emplace(4,9);

    display(mmp);
    return 0;
}
void display(auto mmp)
{
    for(auto i : mmp)
    {
        cout<<i.first <<":" <<i.second << " ";      // 1:9 1:3 4:9 
    }
    cout<<endl;
}