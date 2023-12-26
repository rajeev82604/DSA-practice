#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextGreatest(int arr[], int n) {
        if (n <= 0) return;

        int max_from_right = arr[n - 1]; // Initialize the maximum element from the right

        arr[n - 1] = -1; // The last element will always have no greater element to its right

        for (int i = n - 2; i >= 0; i--) {
            int temp = arr[i]; // Store the current element
            arr[i] = max_from_right; // Replace with the greatest element from the right

            // Update the greatest element from the right if necessary
            if (temp > max_from_right) {
                max_from_right = temp;
            }
        }
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.nextGreatest(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
