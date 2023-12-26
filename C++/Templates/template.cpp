#include<iostream>
using namespace std;

template < class r >        //
class hero{

    public:
    r age;
    string name;
    void set_age(r a)  //wherever you need the data type to change, use r as the data type
    {
        this->age = a;
    }
    void set_name(string s)
    {
        this->name = s;
    }

};

int main()
{
    hero <int> maheshbabu; 
    hero <float> surya;

    maheshbabu.age = 45;
    surya.age = 45.5;
    float age_sum = maheshbabu.age + surya.age;
    cout<<age_sum <<endl;
}