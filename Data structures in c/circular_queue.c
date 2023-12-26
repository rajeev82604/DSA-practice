#include<stdio.h>
#include<stdlib.h>
#define n 3
int queue[n];
int f=-1;
int r=-1;
 void enqueue()
 {
    int x;                                  //input element for insertion 
    printf("Enter element to enqueue : ");
    scanf("%d",&x);
    
    if (f==-1&&r==-1)
    {
        f=r=0;
        queue[r]=x;
    }
    else if ((r+1)%n==f)
    {
        printf("over flow");
    }
    else
    {
        r=(r+1)%n;
        queue[r]=x;
    }
 }
 void dequeue()
 {
    if (f==-1&&r==-1)
    {
        printf("under flow");
    }
    else if (f==r) //there is only 1 element left in the queue
    {
       f=r=-1;
    }
    else
    {
        f=(f+1)%n;
    }
    
 }

 void display()
 {
    int i=f;
    if (f==-1&&r==-1)
    {
        printf("queue is empty");
    }
    else{
        while (i!=r)
        {
            printf("%d",queue[i]);
            i=(i+1)%n;
        }
        printf("%d",queue[r]);
    }  
 }

 int main()
 {
    while(1)
    {
        int choice;
        printf("\n");
        printf("\n1. enqueue\n");
        printf("2. dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
 }