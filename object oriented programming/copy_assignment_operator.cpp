#include<iostream>
using namespace std;

class hero {
    public:
    int x;
};

int main()
{
    hero mahesh;
    mahesh.x=5;
    hero surya;
    surya.x=6;
    cout<<mahesh.x<<endl<<surya.x<<endl;
    mahesh=surya;
    cout<<endl<<mahesh.x<<endl<<surya.x<<endl;
}