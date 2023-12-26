#include<iostream>

using namespace std;

class hero{
    int x;
    public:
    void setter(int y)
    {
        x=y;
    }
    int getter()
    {
        return x;
    }
};

int main ()
{
    hero surya;
    surya.setter(3);
    cout<<surya.getter();
}
