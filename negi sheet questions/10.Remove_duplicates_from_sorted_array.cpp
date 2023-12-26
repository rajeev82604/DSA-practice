//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
//array is sorted(non descinding=>may contain duplicate elements)
class Solution{
public:
    //to do:
    //1. identify the distinct element and their count x(total no.of distinct elements)
    //2. sort those distinct elements(let there are x distinct elements)
    //3.fill the first x position of the array with what you got in step 2
    //4. return x
    int remove_duplicate(int a[],int n){
        
        int left,right = 1;
        for(right=1; right<n ; right++)
        {
            if( a[right] != a[right-1])//this means a unique element is found at index = right
            {
                a[left] = a[right];
                left++;
            }
        }
        return left;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends