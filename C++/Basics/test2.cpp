#include<iostream>
using namespace std;

int* shift_zeroes(int * array, int size)
{
    int arr2[size];
    int count=0;
    for (int i = 0; i < size; i++)
    {
        if (array[i]!=0)
        {
            arr2[count]= array[i];
            count++;
        } 
    }
    for (int i = 0; i < size; i++)
    {
        array[i]=0;
    }
    //int j=count;
    for (int i = 0; i < count; i++)
    {
        array[i]= arr2[i];
        //j++;
    }
    
    return array;
}

int main()
{
    int len=5;
    int arr[5] = {1,0,3,0,5};
    int* a = shift_zeroes(arr ,len);
    for (int i = 0; i < len; i++)
    {
        cout<<a[i] <<" ";
    }
    
}