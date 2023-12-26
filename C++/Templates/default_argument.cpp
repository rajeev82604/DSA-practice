#include<iostream>
using namespace std;

template<class r1 = int, class r2 = float>

class hero{
    
    public:
    r1 age;
    r2 money;

    hero(r1 a,r2 m)
    {
        this->age = a;
        this->money = m;
    }
};

int main()
{
    hero < > maheshbabu(45.9,500);
    hero < > surya(46,400.600);
    cout<< maheshbabu.age + surya.age <<endl;
    cout<< maheshbabu.money + surya.money <<endl;
}