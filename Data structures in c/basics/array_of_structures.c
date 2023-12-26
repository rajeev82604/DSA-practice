#include<stdio.h> // array of structures

typedef struct 
{
    int number;
    char name[30];
}s;

int main()
{
    s a[2];
    for (int  i = 0; i < 2; i++)
    {
        printf("enter the name : ");
        scanf("%s",a[i].name);
        
    }
    
    for (int  i = 0; i < 2; i++)
    {
        printf("\n%s",a[i].name);  
    }
}