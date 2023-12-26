//reverse(start iterator,end iterator) (]=>(goes till end-1)
#include <bits/stdc++.h>
using namespace std;
void display(auto container);

int main() {
    vector<int> v = {3,5,3,2,56,6};
    reverse(v.begin(),v.end());         // 6 56 2 3 5 3 
    display(v);
    return 0;
}

void display(auto container)
{
    for(auto i: container)
    {
        cout<<i <<" ";
    }
    cout<<endl;
}