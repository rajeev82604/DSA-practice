#include<iostream>
using namespace std;
class laptop{
    public:
    int x=4;
    int arr[4];
};
int main()
{
    // laptop* mac[2] ;
    laptop* mac = new laptop[10];
    // for (int i = 0; i < 2; i++)
    // {
    //     mac[i]=new laptop;
    // }
    // cout<<mac[0]->x;

    
    //withot dynamic memory allocation : 
    
    // laptop mac[2];
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         mac[i].arr[j]= 10+j;
    //     } 
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<mac[0].arr[i]<<endl
    // }  
 
}