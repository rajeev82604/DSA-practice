#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int num;
        cin >> num;

        int count = 0;
        int even = 0, odd = 0;

        // Starting from the smallest palindrome number with even digits.
        for (int i = 1; count < num; ++i) {
            // Construct the palindrome number.
            string s = to_string(i);
            string rev = s;
            reverse(rev.begin(), rev.end());
            s += rev.substr(s.size() - (i & 1)); // Append half (odd/even handling)

            int palindrome = stoi(s);
            if (isprime(palindrome)) {
                count++;
                if (s.size() % 2 == 0) {
                    even++;
                } else {
                    odd++;
                }
            }
        }

        cout << even << " " << odd << endl;
    }
    return 0;
}
