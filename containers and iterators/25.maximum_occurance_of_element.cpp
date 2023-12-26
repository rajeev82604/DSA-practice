#include <bits/stdc++.h>
using namespace std;
void take_input(int arr[],int n);
//out of n elements, find the element that occurs maximum no.of times

int main() {
    
    cout<<"Enter the size of array : ";
    int n;
    cin>>n;
    int arr[n];
    take_input(arr,n);
    map<int,int> mp;
    int max = 0;
    for(int i = 0;i<n;i++ )
    {
        int x;
        x=arr[i];
        mp[x]=mp[x]+1; //or mp[x]++
        if(mp[x]>mp[max])
        {
            max=x;
        }
    }
    cout<<"Element with maximum occurance is : "<< max <<endl;

    return 0;
}

void take_input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the "<<i+1<<" th element : ";
        int x;
        cin>>x;
        arr[i]=x;
    }
    
}