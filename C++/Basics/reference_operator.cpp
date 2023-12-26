#include<iostream>
using namespace std;
void test(string &s2)
{
    s2= "world";
}
int main ()
{
    string s1= "hello";
    test (s1);
    cout << s1;
}