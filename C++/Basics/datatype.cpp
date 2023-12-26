#include<iostream>
using namespace std;
int main()
{
    int x,y;
    float c;
    x=13,y=6;
    c=x/y;      //here both x and y are integers, so the product is also an integer
    cout<<c<<endl;
    cout<<13/6<<endl;
    cout<<13.0/6; //even if one operand is float, then the result is float
    

}
