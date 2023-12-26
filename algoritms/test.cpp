#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 3, 4, 4, 6, 6, 6, 7, 9};
    int x = 6;

    auto it = lower_bound(v.begin(), v.end(), x);

    if (it == v.end() || *it != x) {
        cout << "element not found";
        return 0;
    }

    int first_index = it - v.begin();
    int last_index = (upper_bound(v.begin(), v.end(), x) - v.begin()) - 1;

    cout << "Frequency of " << x << " : " << last_index - first_index + 1;

    return 0;
}
