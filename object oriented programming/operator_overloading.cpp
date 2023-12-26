#include<iostream>
using namespace std;

class a
{
    public:
    int x;

    //operator overloading
    void operator+ (a &b) //we have overloaded + to do subtraction
    {
        int obj1= this->x;
        int obj2= b.x;
        cout << obj1-obj2;
    }
    void operator- (a &b) //writing this inside parenthesis is important
    {
        cout<<endl<< "Hello";
    }
};

int main()
{
    a a1,a2;
    a1.x=3;
    a2.x=1;
    a1+a2; //here current object is a1 and a2 is treated as an argument to the operator overloading function, hence this will store the address of a1
    a1-a2;


}