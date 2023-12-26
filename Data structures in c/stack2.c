#include<stdio.h>
#include<stdlib.h>
#define n 10
int stack[n];
int top = -1;

void push()
{
    int x;
    printf("Enter the element to push : ");
    scanf("%d",&x);
    
    if (top==n-1)
    {
        printf("stack overflow");
    }
    else
    { 
        top++;
        stack[top]=x;
    }  
}
void pop()
{
    if (top==-1)
    {
        printf("Stack uderflow");
    }
    else
    {
        printf("The popped element is : %d : ",stack[top]);
        top--;
    }   
}
void display ()
{
    if (top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d",stack[i]);
        }  
    }   
}
void seek()
{
    if (top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("%d",stack[top]);
    }
}
int main()
{
   while(1)
    {
        int choice;
        printf("1. \nPush\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Seek\n");
        printf("5. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            seek();
            break;
        case 5:
            exit(0);
        }
    }
}