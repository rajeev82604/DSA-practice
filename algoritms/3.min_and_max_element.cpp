//*max_element(start iterator,end iterator) => (]
#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {4,5,2,3,54,6};
    cout << *max_element(v.begin(),v.end()) <<endl;
    cout << *min_element(v.begin(),v.end()) <<endl;

    return 0;
}