#include<iostream>
using namespace std;

struct family
{
    string name;
    string colour;
    int age;
};

int main()
{
    family member1;
    member1.name = "krishna";
    member1.colour = "aloukik blue";
    member1.age = 16;
    cout<<member1.name<<endl<<member1.colour<<endl<<member1.age <<endl;
}