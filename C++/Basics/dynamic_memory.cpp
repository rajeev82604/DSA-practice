#include<iostream>
using namespace std;
int main ()
{
    int x[4];
    cout<<x<<endl<<&x<<endl<<&x[0];
    int (* y)[4] = &x;
    //printf("%p\n%p\n%p",x,&x,&x[0]);
    // printf("enter the values : ");
    // for (int i = 0; i < 4; i++)
    // {
    //     scanf("%d",&y[i]);
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d",y[i]);
    // }
    
    // printf("Enter value");
    // scanf("%d",x);
    // printf("\n%d",x[0]);
}
 