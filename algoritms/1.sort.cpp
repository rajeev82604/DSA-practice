//0(nlogn)
#include <bits/stdc++.h>
using namespace std;
void display(auto container);

int main() {
    
    //sorting an array
    int arr[5] = {3,1,2,5,3};
    sort(arr,arr+5);            //it takes 2 pointers, this function cannot be used if we use #include<iostream>
    
    for(int i=0;i<5;i++)
    {
        cout<<arr[i] << " ";
    }
    cout<<endl;
     
    //vectors
    vector<int> v = {4,9,5,8,1};
    sort(v.begin()+1,v.end()-1);  //4 5 8 9 1 here only the middle portion is sorted
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