//binary search with duplicate elements
//this is to find the first occurance of a number.
//if we just need to find whether a no. is present or not,then we dont need to change the first if condition
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size, int target)
{
    int left = 0;
    int right = size-1;

    while(left<=right)
    {
        int mid = left+ (right-left)/2 ;
        if( arr[mid] == target )
        {
            if( mid ==0 || arr[mid-1]!=target) //if mid is the first index, then mid-1 may lead to segmentation errors
            {
                    return mid; //found the first occurance 
            }
            else{
                    right = mid-1; // move to left to find the first occurance
            }
        }
        else if( arr[mid]< target ) //this means that the element is present to the right
        {
            left = mid+1;
        }
        else if( arr[mid]>target )
        {
            right = mid-1;
        }
    }
    return -1; //this means that the element is not found
}


int main() {
    
    int arr[] = {1,2,3,5,5,7,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]) ;    //calculate the size of array here,because if you pass array to the function,and their you find sizeof(arr), then it will give you the size of pointer,not the array
    cout<< binarySearch(arr,n,5);              // o/p = 3 
    return 0;
}