#include<iostream>
using namespace std;

class animal{
    public:
    int a1=4;
};

class plant
{
    public :
    int p1 = 41;
};

class a : public animal{  //single inheritance

};

class b : public a{  //multi-level  (animal -> a -> b)

} ;


class living : public animal, public plant  //multiple inheritance
{

};

class hybrid : public b, public living{     //hybrid inheritance

};

//heirarchical inheritance
class heirarchy1 : animal
{

};

class heirarchy2 : animal
{

};

class heirarchy11 : heirarchy1
{

};

class heirarchy21 : heirarchy2
{

};

int main()
{
    animal a;
    plant p;
    living l;
    cout <<endl << l.a1<<endl <<l.p1<< endl;
}