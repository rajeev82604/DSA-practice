//fill(), at() function in array container

#include <bits/stdc++.h>
using namespace std;
int main() {
    
    array<int,5> radhe;
    radhe.fill(1);
    for (int i = 0; i<5 ; i++)
    {
        cout<< radhe.at(i) << " ";     //it will the array 1 at each index
    }
}