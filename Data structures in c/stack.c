#include<stdio.h>
#include<limits.h>
#define MAX 10

int stack[MAX];         //doubt= why do we need to return intmin in pop? can't we just write return?
int top=-1;             //ans= because even when stack is empty, we would have to return a value as pop is int not void. But cant return ant random value, as we are storing the retured value in the main function, so we return a very small number.

void push(int item)
{
    
    if(top==MAX-1)
    {
        return;
    }
    top=top+1;
    stack[top]=item;
}

int pop()
{
    if (top==-1)
    {
        return INT_MIN;
    }
    int x= stack[top];
    top=top-1;
    return x;
}

int main()
{
    int x;
    printf("enter the element that you want to push : ");
    scanf("%d",&x);
    push(x);
    push(x+1);
    for (int i = 0; i <= top; i++)  //imp : loop should only go till top 
    {
        printf("%d",stack[i]);
    }
    int delitem=pop();
    printf("\n");
    for (int i = 0; i <= top; i++)
    {
        printf("%d",stack[i]);
    }
   
}