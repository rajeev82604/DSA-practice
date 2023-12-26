#include<iostream>
using namespace std;

void fun(int (*y)[3]){
    //y[0]=9;  we cannot write like this because y is a 
               //pointer to an array of integers, not an individual integer. 

    (*y)[0]=9;
}
int main ()
{
   int x[3]={1,2,3};
   for (int i = 0; i < 3; i++)
   {
        cout<<x[i]<<endl;
   }
   fun(&x); //passing an array to the function fun
   for (int i = 0; i < 3; i++)
   {
        cout<<x[i]<<endl;
   }
}