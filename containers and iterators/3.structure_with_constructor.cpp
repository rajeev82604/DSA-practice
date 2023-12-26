#include<iostream>
using namespace std;

struct family
{
    string name;
    string colour;
    int age;

    family(string n, string c, int a):name(n),colour(c),age(a) //parameterised constructor with initialisation list
    {

    }
};

int main()
{
    family member1("radhe","aloukik shwet",16);
    cout<<member1.name<<endl<<member1.colour<<endl<<member1.age <<endl;
}
