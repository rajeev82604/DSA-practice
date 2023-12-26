//gives the sum of elements in a range
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> v = {2,3,1,5,2,4};
    cout << accumulate(v.begin(),v.end(),0); //here the last argument is the initial sum
    return 0;
}