//not much used
#include<bits/stdc++.h>
using namespace std;

array<int,4> arr0; //another way of declaring arrays(they are containers in stl)
                //the default values are 0 in this global declaration
int main()
{
    array<int,6> arr; //default = garbage values

    array<int,5> arr2 = {1,4,5}; //the remaining values would be 0

    //so to initialise the entire array with 0, we can simply write
    array<int,9> arr3 = {0};
    int array4[5] = {0};
    //cout<<arr<<endl<<arr2<<endl<<arr3<<endl; this will give error

    //printing the arrays
    cout << endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 9; i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<array4[i]<<" ";       //this will also initialise the remaining elements with 0
    }
    cout<<endl<<endl;
}