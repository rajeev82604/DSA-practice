#include<iostream>
using namespace std;

namespace krishna
{
    float radhe = 8.6;
}

int main()
{
    int radhe = 3;
    //float radhe = 9.8;   this will give error
    cout<<radhe <<endl;    //o/p = 3

    cout<<krishna::radhe   <<endl;
}