#include<iostream>
using namespace std;
class hero {
    public:
    int age;
    char * arr = new char[5];
    hero (){
        cout<<"H"<<endl;
    }
    // hero (const hero& temp){
    //     age = temp.age;
    //     cout<<endl<<"hello";
    // }
};

int main ()
{
   hero surya;
    for (int i = 0; i < 5; i++)
    {
        surya.arr[i]='e';
    }
    
    
    

    cout<<surya.arr;
//    hero venkat = surya;
   
//    cout<<surya.age<<endl;
//    cout<<venkat.age;

}