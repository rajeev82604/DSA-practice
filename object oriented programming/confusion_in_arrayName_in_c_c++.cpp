#include<iostream>
using namespace std;
int main ()
{
    int x[4];
   
    int * z  = x;   // here if we use x alone, then it boils down to address of first element
                    // here if we write &x it will give error.
    int (* y)[4] = &x;  //here x will not boil down to address of first element
                        //instead it means the address of the entire array

    cout<<x<<endl<<&x<<endl<<&x[0]<<endl<<y<<endl;

}