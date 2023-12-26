#include<stdio.h>

typedef struct structures_arrow
{
    int data;
    struct structures_arrow * ptr;
}x;

int main()
{
    x a[2];
    x * ptr;
    ptr=&a;
    ptr->data=34;
    ptr++;
    ptr->data=90;

    printf("%d",a[0].data);
    printf("\n%d\n",a[1].data);


}