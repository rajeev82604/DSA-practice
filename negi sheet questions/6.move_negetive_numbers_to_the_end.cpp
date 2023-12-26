//dont use sizeof(vec), use vec.size() to get the size of the vector
#include<bits/stdc++.h>
using namespace std;

void segregateElements(int arr[],int n)
    {
        int no_of_positive_numbers = 0;
        vector<int> vec;
        int pointer = 0;
        for (int i = 0 ; i<n ; i++)
        {
            if( arr[i]<0 ) 
            {
                vec.push_back(arr[i]);
            }
            if( arr[i]>0 )
            {
                swap( arr[i], arr[pointer] );
                pointer++;
                no_of_positive_numbers++;
            } 
        }
        //cout<<no_of_positive_numbers;
        //now -ve numbers will be inserted after the positive numbers
        int j =0;
        for (int i = no_of_positive_numbers; i<n ; i++)
        {
            arr[i] = vec[j++];
        }
    }
void display(int arr[], int size)
{
    for (int i = 0; i< size ; i++)
    {
        cout<<arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6 } ; //o/p= 1  3  2  11  6  -1  -7  -5
    segregateElements (arr,8);
    display(arr,8);
}
