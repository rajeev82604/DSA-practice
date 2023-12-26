#include<iostream>
using namespace std;

class base1{
    private: 
    int a, b;
    public:
    base1(int b1,int b2){
        a=b1;
        b=b2;
    }
    int data1(){
        return a;
    }
    int data2(){
        return b;
    }
    base1(){}
};
class base2 : public base1{

    public:
    int c;
   
    base2(int bb){
        c=bb;
    }
    void display(){
        cout<<"The vlaue of a= "<<data1()<<endl;
        cout<<"The value of b = "<< data2()<<endl;
        cout<<"The vlaue of c = "<< c<<endl;
    }

};
int main(){
    base1 bb2(4,5);
    base2 bb1(2);
    
    bb1.display();

   
    return 0;

}