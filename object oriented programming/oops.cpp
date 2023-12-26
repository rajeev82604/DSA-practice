#include<iostream>
using namespace std;
class fruits {
    private:
    int number;

    public:
    void setnumber (int x)
    {
        number = x;
    }
    int getnumber()
    {
        return number;
    }
};
int main()
{
     fruits *r=new fruits;
     r->setnumber(23);
     cout<<" entered number is "<<r->getnumber();
}