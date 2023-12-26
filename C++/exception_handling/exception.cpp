#include<iostream>
using namespace std;

int main()
{
    int x=4;

    try{
        if (x<4)
        {
            cout<<"radhekrishna";
        }
        else{
            throw(x);
        }
    }

    catch (int num)
    {
        cout<<"kripaluji maharaj";
        cout << num;
    }
}