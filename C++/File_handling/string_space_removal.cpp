#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str = "Hello   World!   This   is    a   test."; // Sample string with extra spaces

    str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());

    cout << "String after removing spaces: " << str << endl;

    return 0;
}
