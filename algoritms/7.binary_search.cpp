//0(logn)
//only works on sorted arrays
//returns true or false depending upon whether it exists or not

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[7] = {1,1,4,6,7,7,8};
    int n = 7;
    cout<<binary_search(arr,arr+n,9); // 0

    return 0;
}