#include <iostream>
using namespace std;
class hero {
    
    int age;
    public:
    hero(int m) //constructor cannot have a return type
    {
        cout<<count<<endl;
    }
    void setter(int x)
    {
        age=x;
    }
    int getter()
    {
        return age;
    }
    //static member function and data member
    static int count;
    static void test()
    {
        cout<<"test called";
    };

    void greet(void);
};
void hero::greet()
{
    cout<<"hello";
}
int hero:: count ; //default value is 0
int main()
{
    hero mahesh(2);
    hero::test();
    cout<< hero::count;
    
    
}