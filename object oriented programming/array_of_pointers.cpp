#include<iostream>
using namespace std;

int main(){
    int* ptr[5];
    int arr[5];
    for(int i=0;i<5;i++){
        ptr[i]=&arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<ptr[i]<<endl;
    }
    

}