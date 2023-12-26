#include <bits/stdc++.h>
using namespace std;

void findMissing(int arr[], int n) {
       
       //finding d
       vector<int> vec;
       for (int i =0 ; i< n-1 ;i++ )
       {
            int d= arr[i+1]-arr[i];
            vec.push_back(d);
       }
       //finding the odd one out
       int x = vec[0]; int y;
       for (int i = 0; i < n-1; i++)
       {
            if( x!= vec[i])
            {
                
            }
       }
       
    }


int main() {
    
    int arr[6] = {2,4,8,10,12,14};
    findMissing(arr,6);
    return 0;
}