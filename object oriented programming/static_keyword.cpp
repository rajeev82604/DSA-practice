#include<iostream>
using namespace std;

class hero{
    public:
    int x;
    
    static int count;
    hero()      //everytime a new object is formed, default constructor hero is called and count will be incremented by 1
    {
        count++;
    }
    static int add(int a,int b){
        return a+b;
    }
};

int hero :: count = 0 ; //the default value is zero

int main()
{
    cout<<  hero::count     << endl;
    cout<<  hero::add(3,3)  << endl;
    hero mahesh,suresh;
    cout<<  hero::count     << endl;
    cout<<  hero::add(3,3)  << endl;
}