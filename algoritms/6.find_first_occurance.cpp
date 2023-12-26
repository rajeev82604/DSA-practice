//imp : itertor - begin() = index

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[7] = {3,4,2,1,4,7,3};
    int n=7;
    auto it = find(arr,arr+7,7); // returns an iterator pointing to that element 
    int index = it-arr;
    cout<<index<<endl;        // if no element is present, then it will point to end()
    if(index==n)
    {
        cout<<"element is not found";
    }

    //in case of vectors
    vector<int> vec = {3,4,2,1,4,6};
    auto i = find(vec.begin(),vec.end(),1);
    int index2 = i - vec.begin();

    if(i==vec.end())
    {
        cout<<"element does not exists " <<endl;
    }
    else{
        cout<<"element is present at : "<<index2 <<endl;
    }
    return 0;
}