#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n);

int main(){

        int a[]={0,2,1,2,0};
        int n = 5;
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        for(int i = 0 ; i<n ; i++)
        {
            if(a[i]==0)
            {
                count0++;
            }
            else if(a[i]==1)
            {
                count1++;
            }
            else{
                count2++;
            }
        }
    //cout<<count0<<" "<<count1<<" "<<count2<<" " <<endl; //this is working correctly
        
        for (int i=0;i<count0;i++)
        {
            a[i]=0;
        }
        for (int i=count0;i<count0+count1;i++)
        {
            a[i]=1;
        }
        for (int i=count0+count1;i<n;i++)
        {
            a[i]=2;
        }
     display( a, n);
}

void display(int arr[],int n)
{
    for (int i=0;i<n;i++)
        {
            cout<<arr[i] << " ";
        }
    cout<<endl;
}