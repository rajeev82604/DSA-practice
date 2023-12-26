#include<iostream>
using namespace std;
#include<string>
int main()
{
    char s1[6] = "hello";
    char s2[6] = "world";
    char s3[12] = s1 + " " + s2;
    cout << s3;
}